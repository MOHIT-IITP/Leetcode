def isHappy(n):
    seen = set()
    curr = str(n)
    while curr not in seen:
        seen.add(curr)
        sum = 0
        for elem in curr:
            elem = int(elem)
            sum +=elem**2;
        if sum==1:return True
        curr = str(sum)
    return False
            
