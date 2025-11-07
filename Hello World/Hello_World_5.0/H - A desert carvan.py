n= int(input())
T= list(map(int, input().split()))
summ=0
water= 0
for i in T:
    summ=i+summ
    if(summ<0):
        water+=(-summ)
        summ=0

print(water)