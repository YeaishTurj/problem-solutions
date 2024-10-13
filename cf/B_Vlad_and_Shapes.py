for _ in range(int(input())):
    s=set()
    for _ in range(int(input())):
        st=input()
        one=st.count('1')
        if one: s.add(one)
    if len(s)==1: print("SQUARE")
    else: print("TRIANGLE")