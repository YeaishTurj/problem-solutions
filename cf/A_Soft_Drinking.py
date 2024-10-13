n,k,l,c,d,p,nl,np=map(int,input().split())
# n friends
# wanna buy k bottles
# l mL per bottles
# have c limes
# cut each limes into d slice
# have p grams of salt

# to make toast
# needs nl mL of drink
# needs a slice of limes
# needs np grams of salt

print(min((k*l)//nl, c*d, p//np)//n)