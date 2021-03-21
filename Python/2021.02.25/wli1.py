primes = [0, 0] + [1] * 99999

for i in range(4, 100001, 2):
    primes[i] = 0
for i in range(3, 100001, 2):
    if primes[i]:
        for j in range(3 * i, 100001, i):
            primes[j] = 0
primescount, maxprime, minprime = 0, 0, 100001
for i in range(5000):
    num = int(input().rstrip())
    if primes[num]:
        primescount += 1
        maxprime = max(maxprime, num)
        minprime = min(minprime, num)
print(primescount)
print(maxprime)
print(minprime)