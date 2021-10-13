# tests are wrong, use C++ unsigned long longs
fib, a, b, out = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89], int(input().rstrip()), input().rstrip().split(' '), 1
for i in b:
    out *= fib[int(i)]
    print(out, end=' ')