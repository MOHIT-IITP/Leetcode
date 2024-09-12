def SingleNumber(lst):
    res= 0
    for i in range(len(lst)):
        res = res^lst[i]
    return res
lst=[4,1,2,2,1]
print(SingleNumber(lst))
