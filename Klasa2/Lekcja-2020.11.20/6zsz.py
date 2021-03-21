a = [str(i) for i in range(10)] + ['a', 'b', 'c', 'd', 'e', 'f']
b = str(hex(int(input().rstrip())))[2:]
for i in a:
    if i in b:
        print(i.upper(), b.count(i))