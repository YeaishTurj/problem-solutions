for _ in range(int(input())):
    n_str=input()
    n=int(n_str)
    # actual ans = n*a-b = 100*10000-1 = 6 dig
    ans_str=""
    pairs=[]
    for ans_len in range(0,6):
        ans_str+=n_str[ans_len%len(n_str)]
        ans=int(ans_str)
        for a in range(1,10001):
            b=n*a-ans
            if 1<=b and b<=min(10000,a*n) and a*len(n_str)-b==len(ans_str):
                pairs.append([a,b])
    print(len(pairs))
    for [a,b] in pairs:
        print(a,b)
    # print("---------")