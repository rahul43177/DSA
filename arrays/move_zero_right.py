def move_zeros_to_right(arr):
    
    temp = []
    count = 0
    for i in range(len(arr)):
        if arr[i]!= 0:
            temp.append(arr[i])
        else :
            count+=1
    
    while(count):
        temp.append(0)
    
    return temp

array = [1,2,2,3,4,0,2,0,2,3,40,0]
print(move_zeros_to_right(array))
