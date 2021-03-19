-- SUB-QUERY
-- SELECT SUB-QUERY (SCALAR SUB-QUERY) 서브쿼리는 반드시 단일 행 리턴;
-- FROM SUB-QUERY
-- WHERE SUB-QUERY

SELECT MAX(B.가격) FROM 도서 A INNER JOIN 도서가격 B ON A.책번호 = B.책번호 
WHERE A.책명 = '자료구조';