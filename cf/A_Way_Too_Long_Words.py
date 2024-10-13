for _ in range(int(input())):
    str=input()
    if len(str)>10: print(f"{str[0]}{len(str)-2}{str[-1]}")
    else: print(str)