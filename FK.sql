-- ADD FOREIGN KEY TO EXSIST TABLE
ALTER TABLE table1 ADD FOREIGN KEY(pk_table2)
REFERENCES table2(pk_table2)
ON DELETE [SET NULL | RESTRICT | CASCADE];