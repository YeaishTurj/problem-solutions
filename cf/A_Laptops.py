a=[]
for _ in range(int(input())):
    a.append(tuple(map(int,input().split())))
a.sort()
for i in range(1,len(a)):
    if a[i][1]<a[i-1][1]:
        print("Happy Alex")
        exit()
print("Poor Alex")