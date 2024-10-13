import sys
input = sys.stdin.readline
magnet=[]
for _ in range(int(input())):
    str=int(input())
    magnet.append(str)
prev=magnet[0]
cnt=1
for it in magnet:
    if it!=prev: 
        cnt+=1
        prev=it
print(cnt)