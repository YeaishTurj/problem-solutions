import math
for _ in range(int(input())):
    n,p,l,t=map(int,input().split())
    
    # 1 8 15 22
    task=math.ceil(n/7)
    # print(task)
    if task&1:
        # print("odd")
        # 1 3 5 7 9
        pointsPerDay=2*t+l
        earnedPoints= min(math.ceil(p/pointsPerDay), task//2) * pointsPerDay
        # print(earnedPoints)
        day=min(math.ceil(p/pointsPerDay), task//2)
        if earnedPoints<p:
            earnedPoints+=t+l
            day+=1
            if earnedPoints<p:
                day+= math.ceil((p-earnedPoints)/l)
        print(max(0, n-day))
    else:
        #print("even")
        # 2 4 6 8 10 12
        pointsPerDay=2*t+l
        earnedPoints= min(math.ceil(p/pointsPerDay), task//2) * pointsPerDay
        #print(earnedPoints)
        day=min(math.ceil(p/pointsPerDay), task//2)
        if earnedPoints<p:
            day+= math.ceil((p-earnedPoints)/l)
        print(max(0, n-day))