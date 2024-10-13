from collections import defaultdict
for _ in range(int(input())):
    n,q=map(int,input().split())
    a=[""]+list(input().split())
    portals=defaultdict(list)
    for i in range(1,n+1):
        portals[a[i]].append(i)
    
    while q:
        x,y=map(int,input().split())
        if x==y: print(0)
        else:
            dist=float("inf")
            adj=[]
            for ch1 in a[x]:
                for ch2 in a[y]:
                    if ch1==ch2:
                        dist=abs(x-y)
                    s=""
                    if ch1<ch2: s=ch1+ch2
                    else: s=ch2+ch1
                    adj.append(s)

            if dist!=float("inf"): print(dist)
            else:
                for port in adj:
                    if port in portals:
                        def nearest_index():
                            l,r=0,len(portals[port])-1
                            while l<=r:
                                mid=(l+r)//2
                                if portals[port][mid]<=x: l=mid+1
                                else: r=mid-1
                            return l
                        ind=nearest_index()
                        if ind<len(portals[port]):
                            dist=min(dist,abs(x-portals[port][ind])+abs(y-portals[port][ind]))
                        if ind>0:
                            dist=min(dist,abs(x-portals[port][ind-1])+abs(y-portals[port][ind-1]))
                if dist!=float("inf"): print(dist)
                else: print(-1)               
        q-=1
        # print("-------")