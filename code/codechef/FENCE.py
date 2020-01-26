for _ in range(int(input())):
    n, m, k = map(int,input().strip().split())
    s = set()
    res = 4*k
    for i in range(k):
        r, c = map(int, input().strip().split())
        s.add(tuple([r,c]))
        if (r-1, c) in s:
            res -= 2
        if (r, c-1) in s:
            res -= 2
        if (r, c+1) in s:
            res -= 2
        if (r+1, c) in s:
            res -= 2
    print(res)
