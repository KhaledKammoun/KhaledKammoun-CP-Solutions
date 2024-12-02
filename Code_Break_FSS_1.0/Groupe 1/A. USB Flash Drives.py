nb=int(input())
t=int(input())
liste=[0]*nb
 
for i in range(nb):
    liste[i]=int(input())
liste.sort()
 
s=0
res=0
for i in range(len(liste)-1,-1,-1):
    s+=liste[i]
    res=res+1
    if s>=t:
        break
print(res)