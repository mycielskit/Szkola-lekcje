import itertools
a = input()
b = input().rstrip().split()
print(max(len(list(y)) for (c,y) in itertools.groupby(b) if c=='1'))