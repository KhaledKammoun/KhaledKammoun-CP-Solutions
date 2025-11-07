t = int(input())
for _ in range(t) :
    n, k =  list(map(int, input().split()))
    liste = list(map(int, input().split()))
    result = 0
    liste_ = []
    list_dict = [0]*(n+1)
    for c in liste :
        list_dict[c]+=1

    for i in range(0, n) : 
        value = liste[i]
        if value in liste_ :
            continue
        if len(liste_) < k :
            result+=1
            list_dict[value]-=1
            liste_.append(value)
        else :
            # Get min
            min_val = list_dict[liste_[0]]
            min_index = liste_[0]
            for j in range(k) :
                value_ = liste_[j]
                if (list_dict[value_] <= min_val) :
                    min_val = list_dict[value_]
                    min_index = j

            liste_.remove(min_index)
            result+=1
            list_dict[min_index]-=1
    print(result)
