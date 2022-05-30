class Solution:
   def twoSum(self, numb: List[int], target: int) -> List[int]:
       seen = {}
       for i, value in enumerate(numb):
           remaining = target - numb[i]
           
           if remaining in seen:
               return [i, seen[remaining]]
            
           seen[value] = i