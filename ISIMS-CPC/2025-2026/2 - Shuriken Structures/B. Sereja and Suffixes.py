n, m = map(int, input().split())
l = list(map(int, input().split()))
 
ds={}
s=set()
 
for i in range(n-1, -1, -1):
    s.add(l[i])
    ds[i] = len(s)
    
 
 
for i in range(m):
    print(ds[int(input())-1])