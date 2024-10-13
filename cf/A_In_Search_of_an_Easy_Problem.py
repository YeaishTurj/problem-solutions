n=int(input())
a=list(map(int,input().split()))
if any(it==1 for it in a)==True: print("HARD")
else: print("EASY")