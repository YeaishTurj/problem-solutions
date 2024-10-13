import sys
for _ in range(int(input())):
    l,r=2,999
    while l<=r:
        mid=(l+r)//2
        print('?',mid,mid)
        sys.stdout.flush()
        ab=int(input())
        if ab%mid: r=mid-1
        else: l=mid+1
    print("!",l)