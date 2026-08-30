# Write your MySQL query statement below

with t1 as(
select email, min(id) as id
from person
group by email
)

delete from person where id not in (select id from t1) 


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna