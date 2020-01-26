t = int(input())
for _ in range(t):
    n = int(input())
    s = set()
    if(n != 0):
        s = set(input())
    for _ in range(1,n):
        s = s.intersection(input())
    print(len(s))
