class Solution:
    def isHappy(self, n: int) -> bool:
        s = set()
        while n != 1:
            t = 0
            for d in str(n):
                t += int(d)**2
            if t in s:
                return False
            s.add(t)
            n = t
        return True
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna