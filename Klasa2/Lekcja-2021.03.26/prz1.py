def signum(n):
    if(not n):
        return 0
    elif(n > 0):
        return '+1'
    return -1

def det(x):
    return x[0] * x[3] + x[2] * x[5] + x[4] * x[1] - x[2] * x[1] - x[4] * x[3] - x[0] * x[5]

for i in range(10):
    a = input().rstrip().split()
    print(signum(det([int(j) for j in a])))