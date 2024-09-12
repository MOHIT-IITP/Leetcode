def reverse(s):
    word = s.split()
    reversed_word  = word[::-1]
    reversed_string = ' '.join(reversed_word)
    return reversed_string

s="hello this is geeksforgeeks"
print(reverse(s))
