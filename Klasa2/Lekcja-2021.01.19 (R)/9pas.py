for i in range(5):
    a = hex(int(input().rstrip()))[2:]
    print("TAK") if a == a[::-1] else print("NIE")