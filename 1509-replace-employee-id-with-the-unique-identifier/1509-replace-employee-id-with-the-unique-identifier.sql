# Write your MySQL query statement below
SELECT emid.unique_id, em.name
FROM Employees AS em
LEFT JOIN EmployeeUNI AS emid
ON em.id = emid.id;