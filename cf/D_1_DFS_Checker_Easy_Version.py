import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,q=map(int,input().split())
    a=[0,0]+list(map(int,input().split()))
    p=[0]+list(map(int,input().split()))
    level,vis,adj=[0]*(n+1),[0]*(n+1),[[] for _ in range(n+1)]
    for i in range(2,n+1):
        adj[a[i]].append(i)
        adj[i].append(a[i])
    def dfs(node):
        if vis[node]: return
        vis[node]=1
        if len(adj[node])==1: 
            level[node]=1
            return
        for it in adj[node]:
            dfs(it)
            level[node]=level[it]+1
    dfs(1)
    # print(p[1::])

    thik_thak=[0]*(n+1)
    for i in range(1,n+1):
        node=p[i]
        if len(adj[node])==1: 
            thik_thak[node]=1
            continue
        child=0
        pos1=i+1
        pos2=i+2**(level[node]-1)
        if pos1<=n and p[pos1]!=a[node] and p[pos1] in adj[node]: child+=1
        if pos2<=n and p[pos2]!=a[node] and p[pos2] in adj[node]: child+=1
        if child==2: thik_thak[node]=1

    ok=sum(thik_thak)
    # print(thik_thak[1::])
        
    # childs in i+1, i+2**(l-1)
    # parent in i-1, i-2**l
    def check(z):
        node=p[z]
        prev_obostha,recent_obostha=thik_thak[node],0
        if len(adj[node])==1: return 0
        if len(adj[node])!=1: 
            child=0
            pos1=z+1
            pos2=z+2**(level[node]-1)
            if pos1<=n and p[pos1]!=a[node] and p[pos1] in adj[node]: child+=1
            if pos2<=n and p[pos2]!=a[node] and p[pos2] in adj[node]: child+=1
            if child==2: recent_obostha=1
        thik_thak[node]=recent_obostha
        if prev_obostha==1 and recent_obostha==0: return -1
        elif prev_obostha==0 and recent_obostha==1: return 1
        return 0
    
    index=[0]*(n+1)
    for i in range(1,n+1):
        index[p[i]]=i
    # print(index[1::])

    for _ in range(q):
        x,y=map(int,input().split())
        
        index[p[x]],index[p[y]]=index[p[y]],index[p[x]]
        p[x],p[y]=p[y],p[x]

        # print(p[1::])

        # is all children thik thak of the node at x
        if len(adj[p[x]])!=1: ok+=check(x)
        # is all thik thak of the parent of the node at x
        if p[x]!=1: ok+=check(index[a[p[x]]])
        
        # is all children thik thak of the node at y
        if len(adj[p[y]])!=1: ok+=check(y)
        # is all thik thak of the parent of the node at y
        if p[y]!=1: ok+=check(index[a[p[y]]])

        print("YES" if ok==n else "NO")

        