n=int(input())

if n<=2:
    print(-1)
elif n==3:
    print(210)
else:
    z="0"
    s="1"
    for i in range(n-4):
        s=s+z
    if n%6==4:
        s+="050"
    elif n%6==5:
        s+="080"
    elif n%6==0:
        s+="170"
    elif n%6==1:
        s+="020"
    elif n%6==2:
        s+="200"
    else:
        s+="110"
    
    
    print(s)