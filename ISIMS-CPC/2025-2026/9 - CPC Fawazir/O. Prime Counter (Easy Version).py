from math import sqrt


n = int(input())

arr = list(map(int, input().split()))

def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True


count = 0
for num in arr:
    if is_prime(num):
        count += 1
        
print(count)


# O (n * sqrt(m))
