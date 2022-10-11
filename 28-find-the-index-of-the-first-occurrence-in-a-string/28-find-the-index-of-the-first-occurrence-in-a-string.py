class Solution:
    def strStr(self, haystack, needle):
        if not needle:
            return 0
        
        if needle not in haystack:
            return -1
        
        head = haystack.split(needle)[0]
        return len(head)
        