a = ''.join(input().rstrip().split(' ')).lower()
print('TAK' if a == a[::-1] else 'NIE')