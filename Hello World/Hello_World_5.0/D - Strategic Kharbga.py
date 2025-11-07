colors = {"red":1,"yellow":2,"green":3,"brown":4,"blue":5,"pink":6,"black":7}
n = int(input())
L=[]
r=0
for _ in range(n):
    color = input()
    if(color=="red"):
        r+=1
    else:
        L.append(colors[color])

if L==[]:
    print(1)
else:
    maxi = max(L)

    result = (r)*maxi+r+sum(L)
    print(result)