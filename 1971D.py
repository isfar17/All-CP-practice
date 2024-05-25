t=int(input())
for _ in range(0,t):
    s=input()
    to_find=""
    if(s[0]=='0'):
        to_find='1'
    elif(s[0]=='1'):
        to_find='0'
    if(to_find=='1'):
        for i in range(0,len(s)):
            if(s[i]==to_find):
                s=s[i]
                
            
            