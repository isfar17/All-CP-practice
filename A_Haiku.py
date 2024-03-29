ll=[]
for _ in range(3):
    ll.append(input())
count_first=0
count_sec=0
count_third=0
for i in ll[0]:
    if((i=='i') | (i=='o') | (i =='a') | (i =='e') | (i=='u')):
        count_first+=1
for i in ll[1]:
    if((i=='i') | (i=='o') | (i =='a') | (i =='e') | (i=='u')):
        count_sec+=1
for i in ll[2]:
    if((i=='i') | (i=='o') | (i =='a') | (i =='e') | (i=='u')):
        count_third+=1
if(count_first==5 & count_sec==7 & count_third==5):
    print("YES")
else:
    print("NO")
            