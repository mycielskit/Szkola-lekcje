from re import findall

s = ""
a = input().rstrip()

for i in a:
    if i not in s and len(findall(i, a)) % 2:
        s += i

print(s)