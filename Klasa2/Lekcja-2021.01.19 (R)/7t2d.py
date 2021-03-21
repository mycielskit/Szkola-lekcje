def summation(a):
    sumof = 0
    for i in a:
        sumof += int(i)
    return sumof

maxlist = None
maxsum = 0

for i in range(10):
    a = input().rstrip().split(' ')
    x = summation(a)
    if x > maxsum:
        maxlist = a
        maxsum = x
s = ''
for i in maxlist:
    print(i, end=' ')