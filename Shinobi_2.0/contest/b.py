n = int(input())
t=list(map(int,input().split()))

cost=0
if n==1:
    print(0)
else:
    for i in range (1,n):
        if t[i]<t[i-1]:
            cost+=t[i-1]-t[i]
            t[i]=t[i-1]
            
    print(cost)