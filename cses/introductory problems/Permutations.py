n=int(input())
if 1<n<4:print("NO SOLUTION")
else: print(*range(2,n+1,2),*range(1,n+1,2))

# The above code is a solution for the problem from Permutations.py