# trying to rotate a list
def rotate(lst,k):
    n = len(lst)
    k=k%n

    # reversing the whole lst
    lst[::-1]
    # reversing the element only up to k 
    lst[:k:-1]
    # reversing the element from k to end
    lst[k::-1]
    return lst

k=1
lst=[1,2,3,4,5]
rotate(lst,k)

