# // correct code
def ispalindrome(s):
    res = ""
    elle = "abcdefghijklmnopqrstuvwxyz1234567890"
    for elem in s.lower():
        if elem in elle:
            res+=elem
    left = 0
    right =len(res)-1
    while(left<right):
        if res[left]!=res[right]:
            return False
        else:
            left+=1
            right-=1
    return True
s="1b1"
if(ispalindrome(s)):
    print("true")
else:
    print("false")

