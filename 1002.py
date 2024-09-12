# // print the common word in the list
# leetcode dialy challenge
def common(words):
    res = []
    for char in set(words[0]):
# here we are including the minimum occurance of the character
# like if b is not present in the third word then it min occurance will be 0
        res += char*min([word.count(char) for word in words])
    print(res)
lst=["bella","label","roller"]
common(lst)



