t=int(input())


d={}
r={}

for i in range(t-1):
    a,b=map(int,input().split())
    if a in d:
        d[a].add(b)
    else:
        d[a]={b}
    if b in d:
        d[b].add(a)
    else:
        d[b]={a}
s=0

for i in d:
    r[i]=len(d[i])

for i in d:
    for j in d[i] :
        s=s+r[j]-1
        
print(s//2)
        




    

        

    

    
    