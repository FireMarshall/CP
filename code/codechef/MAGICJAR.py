t = int(input())
for _ in range(t):
    n = int(input())
    s = sum(list(map(int,input().split())))
    print(s-(n-1))
