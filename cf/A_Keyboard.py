keyboard="qwertyuiopasdfghjkl;zxcvbnm,./"
lr=input()
for it in input():
    ind=keyboard.index(it)
    if lr=='R': ind-=1
    else: ind+=1
    print(keyboard[ind],end="")