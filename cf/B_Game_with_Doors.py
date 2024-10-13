import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    la,ra=map(int,input().split())
    lb,rb=map(int,input().split())
    l,r=max(la,lb),min(ra,rb)
    if l>r: print(1)
    else:
        ans=r-l
        if la<l or lb<l: ans+=1
        if ra>r or rb>r: ans+=1
        print(ans)