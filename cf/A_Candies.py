for _ in range(int(input())):
    n=int(input())
    # x(1+2+4+8)=n
    # x(2^0+2^1+2^2+2^3)=n
    # x(2^4-1)=n
    for i in range(2,32):
        y=(1<<i)-1
        if n%y==0:
            print(n//y)
            break
# for _ in range(int(input())):
#     n=int(input())
#     i=1
#     y=3
#     while True:
#         if n%y==0:
#             print(n//y)
#             break
#         i+=1
#         y+=pow(2,i)