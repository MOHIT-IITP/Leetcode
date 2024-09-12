def count(words,chars):
    count = 0
    for elem in words:
        if all(char in chars for char in elem): 
            count+=len(elem)
    return count
words = ["cat","bat","hat","tree"]
chars = "atach"
print(count(words,chars))
