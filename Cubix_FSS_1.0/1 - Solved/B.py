
visited={}

def swap1(l__):
    

    l__=l__[t:]+l__[:t]


    return l__

def swap2(l):

    l1=[]
    for i in range(0,2*t,2):
        l1.append(l[i+1])
        l1.append(l[i])
    
    return l1
    
    
      
        
t=int(input())
l=list(map(int,input().split(" ")))


        
    
l_sorted=sorted(l)
r1=1
r2=1

def is_equal(l, l1) :
    for i in range(len(l)) :
        if l[i]!= l1[i]:
            return False
    return True

if l==l_sorted:
    print(0)
elif t == 1 :
    if (l[0] >= l[1]) :
        print(1)
    else :
        print(0)
else:
    l1=l.copy()
    l1 = swap1(l1)
    i=0

    while not is_equal(l1,l ):
        if is_equal(l1, l_sorted):
            break
        
        if i%2==0:
            l1=swap2(l1)
        else:
            l1=swap1(l1)
                
        
        r1+=1

        i+=1

    l2=l.copy()

    l2 = swap2(l2)
    i=0
    while not is_equal(l2,l ):

        if is_equal(l2, l_sorted):
            break
        
        if i%2==0:
            l2=swap1(l2)
        else:
            l2=swap2(l2)
                
        r2+=1
        

        i+=1
    
    if is_equal(l, l1):
        r1=-1
    if is_equal(l, l2):
        r2=-1
        
    
    
    if r1==-1:
        print(r2)
    elif r2==-1:
        print(r1)
    else:
        print(min(r1,r2))
        
        

    
    
    
    
    
    
    