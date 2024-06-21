/* Write your PL/SQL query statement below */
select e.name,b.bonus from employee e LEFT OUTER JOIN bonus b
on e.empId = b.empId where bonus<1000 or bonus is Null;