# for _ in range(int(input())):
#     n=int(input())
#     a=list(map(int,input().split()))
#     if sum(a)&1: print("NO")
#     else:
#         if a.count(1)%2==0 and a.count(2)%2==0: print("YES")
#         else:
#             equal=sum(a)//2
#             if equal%2==0: print("YES")
#             elif a.count(2)*2<equal and a.count(1)-(equal-2*a.count(2)==equal) and a.count(1) and a.count(2): print("YES")
#             elif a.count(2)*2>equal and a.count(2)*2-(equal-a.count(1))==equal and a.count(1) and a.count(2): print("YES")
#             else: print("NO")

for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort(reverse=True)
    if sum(a)&1: print("NO")
    else:
        half=sum(a)//2
        alice=0
        bob=0
        for it in a:
            if alice+it<=half and it==2:
                alice+=it
            else: bob+=it
        if alice==half and bob==half: print("YES")
        else: 
            one=a.count(1)
            while one:
                alice+=1
                bob-=1
                one-=1
                if alice>=half or bob<=half: break
            if alice==half and bob==half: print("YES")
            else: print("NO")