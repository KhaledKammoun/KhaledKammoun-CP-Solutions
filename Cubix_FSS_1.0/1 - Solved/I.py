a,b=map(int,input().split())
c,d=map(int,input().split())

x=((abs(a-c))+1)*2
y=(abs((b)-(d))+1)*2
if a==c and b==d:
    print(10)
else:
    if a==c or b==d:
        x=x+1
        y=y+1

    print(x+y)

