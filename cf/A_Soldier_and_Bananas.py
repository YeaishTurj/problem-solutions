cost,dollar,banana=map(int,input().split())
print(max(cost*(banana*(banana+1)//2)-dollar, 0))