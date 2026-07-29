class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        arr = list()
        for index , value in enumerate(nums):
            for i , v in enumerate(nums):
                if index != i and value + v == target:
                    arr.append(index)
                    arr.append(i)
                    return arr