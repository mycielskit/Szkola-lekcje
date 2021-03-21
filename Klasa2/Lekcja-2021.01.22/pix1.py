mini, maxi = 2 ** 64, 0
a = int(input().rstrip().split(' ')[0])
for i in range(a):
    line = input().rstrip().split(' ')
    for i in line:
        mini, maxi = min(mini, int(i)), max(maxi, int(i))
print(maxi, mini)