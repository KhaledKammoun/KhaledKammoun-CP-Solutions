n, x =  list(map(int, input().split()))
liste =  list(map(int, input().split()))
liste_ = liste
for i in range(0, n - 1) : 
    for j in range(i + 1, n) :
        liste_.append(abs(liste[i] - liste[j]))

def get_res() :
    for i in range(n) : 
        res = x % liste[i]

        if res == 0 or res in liste_ :
            return True 
    return False

print("YES" if get_res() else "NO" )