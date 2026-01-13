t = int(input())
for _ in range(t):
    s, k, m = map(int, input().split())

    flips = m // k
    r = m % k

    if k < s:
        sand = s if (flips % 2 == 0) else k
        print(sand - r)
    else:
        print(max(0, s - r))
