#write a function to reverse an array

def reverse_array(arr):
    low = 0
    high = len(arr) - 1
    
    while(low < high):
        arr[low] , arr[high] = arr[high] , arr[low]
        low +=1 
        high -=1
        
    return arr


array = [10,30,23,22,101,2,3,4,5,12]
print(reverse_array(array)) # [12, 5, 4, 3, 2, 101, 22, 23, 30, 10]