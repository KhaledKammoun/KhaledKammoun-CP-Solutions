n=int(input())
m={}
for _ in range(n):
    t = input()
   
    if(t not in m):
        m[t]= 0
        print("OK")
    else:
        m[t]+=1
        print(t+str(m[t]))