from math import sqrt


n = int(input())

arr= list(map(int, input().split()))

def sieve(n):
    primes = [True] * (n + 1)
    primes[0] = primes[1] = False
    
    p = 2
    while p <= int(sqrt(n)):
        if primes[p]:
            for i in range(p * p, n + 1, p):
                primes[i] = False
        p += 1
    
    return primes

max_num = max(arr)
prime_numbers = sieve(max_num)

count = 0
for num in arr:
    if prime_numbers[num]:
        count += 1
        
print(count)

# O(n + m log log m)