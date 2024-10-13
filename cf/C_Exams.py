a=[]
for _ in range(int(input())):
    a.append(tuple(map(int,input().split())))
a.sort()
exam=a[0][1]
# print(a)
for it in a:
    # print(it[0],it[1])
    if min(it[0],it[1])>=exam: exam=min(it[0],it[1])
    else: exam=max(it[0],it[1])
print(exam)