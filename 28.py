def solution(haystack,needle):
    n = len(needle)
    for i in range (len(haystack)):
        word = haystack[i:i+n]
        if word  == needle:
            return i
    return -1

m = "leetcode"
n = "sad"
print(solution(m,n))
