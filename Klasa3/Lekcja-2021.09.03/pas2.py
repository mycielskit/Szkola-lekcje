c = 0
for i in range(200):
    a, b = input().rstrip().split(' ')
    if b in a:
        c += 1
print(c)