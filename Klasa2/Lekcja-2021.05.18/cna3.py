N = int(input().rstrip())
s = {}
for i in range(N):
    a = input().rstrip()
    if a not in s:
        s[a] = 0
    else:
        s[a] = 1
for i in s:
    if s[i]:
        print(i)