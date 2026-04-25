l=int(input())
t=list(map(int,input().split()))
res=0


def BT(path,c,i):
    global res
    if i >= l or t[i] in path:
        res+=c
        return
    else:
        if not path :
            BT([],0,i+1)
        path.append(t[i])
        BT(path,c+1,i+1)
        
BT([],0,0)
print(res)



# c=l
# def BT(path,used,dic,c):
#     if c==0:
#         if path:
#             res.append(path[:])
#         return
#     for i in range(l-c,l):
#         if not used[i]:
#             used[i]=True
#             path.append(t[i])
#             BT(path,used,dic,c-1)
#             path.pop()
#             used[i]=False
#             BT(path,used,dic,c-1)
            
# BT([],[False]*l,{},c)
# print(res)