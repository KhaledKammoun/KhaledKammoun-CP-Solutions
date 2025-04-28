s = input()
q = int(input())
p = ""
list_set = dict()
def verif() : 
    index = 0
    for i in range(len(s)) : 
        if (index == len(p)) :
            return True
        if s[i] == p[index]:
            index+=1
        list_set[p[:index+1]] = "YES" 
    return index == len(p)


for i in range(q) : 
    input_ = input().split()
    if (input_[0] == "push") : 
        p+=input_[1]
    elif p != "" : 
        p = p[:len(p)-1]
    
    if p in list_set :
        print(list_set[p])
    else : 
        res = "YES" if p == "" or verif() else "NO"
        
        list_set[p] = res
        print(res)