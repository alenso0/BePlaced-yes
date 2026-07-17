'''
input : [1, 2, 3, 4, 5] it's sorted
target = 7 
implementation in : O(n)
output : [1,4]
'''


arr1 = [1, 2, 3, 4, 5]
target = 7

def brute_force(arr1, target):
    for i in range(len(arr1)):
        ind = target - arr1[i]
        if ind in arr1 and arr1.index(ind) != i:
            print([i, arr1.index(ind)])
            break

def two_pointer(arr1, target):
    left = 0
    right = len(arr1) - 1
    for i in range(len(arr1)):
        sum = arr1[left] + arr1[right]
        if sum == target:
            print([left, right])
            break
        elif sum < target: #it works well because it's sorted
            left += 1
        else: # this line also works well because it's sorted
            right -= 1


two_pointer(arr1, target)
brute_force(arr1, target)