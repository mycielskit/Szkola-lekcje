county = 0
a = int(input().rstrip().split(' ')[0])
for i in range(a):
    line = input().rstrip().split(' ')
    if line != line[::-1]:
        county += 1
print(county)