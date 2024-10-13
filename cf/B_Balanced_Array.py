for _ in range(int(input())):
    n=int(input())
    if (n//2)&1: print("NO")
    else:
        print("YES")
        num=-2
        for i in range(n//2):
            if i&1:
                num+=2
                print(num,end=" ")
            else:
                num+=4
                print(num,end=" ")
        num=-1
        for i in range(n//2):
            if i&1:
                num+=4
                print(num,end=" ")
            else:
                num+=2
                print(num,end=" ")
        print()