n, k = map(int, input().split())

s = input()

isValid = True
c = 0
for i in range(len(s)) : 
    if s[i] == "#":
        c+=1
    else : 
        c = 0
        
    if c >= k :
        isValid = False
        break
    
if isValid : 
    print("YES")
    
else :
    print("NO")
