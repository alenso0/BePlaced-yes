'''Input Arr: 0 2 0 0 6 4
Output arr : 2 6 4 0 0 0
'''

arr1 = [0, 2, 0, 0, 6, 4]
arr2 = [0]
arr3 = [1, 2, 3, 4, 5]
arr4 = [0, 1]
arr5 = [0,1,0]

def move_zeroes(arr):
    non0_index = 0  # indexing place

    # moving to the front
    for num in arr:
        if num != 0:
            arr[non0_index] = num
            non0_index += 1

    #fillout the remaining positions with zeros
    while non0_index < len(arr):
        arr[non0_index] = 0
        non0_index += 1

    return arr

print(move_zeroes(arr1))
print(move_zeroes(arr2))
print(move_zeroes(arr3))
print(move_zeroes(arr4))
print(move_zeroes(arr5))
