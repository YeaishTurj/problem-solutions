N=int(input())
mod = 10**9 + 7
def bin_exp(n,k):
    if k==0: return 1
    res=1
    while k:
        if k&1: res=(res*n)%mod
        n=(n*n)%mod
        k>>=1
    return res
print(bin_exp(2,N))

# The above code is a solution for the problem from Bit_Strings.py