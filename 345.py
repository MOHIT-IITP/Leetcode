# working code <ode
def reverseVowels(s):
    # converting into list 
    # string is immutable
    s=list(s)
    charVowels = 'aeiouAEIOU'
    left = 0
    right = len(s)-1
    while(left<right):
        while(left<right and s[left] in charVowels):
            left+=1
        while(left<right and s[right] in charVowels):
            right-=1
        if(left<right):
            s[left],s[right]=s[right],s[left]
            left+=1
            right-=1
    return ''.join(s) 
