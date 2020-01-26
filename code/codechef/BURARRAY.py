for _ in range(int(input())):
    n, q = map(int, input().split())
    s = 0
    d = dict()
    for _ in range(q):
        a = list(map(int, input().split()))
        if a[0] == 1:
            x = a[1] + s
            d[x] = x-1
        else:
            l = a[1] + s
            r = a[2] + s
            while r in d:
                if d[r] in d:
                    d[r] = d[d[r]]
                r = d[r]
            if l > r:
                print(0)
            else:
                s += r
                s %= n
                print(r)
