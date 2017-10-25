CREATE DATABASE the_world;
CREATE TABLE hello_world (
    Name char(20),
    ID int,
    favPhrase char(11)
);
INSERT INTO hello_world
VALUES ('Foo Bar', 1, 'Hello world!');

SELECT favPhrase FROM hello_world
WHERE ID=1;
