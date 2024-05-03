# Write your MySQL query statement below


select max(salary)as SecondHighestSalary from Employee where Salary < (select max(salary) from Employee)



#SELECT Salary AS NthHighest
# FROM Employee
# ORDER BY Salary DESC
# LIMIT N-1,1