# Write your MySQL query statement below
select e1.name as Employee from employee e1 join employee e2 on
e1.managerid = e2.id
where e1.salary > e2.salary



-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna