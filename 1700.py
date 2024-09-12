from collections import Counter
def countStudents(students,sandwiches):
    dicti= Counter(students)
    res = len(sandwiches)
    for elem in sandwiches:
        if elem in dicti.keys():
            if(students[elem]>0):
                dicti[elem]-=1
                res-=1
            else:
                return res
        else:
            return res
    return res


m=[1,1]
n=[0,1]
print(countStudents(m,n))



