a,b = map(int, input().split())
liste = list(map(int, input().split()))
 
out = 0
for i in liste : 
    out = out + (i // b)
print(out)