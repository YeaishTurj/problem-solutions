n=input()
a=list(map(int,input().split()))
odd=[it&1 for it in a]
if sum(odd)==1: print(odd.index(1)+1)
else: print(odd.index(0)+1)