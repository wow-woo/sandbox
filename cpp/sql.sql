-- CREATE VIEW
	CREATE VIEW view_name AS SELECT * FROM human;
	CREATE VIEW view_name2 AS SELECT col1, col2 FROM human;
	CREATE VIEW view_name3 AS SELECT * FROM human, robot where human.col1 == robot.col2;

-- CREATE OR REPLACE
CREATE OR REPLACE VIEW view_name AS SELECT * FROM table_name; 

-- DROP VIEW
	DROP VIEW view_name;

-- CREATE INDEX
	-- //인덱스 생성
	CREATE [UNIQUE] INDEX prior ON human(col1);
	CREATE [UNIQUE] INDEX high_priority ON robot(name, spec);

-- DROP INDEX
	-- //인덱스 삭제
	DROP INDEX high_priority

-- ALTER INDEX
	-- //인덱스 변경
	ALTER [UNIQUE] INDEX prior ON human(col1);

-- CREATE TABLE
CREATE TABLE human (name VHARCHAR(10), sex CHAR(1) CHECK(sex = 'M' or sex = 'F')); 
CREATE TABLE table_name (col1 NOT NULL, col2 INTEGER);

-- ALTER
-- ALTER ADD
ALTER TABLE table_name ADD col_name INTEGER DEFAULT 20;

-- ALTER MODIFY type
ALTER TABLE table_name MODIFY col_name NOT NULL;

-- ADD CONSTRAINT (append)
ALTER TABLE Persons
ADD CONSTRAINT PK_Person PRIMARY KEY (ID,LastName)

-- ALTER RENAME COLUMN A TO B
ALTER TABLE table_name RENAME COLUMN old_name TO new_name;

-- DROP TABLE
DROP TABLE table_name CASCADE;
DROP TABLE table_name RESTRICT;


-- TRAUNCATE TABLE
TRUNCATE TABLE table_name;

