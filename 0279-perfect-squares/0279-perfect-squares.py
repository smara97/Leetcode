class Solution(object):
    
    minOps = int(1e5)
    sqrs = [i**2 for i in range(1, 1000)]
    memo = [-1]*int(1e4+3)
    
    def solve(self, num):
        
        if num<=1:
            return int(bool(num==1))
            
        if self.memo[num]!=-1:
            return self.memo[num]
                
        ret = int(1e5)
        for i in self.sqrs:
            if i<= num:
                ret = min(ret, self.solve(num-i)+1)
                    
        self.memo[num] = ret
        return self.memo[num]
        
    def numSquares(self, n):
        
        """
        :type n: int
        :rtype: int
        """
        return self.solve(n)