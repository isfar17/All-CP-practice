hashval="##"
dot=".."
x=int(input())
while(x!=0):
    time=int(input())
    for _ in range(time):
        flag=0
        for _ in range(2):
            for _ in range(time):
                if(flag==0):
                    print(hashval)
                    flag=1
                elif(flag==1):
                    print(dot)
                    flag=0
        print(end="\n")
            
        
        
