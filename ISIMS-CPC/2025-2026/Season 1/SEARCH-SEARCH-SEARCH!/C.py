t=int(input())

for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))

    s = set()

    for i in range(n - 1, -1, -1):
        ancien_len = len(s)
        s.add(l[i])
        if len(s) == ancien_len:
            print(i + 1)
            break
    else:
        print(0)
