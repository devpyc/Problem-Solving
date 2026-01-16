from math import factorial

n,m=map(int,input().split())

ans=factorial(n)//(factorial(m)*factorial(n-m))

print(int(ans))