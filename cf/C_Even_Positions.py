for _ in range(int(input())):
    n=int(input())
    s=list(input())
    s[0]='('
    for i in range(n-2,0,-2):
        if s[i-1]=='(': s[i]=')'
        else: s[i]='('
    st=[]
    cnt=0
    for i,ch in enumerate(s):
        if st and st[-1][0]!=ch:
            cnt+=i-st[-1][1]
            st.pop()
        else: st.append([ch,i])
    print(cnt)