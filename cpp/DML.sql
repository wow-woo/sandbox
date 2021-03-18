-- DML

-- SELECT
SELECT col_name FROM table_name;
SELECT DISTINCT col_name FROM table_name;
SELECT DISTINCTROW col_name FROM table_name;

-- count
SELECT COUNT (DISTINCT col_name) FROM table_name;

SELECCT 학번, 이름 FROM student WHERE 학년 IN (3, 4); 