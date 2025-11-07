
t = int(input())
L= list(map(int, input().split()))
T=int(input())
minn=3000
value=L[0]
for i in L :
    if((T%i)<minn):
        minn=T%i
        value=i
print(value)