a = input().rstrip().split(' ')

num = int(a.pop(0))

for i in range(0, len(a)):
    if int(a[i]) > num:
        a.insert(i, str(num))
        break
s = ""

if len(a) != 10:
    a.append(str(num))

for i in a:
    s += i + ' '

print(s)