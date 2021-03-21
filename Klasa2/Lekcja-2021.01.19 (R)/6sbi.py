from math import sqrt
from itertools import count, islice

def is_prime(n):
    return n > 1 and all(n % i for i in islice(count(2), int(sqrt(n)-1)))

for i in range(5):
    a = bin(int(input().rstrip()))[2:]
    cnt = 0
    for i in a:
        cnt += int(i)
    print("TAK") if is_prime(cnt) else print("NIE")