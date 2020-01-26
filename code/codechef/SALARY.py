for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    mx, mn = max(a), min(a)
    res = 0
    while mx != mn:
        x = mx - mn
        res += x
        a[a.index(mx)] -= x
        a = list(map(lambda e: e+x, a))
        mx, mn = max(a), min(a)
    print(res)
