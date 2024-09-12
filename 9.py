def ispali(x):
    if(x<0):
        return False;
    nu = str(x)
    reverse  = nu[::-1]
    return reverse==nu
x =10
print(ispali(x))
