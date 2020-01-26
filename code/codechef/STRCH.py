for _ in range(int(input().strip())):
    n = int(input().strip())
    s, x = input().strip().split()
    res = 0
    cc = 1
    for i in reversed(range(0,n)):
        if s[i] == x:
            res += (n-i)
            cc = 1
        else:
            res += (n-i-cc)
            cc += 1 
    print(res)
