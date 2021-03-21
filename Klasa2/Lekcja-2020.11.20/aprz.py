def swap(l, r, arr):
    temp = arr[l]
    arr[l] = arr[r]
    arr[r] = temp
    return

a = []
input()
arr = input().rstrip().split()
for k, v in enumerate(arr):
    arr[k] = int(v)
pivot, counter = (len(arr) - 1) // 2, 0
l, r = 0, len(arr) - 1
while l < pivot and r > pivot and counter < 3:
    while arr[l] < arr[pivot]:
        l += 1
    while arr[r] > arr[pivot]:
        r -= 1
    if l <= r:
        print(arr[l], arr[r])
        swap(l, r, arr)
        counter += 1
        l += 1
        r -= 1