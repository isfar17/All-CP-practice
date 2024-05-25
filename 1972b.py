
def flip(n,i):
    if n[i]=='U':
        if(n[i+1]=='U'):
            n=n.replace(n[i+1],'D')
        elif(n[i+1]=='D'):
            n=n.replace(n[i+1],'U')
        if(n[len(n)-1]=='U'):
            n=n.replace(n[len(n)-1],'D')
        elif(n[len(n)-1]=='D'):
            n=n.replace(n[len(n)-1],'U')
        return n[:i]+n[i+1:]
def sol():
    l=int(input())
    n=input()
    player=1 #1 means alice,2 means bob
    while(n!="D" or n!=""):
        for i in range(0,len(n)):
            if(len(n)!=2):
                n=flip(n,i)
                if(player==1):
                    player=2
                else:
                    player=1
                    
            elif(len(n)==2):
                if(n[i]=='U'):
                    n=n[i+1:]
                elif(n[i+1]=='U'):
                    n=n[i]
                if(player==1):
                    player=2
                else:
                    player=1
    return player               
                    
                    
                
                    
t=int(input())
while(t!=0):
    x=sol()
    print(x,end="\n")
    