t=int(input())
 
for i in range(t):
    s=""
    a=int(input())
 
    if (a%2==0):
        for j in range(a//2):
            s=s+"1"
    else:
        s="7"
        for j in range((a-3)//2):
            s=s+"1"
    print(s)