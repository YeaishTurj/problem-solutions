# divisors between 1 to x of n
# is x/n and non-divisors is x-x/n 

# x//n no. divisor is n*(x//n)

# if x/n == x//n:

# 	x-x//n no. non-divisor is x-1
# 	x*(n-1)/n=k ****************

# else:
# 	x-x//n no. non-divisor is x + x%n

for _ in range(int(input())):
    n,k=map(int,input().split())
    res=k*n//(n-1)
    if res%n==0: res-=1
    print(res)