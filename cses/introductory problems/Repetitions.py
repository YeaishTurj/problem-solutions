s=input()
l=ans=0
while l<=len(s):
    r=l
    while r<len(s) and s[l]==s[r]:
        r+=1
    if l==r: l+=1
    else:
        ans=max(ans,r-l)
        l=r
print(ans)

# The above code is a solution for the problem from Repetitions.py