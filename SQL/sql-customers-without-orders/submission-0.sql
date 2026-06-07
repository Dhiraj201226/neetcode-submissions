-- Write your query below
select customers.name
from customers
where customers.id not in ( select orders.customer_id from orders )