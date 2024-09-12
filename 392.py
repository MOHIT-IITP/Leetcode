def isSubsequence(s,t):
    index = len(s)-1
    for letter in reversed(t):
        if index >=0 and s[index]== letter:
            index -=1 
        if index<0:
            return True
    return False

s = "ah"
t = "abdef"
if (isSubsequence(s,t)):
    print("true")
else:
    print("False")

