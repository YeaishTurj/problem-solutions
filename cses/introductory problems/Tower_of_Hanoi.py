ans=[]
def towerOfHanoi(n,left,middle,right):
    if n==1:
        ans.append([left,right])
        return
    towerOfHanoi(n-1,left,right,middle)
    towerOfHanoi(1,left,middle,right)
    towerOfHanoi(n-1,middle,left,right)

N=int(input())
towerOfHanoi(N,1,2,3)
print(len(ans))
print("\n".join(" ".join(str(x) for x in y) for y in ans))