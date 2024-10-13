n=input()
a=list(map(int,input().split()))
print(sum(max(a)-it for it in a if it<max(a)))