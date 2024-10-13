# For Division 1: 1900≤rating
# For Division 2: 1600≤rating≤1899
# For Division 3: 1400≤rating≤1599
# For Division 4: rating≤1399

for _ in range(int(input())):
    n=int(input()) 
    print("Division",end=" ")
    if n>=1900: print(1)
    elif n>=1600: print(2)
    elif n>=1400: print(3)
    else: print(4)