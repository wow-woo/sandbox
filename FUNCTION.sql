
SELECT COUNT(학생명) FROM 학생 WHERE 국어 >= 79;

SELECT MAX(국어), MIN(국어) FROM STUDENT;

SELECT STDDEV(국어), VARIAN(국어) FROM STUDENT;

SELECT 과목이름, MIN(점수) AS 최소점수, MAX(점수) AS 최대점수 FROM 성적 GROUP BY 과목이름 HAVING AVG(점수) >= 90;

SELECT 부서, AVG(급여) FROM 급여 GROUP BY 부서;

SELECT 부서, 직책, SUM(급여) FROM 급여 GROUP BY 부서, 직책;

SELECT 학교명, 학년, SUM(인원) AS 인원 FROM 학교 GROUP BY ROLLUP(학교명, 학년);

-- WINDOW FUNCTION : OLAP
SELECT NAME, SALARY, 
RANK() OVER (ORDER BY SALARY DESC) A,
DENSE_RANK() OVER (ORDER BY SALARY DESC) B,
ROW_NUMBER() OVER (ORDER BY SALARY DESC) C FROM EMPLOYEE;

SELECT NAME, SALARY,
FIRST_VALUE(NAME) OVER (ORDER BY DESC) A,
LAST_VALUE(NAME) OVER (ORDER BY DESC) B,
LAD(NAME) OVER (ORDER BY DESC) C,
LEAD(NAME) OVER (ORDER BY DESC) D FROM EMPLOYEE;

SELECT NAME, SALARY, 
RATIO_TO_REPORT(SALARY) OVER (ORDER BY SALARY DESC) A,
PERCENT_RANK(SALARY) OVER (ORDER BY SALARY DESC) B FROM EMPLOYEE;

SELECT 이름, 점수, DENSE_RANK(점수) OVER (ORDER BY 점수 DESC) AS 등수 FROM STUDENT;

SELECT NAME, SALARY, FIRST_VALUE(NAME) OVER (ORDER BY SALARY DESC) AS A FROM EMPLOYEE;
