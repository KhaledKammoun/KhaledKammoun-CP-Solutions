n,m=map(int,input().split())
result = 0
 
for i in range(n) :
    liste=list(map(int,input().split()))
    for j in range(0,m * 2, 2) : 
        result+=(1 if liste[j] + liste[j+1] != 0 else 0)
 
 
print(result)