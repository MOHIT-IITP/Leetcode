def lengthOfLast(lst):
    wordlst =lst.strip().split(" ")
    if not wordlst:
        return 0
    return len(wordlst[-1])
lst="    hello world    "
print(lengthOfLast(lst))

