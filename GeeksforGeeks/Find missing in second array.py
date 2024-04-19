
#Given two integer arrays a of size n and b of size m, the task is to find the numbers which are present in the first array a, but not present in the second array b.
class Solution:
    def findMissing(self,a,b,n,m):
        result = []
        s = set(b)
        for n in a:
            if n not in s:
               result.append(n)
        return result
