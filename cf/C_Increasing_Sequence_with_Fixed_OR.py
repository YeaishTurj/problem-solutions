import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    ans=[n]
    num=[0]*64
    for i in range(64):
        if n&(1<<i): num[i]=1
    binary=[num.copy()]
    
    for i in range(64):
        if n&(1<<i):
            num[i]=0
            n-=(1<<i)
            break
    if n==0: print(len(ans),*ans)
    else:
        binary.append(num)
        ans.append(n)
        # print(binary)
        # print(ans)
        while True:
            temp=[0]*64
            val=0
            skip=0
            for i in range(64):
                if binary[0][i] and binary[-1][i]==0:
                    temp[i]=1
                    val=1<<i
                    skip=i
                    break
            for i in reversed(range(64)):
                if binary[0][i] and temp[i]==0 and (val+(1<<i))<ans[-1] and i!=skip:
                    val+=(1<<i)
                    temp[i]=1
            if val>=ans[-1]:
                break
            ans.append(val)
            binary.append(temp)
        print(len(ans),*ans[::-1])
        # for i in range(1,len(ans)):
        #     print(ans[i-1]|ans[i])
    # print("--------")