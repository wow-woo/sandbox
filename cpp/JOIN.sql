-- INNER JOIN
SELECT A.책번호, A.책명, B.가격 FROM 도서 A JOIN 도서가격 B ON A.책번호 = B.책번호;

-- OUTER JOINS
SELECT A.책번호, A.책명, B.가격 FROM 도서 A LEFT JOIN 도서가격 B ON A.책번호 = B.책번호;

SELECT A.책번호, A.책명, B.가격 FROM 도서 A RIGHT JOIN 도서가격 B ON A.책번호 = B.책번호;

SELECT A.책번호, A.책명, B.가격 FROM 도서 A FULL OUTER JOIN 도서가격 B ON A.책번호 = B.책번호;

-- CROSS JOIN
SELECT A.책번호, A.책명, B.책번호, B.가격 FROM 도서 A CROSS JOIN 도서가격 B; 
