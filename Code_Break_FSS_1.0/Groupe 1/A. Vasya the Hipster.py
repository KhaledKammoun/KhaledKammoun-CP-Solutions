n,m=map(int,input().split())
x = min(n, m)
n-=x
m-=x
 
y = n//2 + m//2
 
print(x, y)