# Write your MySQL query statement below

SELECT p.firstName, p.lastName, s.city, s.state
FROM Person p
LEFT JOIN Address s
ON p.personId = s.personId; 


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna