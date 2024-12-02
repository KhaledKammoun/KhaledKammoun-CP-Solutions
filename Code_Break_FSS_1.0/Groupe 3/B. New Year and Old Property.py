a,b=map(int,input().split())

def convertBinToNumber(s):
    integer = 0
    for i in range(len(s)):
        if s[i] != '0':
            integer += pow(2, len(s) - i - 1)
    return integer
result = 0
maxNumberLen = len(bin(b) )- 2
minNumberLen = len(bin(a))- 2
while (maxNumberLen >= minNumberLen) :
    liste = ['1'] * maxNumberLen
    for j in range(1, maxNumberLen) : 
        liste[j] = '0'
        number_var = convertBinToNumber("".join(liste))
        if (number_var >=a and number_var<=b) : 
            result+=1
        liste[j] = '1'
    maxNumberLen-=1
print(result)