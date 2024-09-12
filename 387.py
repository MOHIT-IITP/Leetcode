def firstUniqechar(s):
    dicti = {}
    for elem in s:
        if elem in dicti.keys():
            dicti[elem]+=1
        else:
            dicti[elem]=1
    for i , char in enumerate(s):
        if dicti[char]==1:
            return i
    return -1
    

