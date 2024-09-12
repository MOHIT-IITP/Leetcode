# // this is correct but limited for some test case 
def romanToint(lst):
    dict={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
    total =0
    for letter in lst:
        for roman,values in dict.items():
            if letter == roman:
                total+=values
    print(total)
lst="III"
romanToint(lst)


# // correct approach of the question
def romanToint(lst):
    dict={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
    result = 0
    for i in range(len(s)):
        if i<len(s)-1 and dict[lst[i]]<dict[lst[i+1]]:
            result -=dict[lst[i]]
        else:
            result +=dict[lst[i]]





