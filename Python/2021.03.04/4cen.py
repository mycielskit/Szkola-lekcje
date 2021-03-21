a, n = input().rstrip(), int(input().rstrip())
print(''.join([chr(ord(i) + n) for i in a]))