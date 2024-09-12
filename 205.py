# // there are some case which this code is not passing 
def isIsomorphic(s,t):
    dic01 = {}
    dic02 = {}
    for elem in s:
        if elem in dic01.keys():
            dic01[elem]+=1
        else:
            dic01[elem]=1
    for elem1 in t:
        if elem1 in dic02.keys():
            dic02[elem1]+=1
        else:
            dic02[elem1]=1
    lst01=[]
    lst02=[]
    for char , value in dic01.items():
        lst01.append(value)
    for char01 , value01 in dic02.items():
        lst02.append(value01)
    return lst01==lst02
s = "aaabbba"
t = "bbbaaab"
if(isIsomorphic(s,t)):
    print("true")
else:
    print("false")

# SAME QUESTION
#
# CORRECT WAY
#
def isIsomorphic(s,t):
    dicti = {}
    hset = set()
    for i in range(len(s));
        schar = s[i]
        tchar = t[i]
        if (schar not in dicti):
            if(tchar in hset):
                return False
            dicti[schar]=tchar
            hset.add(tchar)
        else:
            if(tchar !=dicti[schar]):
                return False
    return True


