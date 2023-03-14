
'''

PROBLEM : https://leetcode.com/problems/find-target-indices-after-sorting-array/description/

'''
class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        ans=[]
        nums.sort()
        for i in range(len(nums)):
            if nums[i]==target:
               # return i
                ans.append(i)
        return ans
        
