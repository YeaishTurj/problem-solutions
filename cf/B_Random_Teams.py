n,m=map(int,input().split())
# divide n equally to m teams
perTeam=n//m
leftParticipants=n%m
#give every left participant in a particular team
minK=leftParticipants*(perTeam+1)*(perTeam)//2 + (m-leftParticipants)*(perTeam-1)*perTeam//2
print(minK,end=" ")
maxK=(n-m+1)*(n-m)//2
print(maxK)