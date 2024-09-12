def removeduplicate(nums):
    if not nums:
        return 0;
    t=1
    for i in range(1, len(nums)):
        if nums[i] !=nums[i-1]:
            nums[t]=nums[i]
            t+=1
    return t      

nums=[1,1,2,4,4,5]
removeduplicate(nums)


