import sys
for _ in range(int(input())):
    l,r=2,999
    while l<=r:
        div=(r-l)//3
        m1,m2=l+div,l+2*div
        print('?',m1,m2)
        sys.stdout.flush()
        ab=int(input())
        if m1*m2==ab: 
            l=m2+1
        elif m1*(m2+1)==ab:
            l=m1+1
            r=m2-1
        else:
            r=m1-1
    print("!",l)