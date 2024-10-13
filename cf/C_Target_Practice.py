for _ in range(int(input())):
    arr=[]
    for _ in range(10):
        a=input()
        arr.append(a)
    ans=0
    for i in range(10):
        for j in range(10):
            if arr[i][j]=='X':
                dis=min(i,j,9-i,9-j)
                ans+=dis+1
    print(ans)