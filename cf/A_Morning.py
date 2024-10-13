for _ in range(int(input())):
    str=input()
    sec=4
    prev_dig=1
    for it in str:
        curr_dig=ord(it)-ord('0')
        if curr_dig==0: curr_dig=10
        if prev_dig==0: prev_dig=10
        sec+=abs(prev_dig-curr_dig)
        prev_dig=ord(it)-ord('0')
    print(sec)