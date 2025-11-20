t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

 
    winner = "Tie"

    for k in range(20, -1, -1):
        diff_indices = []
        for i in range(n):
            abit = (a[i] >> k) & 1
            bbit = (b[i] >> k) & 1
            if abit != bbit:
                diff_indices.append(i+1)

        if len(diff_indices) % 2 == 1:   
            last = diff_indices[-1]
            if last % 2 == 1:
                winner = "Ajisai"
            else:
                winner = "Mai"
            break

    print(winner)