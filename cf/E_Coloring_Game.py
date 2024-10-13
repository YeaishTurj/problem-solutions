from collections import defaultdict,deque
import sys
for _ in range(int(input())):
    n,m=map(int,input().split())
    adj=defaultdict(list)
    for _ in range(m):
        u,v=map(int,input().split())
        adj[u].append(v)
        adj[v].append(u)
    color,vis=[-1]*(n+1),[0]*(n+1)

    def isBipartite(start):
        queue = deque([start])
        color[start] = 0
        while queue:
            node = queue.popleft()
            vis[node] = 1
            for nei in adj[node]:
                if vis[nei] == 0:
                    color[nei] = color[node] ^ 1
                    vis[nei] = 1
                    queue.append(nei)
                elif color[nei] == color[node]:
                    return False
        return True

    if isBipartite(1):
    #     # bob
        print("Bob")
        sys.stdout.flush()
        color1,color2=[i for i in range(1,n+1) if color[i]],[i for i in range(1,n+1) if color[i]==0]
        for _ in range(n):
            a,b=map(int,input().split())
            if (a==1 or b==1) and color1:
                print(color1[-1],1)
                sys.stdout.flush()
                color1.pop()
            elif (a==2 or b==2) and color2:
                print(color2[-1],2)
                sys.stdout.flush()
                color2.pop()
            else:
                if not color1:
                    c=a if a!=1 else b
                    print(color2[-1],c)
                    sys.stdout.flush()
                    color2.pop()
                elif not color2:
                    c=a if a!=2 else b
                    print(color1[-1],c)
                    sys.stdout.flush()
                    color1.pop()
    else:
    #     # alice
        print("Alice")
        sys.stdout.flush()
        for _ in range(n):
            print(1,2)
            sys.stdout.flush()
            i,c=map(int,input().split())