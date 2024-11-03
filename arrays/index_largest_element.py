def index_largest_element(arr):
    result = 0
    for i in range(len(arr)):
        if arr[i] > arr[result]:
            result = i
    return result


array = [10,30,23,22,101,2,3,4,5,12]

print(index_largest_element(array))


