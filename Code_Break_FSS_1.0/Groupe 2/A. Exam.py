n = int(input())

liste = []
if n == 1 :
    print(1)
    print(1)
else : 
    for i in range(n//2) :
        liste.append(i+1)  
        liste.append(n-i)

    if (n%2 != 0) :
        liste.append((n//2) + 1)
    k = len(liste)

    if (k-2 >= 0  and abs(liste[k - 1] - liste[k - 2]) == 1 ) :
        x = liste.pop()
        if (len(liste) >= 3) :
            liste.insert(0, x)

    print(len(liste))
    print(" ".join([str(c) for c in liste]))