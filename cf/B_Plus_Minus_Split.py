for _ in range(int(input())):
    n=int(input())
    s=input()
    plus=s.count("+")
    minus=s.count("-")
    print(abs(plus-minus))