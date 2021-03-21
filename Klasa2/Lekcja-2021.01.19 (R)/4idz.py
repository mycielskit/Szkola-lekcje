a = int(input().rstrip())
mid = a // 2
a = input().rstrip().split(' ')
l = 0
r = 0
for i in range(0, mid):
    if int(a[i]) < int(a[mid]):
        l += 1
for i in range(mid + 1, len(a)):
    if int(a[i]) > int(a[mid]):
        r += 1
print(l, r)