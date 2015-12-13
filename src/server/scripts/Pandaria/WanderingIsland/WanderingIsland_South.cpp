/*
 * Copyright (C) 2008-2015 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) SkyfireUp by OZN
 * Copyright (C) LegacyCore <http://www.dar-project.org/>
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "ScriptedGossip.h"
#include "ScriptedEscortAI.h"
#include "Player.h"
#include "WorldSession.h"



#define GOSSIP_CHOOSE_FACTION     "I'm ready to choose my destiny."
#define GOSSIP_TP_STORMIND        "I would like to go to Stormwind"
#define GOSSIP_TP_ORGRI           "I would like to go to Orgrimmar"

class npc_shang_xi_choose_faction : public CreatureScript
{
    public:
        npc_shang_xi_choose_faction() : CreatureScript("npc_shang_xi_choose_faction") { }

        bool OnGossipHello(Player* player, Creature* creature) override
        {
            if (creature->IsQuestGiver())
                player->PrepareQuestMenu(creature->GetGUID());

            if (player->getRace() == RACE_PANDAREN_NEUTRAL)
            {
                if (player->GetQuestStatus(31450) == QUEST_STATUS_INCOMPLETE)
                    player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_CHOOSE_FACTION, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 1);
            }
            else if (player->getRace() == RACE_PANDAREN_ALLIANCE)
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TP_STORMIND, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 2);
            else if (player->getRace() == RACE_PANDAREN_HORDE)
                player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, GOSSIP_TP_ORGRI, GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 3);

            player->PlayerTalkClass->SendGossipMenu(1, creature->GetGUID());
            return true;
        }

        bool OnGossipSelect(Player* player, Creature* creature, uint32 /*sender*/, uint32 action) override
        {
           if (action == GOSSIP_ACTION_INFO_DEF + 1)
				player->SendPandarenChooseFactionPacket(); // #todo moje da ne e tova??
            else if (action == GOSSIP_ACTION_INFO_DEF + 2)
                player->TeleportTo(0, -8866.55f, 671.93f, 97.90f, 5.31f);
            else if (action == GOSSIP_ACTION_INFO_DEF + 3)
                player->TeleportTo(1, 1577.30f, -4453.64f, 15.68f, 1.84f);

            player->PlayerTalkClass->SendCloseGossip();
            return true;
        }
};

void AddSC_WanderingIsland_South()
{
    new npc_shang_xi_choose_faction();
}
