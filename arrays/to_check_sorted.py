#write a function to check whether an array is sorted or not

def is_sorted(arr):
    for i in range(1 , len(arr)):
        if arr[i-1] > arr[i]:
            return False
    return True


list = [1,2,3,4,5,6,7,8,9,10]
list2 = [1,2,3,4,5,6,7,8,9,10,5]

print("This is sorted",is_sorted(list))
print("This is not sorted",is_sorted(list2))