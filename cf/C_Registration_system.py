hash={}
for _ in range(int(input())):
    s=input()
    if s in hash:
        hash[s]+=1
        print(f"{s}{hash[s]}")
    else:
        hash[s]=0
        print("OK")