n=int(input())
if n<=5: print(1)
else:
    move=5
    step=0
    while n:
        step+=n//move
        n%=move
        move-=1
    print(step)