
t = int(input())

for _ in range(t):
    n, k = map(int, input().split())

    ans = 0
    bit_cost = 1

    while bit_cost <= n:
        count = min(k, n // bit_cost)
        ans += count
        n -= count * bit_cost
        bit_cost *= 2

    print(ans)
