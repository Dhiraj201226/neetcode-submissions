-- Write your query below
select s.first_name,s.last_name,a.city,a.state
from person s
left join address a on a.person_id=s.person_id