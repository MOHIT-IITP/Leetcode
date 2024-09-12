# this was not approved by the leetcode idk why
def reverse(s):
    lst=[]
    for elem in s:
        lst.append(elem)
    print(lst[::-1])
s="mohit"
reverse(s)

# another approach 
# always works
# better approach 
def reverseString(s):
    first = 0
    last = len(s)-1
    while(first<last):

        s[first],s[last]= s[last],s[first]
        first+=1
        last-=1
