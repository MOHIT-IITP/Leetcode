# The code is fully correct no need to worry 
def removeVal(lst,val):
    index = 0
    for i in range(len(lst)):
        if(lst[i]!=val):
            lst[index]= lst[i]
            index+=1
    return index


lst=[1,2,3,3,3,4,1,2]
removeVal(lst,3)
