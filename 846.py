# one of the hardest question still trying to learn it
def stringHand(hand, groupSize):
    if len(hand)%groupSize:
        return False
    count ={}
    for elem in hand:
        count[elem] = 1+count.get(elem,0)
    minH = list(count.keys())
    heapq.heapify(minH)
    while minH:
        first = minH[0]
        for i in range(first, first+groupSize):
            if i not in count:
                return False
            count[i]-=1
            if count[i]==0:
                if i!=minH[0]:
                    return False
                heapq.heappop(minH)
    return True
