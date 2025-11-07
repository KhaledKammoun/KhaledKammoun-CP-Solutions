from math import sqrt
n = int(input())
liste = set()
cp = 0
out = 0
liste_var = list(map(int, input().split()))
for value in liste_var:
    if value in liste :
        liste.remove(value)
        cp+=1
    else :
        liste.add(value)
 
    if (cp == 2) :
        out+=1
        cp = 0
print(out)