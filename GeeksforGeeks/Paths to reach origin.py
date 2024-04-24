'''
You are standing on a point (x, y) and you want to go to the origin (0, 0) by taking steps either left or 
down i.e. from each point you are allowed to move either in (x-1, y) or (x, y-1). Find the number of paths from point to origin.
'''

class Solution:
    def ways(self, n,m):
        #write you code here
        mod = (10 ** 9) + 7
        dp = [[0] * (m + 1) for _ in range(n + 1)]
        for i in range(n + 1):
            for j in range(m + 1):
                if i == 0 or j == 0:
                    dp[i][j] = 1
                else:
                    dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod
        return dp[n][m]

