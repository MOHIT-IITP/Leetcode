class Solution(object):
    def isPowerOfFour(self, n):
        if n<=0:
            return False
    return math.log(n,4).is_integer()
