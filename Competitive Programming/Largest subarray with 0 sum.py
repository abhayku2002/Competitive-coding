'''
Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

Example 1:

Input:
N = 8
A[] = {15,-2,2,-8,1,7,10,23}
Output: 5
Explanation: The largest subarray with
sum 0 will be -2 2 -8 1 7.
Your Task:
You just have to complete the function maxLen() which takes two arguments an array A and n, where n is the size of the array A and returns the length of the largest subarray with 0 sum.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= N <= 105
-1000 <= A[i] <= 1000, for each valid i
'''
#Your task is to complete this function
#Your should return the required output
class Solution:
    def maxLen(self, n, arr):

        #Code here

        d={}

        curr_sum=0

        max_len = 0

        for i in range(0,n):

            curr_sum = curr_sum + arr[i]

            if curr_sum == 0:

                max_len= i+1

            if curr_sum in d:

                max_len = max( max_len , i-d[curr_sum] )

            else:

                d[curr_sum] = i

        return max_len

#{ 
 # Driver Code Starts
if __name__=='__main__':
    t= int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.maxLen(n ,arr))

# } Driver Code Ends
