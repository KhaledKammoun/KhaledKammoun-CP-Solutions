t=int(input())
for i in range(t):
    n,m=map(int,input().split())
    M=[[-1]*m]*n
    var = 2
    x, y = n//2 - 1, m//2 - 1
    if n >= 4 and m>=4:
        while (x>0 or y>0) :
            dic = dict()
            
            M[x][y]=0
            M[x][y+1]=1
            M[x+1][y]=1
            M[x+1][y+1]=0
            dic[(x,y)] = [0,2]
            dic[(x,y+1)] = [2,0]
            dic[(x+1,y)] = [2,0]
            dic[(x+1,y+1)] = [0,2]
            
            
            i, j = y, x
            while i < var + x or  j < var + y :
                if i >= 0 :
                    if dic[(x, i)][0] == 2 :
                        M[x-1][i] = 1
                        dic.get((x-1, i), [0,0])[1]+=1
                    else :
                        M[x-1][i] = 0
                        dic.get((x-1, i), [0,0])[0]+=1
                if i < n :
                    if dic[(x + var - 1, i)][0] == 2 :
                        M[x+var][i] = 1
                        dic.get((x+var, i), [0,0])[1]+=1
                    else :
                        M[x+var][i] = 0
                        dic.get((x+var, i), [0,0])[0]+=1
                if j>0 :
                    if dic[(j, y)][0] == 2 :
                        M[j][y-1] = 1
                        dic.get((j, y-1), [0,0])[1]+=1
                    else :
                        M[j][y-1] = 0
                        dic.get((j, y-1), [0,0])[0]+=1
                if j < m : 
                    if dic[(j, y + var - 1)][0] == 2 :
                        M[j][y + var] = 1
                        dic.get((j, y + var), [0,0])[1]+=1
                    else :
                        M[j][y + var] = 0
                        dic.get((x+var, i), [0,0])[0]+=1
                    
                i+=1
                j+=1
                
            # check the corners
            if dic[(x,y)][1] == 2 :
                M[x-1][y-1] = 0
                dic.get((x - 1, y - 1), [0,0])[0]+=1
            else :
                M[x-1][y-1] = 1
                dic.get((x - 1, y - 1), [0,0])[1]+=1
            
            if dic[(x,y + var - 1)][1] == 2 :
                M[x-1][y + var] = 0
                dic.get((x-1,y + var), [0,0])[0]+=1
            else :
                M[x-1][y + var] = 1
                dic.get((x-1,y + var), [0,0])[1]+=1
                
            if dic[(x + var - 1,y)][1] == 2 :
                M[x + var][y - 1] = 0
                dic.get((x + var,y - 1), [0,0])[0]+=1
            else :
                M[x + var][y - 1] = 1
                dic.get((x + var,y - 1), [0,0])[1]+=1
                
            if dic[(x + var - 1,y + var - 1)][1] == 2 :
                M[x + var][y + var] = 0
                dic.get((x + var,y + var), [0,0])[0]+=1
            else :
                M[x + var][y - 1] = 1
                dic.get((x + var,y - 1), [0,0])[1]+=1
            x-=1
            y-=1        
            var+=2
        # print the matrix :
        for i in range(n) :
            for j in range(m) :
                print(M[i][j],end = " ")
            print()
    else :
        
        if (n == 2 and m == 2) :
            print("1 0\n0 1")
        elif (n == 2 and m >= 4) :
            print((("1 0 0 1 "*(m//4 + m%4))[:m*2 - 1])+"\n"+("0 1 1 0 "*(m//4 + m%4))[:m*2])
        elif (n>=4 and m == 2) :
            for c in range(n//2) :
                print("0 1\n1 0")