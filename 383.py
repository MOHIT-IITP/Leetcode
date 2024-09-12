def canCon(ransomNote, magazine):
    dic ={}
    for elem in magazine:
        if elem in dic:
            dic[elem]+=1
        else:
            dic[elem]=1
    for char in ransomNote:
        if char in dic & dic[char]>0:
            dic[char]-=1
        else:
            return False
    return True

