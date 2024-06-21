/* Write your PL/SQL query statement below */ 
select a.name Employee from Employee a ,employee b
where a.salary > b.salary and a.managerId=b.id;