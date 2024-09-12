def major(lst):
    dict = {}
    for elem in lst:
        if elem in dict.keys():
            dict[elem]+=1
        else:
            dict[elem]=1
    mx = max(dict,key=dict.get)
    print(mx)

lst=[2,3,3,3,2,2,2,2,2,2]
major(lst)

