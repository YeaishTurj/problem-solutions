n=int(input())
x,y=map(int,input().split())
# white
white=min(x-1+y-1,x-1+abs(x-y),y-1+abs(x-y))
# black
black=min(n-x+n-y,n-x+abs(x-y),n-y+abs(x-y))
if white<=black:
    print("White")
else:
    print("Black")