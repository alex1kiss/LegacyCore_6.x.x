REVOKE ALL PRIVILEGES ON * . * FROM 'legacy'@'localhost';

REVOKE ALL PRIVILEGES ON `world` . * FROM 'legacy'@'localhost';

REVOKE GRANT OPTION ON `world` . * FROM 'legacy'@'localhost';

REVOKE ALL PRIVILEGES ON `characters` . * FROM 'legacy'@'localhost';

REVOKE GRANT OPTION ON `characters` . * FROM 'legacy'@'localhost';

REVOKE ALL PRIVILEGES ON `auth` . * FROM 'legacy'@'localhost';

REVOKE GRANT OPTION ON `auth` . * FROM 'legacy'@'localhost';

REVOKE ALL PRIVILEGES ON `hotfixes` . * FROM 'legacy'@'localhost';

REVOKE GRANT OPTION ON `hotfixes` . * FROM 'legacy'@'localhost';

DROP USER 'legacy'@'localhost';

DROP DATABASE IF EXISTS `auth`;

DROP DATABASE IF EXISTS `characters`;

DROP DATABASE IF EXISTS `hotfixes`;

DROP DATABASE IF EXISTS `world`;