t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
 
    diff_indices = [i+1 for i in range(n) if a[i] != b[i]]  
    k = len(diff_indices)
 
    if k == 0 or k % 2 == 0:
        print("Tie")
    else:
        last = diff_indices[-1]
        if last % 2 == 1:
            print("Ajisai")
        else:
            print("Mai")