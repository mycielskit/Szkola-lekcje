a = input().rstrip()
out = 0
for i in a:
    if not ord(i) % 2:
        out += 1
print(out)