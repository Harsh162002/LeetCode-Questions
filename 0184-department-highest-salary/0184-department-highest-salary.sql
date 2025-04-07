SELECT d.name as Department, e.name as Employee, e.Salary
FROM employee as e, department as d
WHERE e.departmentId = d.id
AND e.salary = (SELECT MAX(salary) FROM employee WHERE departmentId = d.id) 