for _ in range(int(input())):
    n = int(input())
    k = int(input())
    r = k % n
    q = n - r
    if r == 0:
        print(0)
    elif r == q:
        print(n-1)
    else:
        print(2*min(q, r))

