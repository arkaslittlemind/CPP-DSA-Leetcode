# Write your MySQL query statement below
select DEPT.name as Department, EMP.name as EMPLOYEE, EMP.salary as Salary
from Department DEPT, Employee EMP
Where EMP.departmentId = Dept.id and (EMP.departmentId, salary) in (select departmentId, max(salary) from Employee group by departmentId)