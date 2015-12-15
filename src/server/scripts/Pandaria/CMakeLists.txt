# Copyright (C) 2011-2014 Project SkyFire <http://www.projectskyfire.org/>
# Copyright (C) 2008-2014 TrinityCore <http://www.trinitycore.org/>
#
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

set(scripts_STAT_SRCS
  ${scripts_STAT_SRCS}
  
  # Dungeons
  Pandaria/Dungeons/MoguShanPalace/instance_mogushan_palace.cpp
  Pandaria/Dungeons/MoguShanPalace/mogushan_palace.h
  Pandaria/Dungeons/MoguShanPalace/boss_gekkan.cpp
  Pandaria/Dungeons/MoguShanPalace/boss_trial_of_king.cpp
  Pandaria/Dungeons/MoguShanPalace/boss_xin_the_weaponmaster.cpp
  Pandaria/Dungeons/ShadoPanMonastery/shadopan_monastery.h
  Pandaria/Dungeons/ShadoPanMonastery/instance_shadopan_monastery.cpp
  Pandaria/Dungeons/ShadoPanMonastery/boss_gu_cloudstrike.cpp
  Pandaria/Dungeons/ShadoPanMonastery/boss_master_snowdrift.cpp
  Pandaria/Dungeons/ShadoPanMonastery/boss_sha_of_violence.cpp
  Pandaria/Dungeons/ShadoPanMonastery/boss_taran_zhu.cpp
  Pandaria/Dungeons/TempleoftheJadeSerpent/instance_temple_of_the_jade_serpent.cpp
  Pandaria/Dungeons/TempleoftheJadeSerpent/boss_liu_flameheart.cpp
  Pandaria/Dungeons/TempleoftheJadeSerpent/boss_lorewalker_stonestep.cpp
  Pandaria/Dungeons/TempleoftheJadeSerpent/boss_sha_of_doubt.cpp
  Pandaria/Dungeons/TempleoftheJadeSerpent/boss_wise_mari.cpp
  Pandaria/Dungeons/StormstoutBrewery/stormstout_brewery.h
  Pandaria/Dungeons/StormstoutBrewery/instance_stormstout_brewery.cpp
  Pandaria/Dungeons/StormstoutBrewery/boss_hoptallus.cpp
  Pandaria/Dungeons/StormstoutBrewery/boss_ook_ook.cpp
  Pandaria/Dungeons/StormstoutBrewery/boss_yan_zhu.cpp
  Pandaria/Dungeons/GateoftheSettingSun/gate_of_the_setting_sun.h
  Pandaria/Dungeons/GateoftheSettingSun/instance_gate_of_the_setting_sun.cpp
  Pandaria/Dungeons/GateoftheSettingSun/boss_commander_rimok.cpp
  Pandaria/Dungeons/GateoftheSettingSun/boss_raigonn.cpp
  Pandaria/Dungeons/GateoftheSettingSun/boss_saboteur_kiptilak.cpp
  Pandaria/Dungeons/GateoftheSettingSun/boss_striker_gadok.cpp
  Pandaria/Dungeons/SiegeofNiuzaoTemple/siege_of_niuzao_temple.h
  Pandaria/Dungeons/SiegeofNiuzaoTemple/instance_siege_of_niuzao_temple.cpp
  Pandaria/Dungeons/SiegeofNiuzaoTemple/boss_commander_vojak.cpp
  Pandaria/Dungeons/SiegeofNiuzaoTemple/boss_general_pavalak.cpp
  Pandaria/Dungeons/SiegeofNiuzaoTemple/boss_vizier_jinbak.cpp
  Pandaria/Dungeons/SiegeofNiuzaoTemple/boss_wing_leader_neronok.cpp
  Pandaria/Dungeons/ScarletHalls/scarlet_halls.h
  Pandaria/Dungeons/ScarletHalls/instance_scarlet_halls.cpp
  Pandaria/Dungeons/ScarletHalls/boss_armsmaster_harlan.cpp
  Pandaria/Dungeons/ScarletHalls/boss_flameweaver_koegler.cpp
  Pandaria/Dungeons/ScarletHalls/boss_houndmaster_braun.cpp
  Pandaria/Dungeons/ScarletMonastery/scarlet_monastery.h
  Pandaria/Dungeons/ScarletMonastery/instance_scarlet_monastery.cpp
  Pandaria/Dungeons/ScarletMonastery/boss_brother_korloff.cpp
  Pandaria/Dungeons/ScarletMonastery/boss_high_inquisitor_whitemane.cpp
  Pandaria/Dungeons/ScarletMonastery/boss_thalnos_the_souldrender.cpp
  Pandaria/Dungeons/Scholomance/scholomance.h
  Pandaria/Dungeons/Scholomance/instance_scholomance.cpp
  Pandaria/Dungeons/Scholomance/boss_darkmaster_gandling.cpp
  Pandaria/Dungeons/Scholomance/boss_instructor_chillheart.cpp
  Pandaria/Dungeons/Scholomance/boss_jandice_barov.cpp
  Pandaria/Dungeons/Scholomance/boss_lilian_voss.cpp
  Pandaria/Dungeons/Scholomance/boss_rattlegore.cpp

 
)

message("  -> Prepared: Pandaria")
