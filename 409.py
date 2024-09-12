# problem no 409 leetcode "longest palindrome"
def longest(s):
    charSet = set()
    length =0
    for elem in s:
        if elem in charSet:
            charSet.remove(elem)
            length+=2
        else:
            charSet.add(elem)
    if charSet:
        length+=1
    print(length)


s = "abccccdd"
longest(s)
