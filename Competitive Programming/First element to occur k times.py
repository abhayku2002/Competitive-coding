'''
Given an array of N integers. Find the first element that occurs at least K number of times.
 

Example 1:

Input :
N = 7, K = 2
A[] = {1, 7, 4, 3, 4, 8, 7}
Output :
4
Explanation:
Both 7 and 4 occur 2 times. 
But 4 is first that occurs 2 times
As at index = 4, 4 has occurred 
atleast 2 times whereas at index = 6,
7 has occurred atleast 2 times.
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function firstElementKTime() which takes the array A[], its size N, and an integer K as inputs and returns the required answer. If the answer is not present in the array, return -1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= N, K <= 105
1<= A <= 106
'''
#User function Template for python3


class Solution:

    def firstElementKTime(self,  a, n, k):

        # code here

        res={}

        for ele in a:

            if ele not in res:

                res[ele]=0

            res[ele]+=1

            if res[ele]==k:

                return ele

        return -1
    



#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        sz = [int(x) for x in input().strip().split()]
        n, k = sz[0], sz[1]
        a = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.firstElementKTime(a, n, k))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends
