for _ in range(int(input())):
    n = input()
    a = ''.join(sorted(list(input())))
    b = ''.join(sorted(list(input())))
    print("YES" if a == b else "NO")
