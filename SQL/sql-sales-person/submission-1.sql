-- Write your query below
select name
from sales_person 
where sales_person.sales_id not in (select o.sales_id from orders o join company c on c.com_id=o.com_id where c.com_id=1)