INSERT INTO EMPLOYEE(NAME, AGE, SALARY) VALUES('홍길동', 24, 300);

DELETE FROM EMPLOYEE WHERE SALARY <= 300;

GRANT SELECT ON 사원 TO 홍길동; 

REVOKE UPDATE ON 학생 FROM 장길상;
