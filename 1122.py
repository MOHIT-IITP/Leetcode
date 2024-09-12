from collections import defaultdict
def relativeSortArray(arr1, arr2):
    arr2_set = set(arr2)
    arr1_count = defaultdict(int)
    end = []
    for n in arr1:
        if n not in arr2_set:
            end.append(n)
        arr1_count[n]+=1
    print(arr1_count)
    end.sort()
    res = []
    for n in arr2:
        for _ in range(arr1_count[n]):
            res.append(n)
    return res+end
arr1 = [2,3,1,3,2,4,6,7,9,2,19]
arr2 = [2,1,4,3,9,6]
print(relativeSortArray(arr1,arr2))
