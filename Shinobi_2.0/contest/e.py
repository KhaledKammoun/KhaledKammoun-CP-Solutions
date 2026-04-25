n=int(input())
x=list(map(int,input().split()))
res=[0]*n
s=[]
for i,v in enumerate(x):
    while s and s[-1][1]>=v:
        s.pop()
    if s:
        res[i]=s[-1][0]+1
    s.append((i,v))
print(*res,end=" \n")