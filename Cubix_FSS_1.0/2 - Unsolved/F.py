
    
def min_index_number(a,l,n, j):
    
    for i in range(n-1,j,-1):
        if l[i]<a:
            return i
    return -1
  


n=int(input())

l=list(map(int,input().split(" ")))
for i in range(n) : 
    index=min_index_number(l[i],l,n, i)
    if (index == -1) :
        print(-1, end=" ")
    else :
        print(index - i - 1,end=" ")