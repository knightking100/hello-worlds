DELIMITER //
CREATE PROCEDURE hello_world()
BEGIN
  SELECT "hello world";
END;
//
DELIMITER ;

CALL hello_world();