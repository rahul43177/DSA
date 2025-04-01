#remove duplicates 

def remove_duplicates(arr):
    return list(set(arr))


array = [1,2,3,4,5,5,5,5]

print(remove_duplicates(array)) # [1, 2, 3, 4, 5]


