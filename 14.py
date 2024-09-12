# this answer is correct but it limited for some of the test case
def longestCommonPrefix(lst):
    count ={}
    answer = ""
    for word in lst:
        for elem in word:
            count[elem]=1+count.get(elem,0)
    for word, counts in count.items():
        if counts>=3:
            answer+=word
    return answer
            
lst =["flower","flow","flight"]
print(longestCommonPrefix(lst))

# correct answer
def longestCommonPrefix(v):
    ans =""
    v=sorted(v)
    last = v[-1]
    first = v[0]
    for i in range(min(len(first),len(last))):
        if(first[i]!=last[i]):
            return ans
        ans+=first[i]
    return ans

