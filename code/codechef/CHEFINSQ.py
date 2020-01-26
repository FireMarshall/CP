from math import factorial
for _ in range(int(input())):
    n, k = map(int, input().split())
    a = sorted(map(int, input().split()))
    nc = a.count(a[k-1])
    r = a[:k].count(a[k-1])
    ans = factorial(nc) / (factorial(r) * factorial(nc - r))
    print(int(ans))
    
