n = int(input())
for i in range(n) : 
    x = int(input())
    if x%2 == 0 :
        print("-1")
    else  :
        print(f"{(x // 2) + 1} {x//2}")