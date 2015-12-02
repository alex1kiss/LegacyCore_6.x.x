REVOKE ALL PRIVILEGES ON * . * FROM 'root'@'localhost';

REVOKE ALL PRIVILEGES ON `world` . * FROM 'root'@'localhost';

REVOKE GRANT OPTION ON `world` . * FROM 'root'@'localhost';

REVOKE ALL PRIVILEGES ON `characters` . * FROM 'root'@'localhost';

REVOKE GRANT OPTION ON `characters` . * FROM 'root'@'localhost';

REVOKE ALL PRIVILEGES ON `auth` . * FROM 'root'@'localhost';

REVOKE GRANT OPTION ON `auth` . * FROM 'root'@'localhost';

REVOKE ALL PRIVILEGES ON `hotfixes` . * FROM 'root'@'localhost';

REVOKE GRANT OPTION ON `hotfixes` . * FROM 'root'@'localhost';

DROP USER 'root'@'localhost';

DROP DATABASE IF EXISTS `auth`;

DROP DATABASE IF EXISTS `characters`;

DROP DATABASE IF EXISTS `hotfixes`;

DROP DATABASE IF EXISTS `world`;