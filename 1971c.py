clock=[0,1,2,3,4,5,6,7,8,9,10,11,12]
t=int(input())
for _ in range(0,t):
    a,b,c,d=[int(i) for i in input().split()]
    ans="NO"
    x=min(a,b)
    y=max(a,b)
    range_clock=clock[x:y+1]
    if(c in range_clock):
        if(d not in range_clock):
            ans="YES"
        elif(d in range_clock):
            ans="NO"
    elif(c not in range_clock):
        if(d in range_clock):
            ans="YES"
        elif(d not in range_clock):
            ans="NO"
    print(ans)
            
            
    