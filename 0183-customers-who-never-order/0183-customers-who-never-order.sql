/* Write your PL/SQL query statement below */
select name Customers from Customers where 
id not in (select customerId from Orders);