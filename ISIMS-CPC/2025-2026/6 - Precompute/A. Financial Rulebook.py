s = input()

n1 = int(s)
n2 = int(s[:len(s) - 1]) if len(s) > 1 else 0
n3 = int(s[:len(s) - 2] + s[len(s) - 1]) if len(s) > 2 else 0

print(max(n1, n2, n3))