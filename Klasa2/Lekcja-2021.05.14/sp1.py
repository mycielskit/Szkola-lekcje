key, text = int(input().rstrip()), input()
print(''.join(text[i::key] for i in range(key)))