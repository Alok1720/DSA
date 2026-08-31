# Write your MySQL query statement below

SELECT W2.id
FROM Weather W1
JOIN Weather W2
    ON DATEDIFF(W2.recordDate, W1.recordDate) = 1
    AND W2.temperature > W1.temperature;



-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna