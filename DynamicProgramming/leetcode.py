class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        maxLen = 0
        q = []
        for i in range(0,len(s)):
            
            if(s[i] in q):
                max = len(q)
                q = []
            
            else:
                q.append(s[i])
        print(max)
        
