import math
# a one ride subway ticket costs a rubles
# a special ticket for m rides
# It costs b rubles
# need to use subway n times
# minimum sum of money
n,m,a,b=map(int,input().split())
print(min(math.ceil(n/m)*b , n*a, (n//m)*b+(n%m)*a))