n=int(input())
while(n!=0):
    t_count=0
    i_count=0
    m_count=0
    u_count=0
    r_count=0
    count=0
    
    x=int(input())
    data=input()
    if(x==5):
        for i in data:
            if(i=='T'):
                if(t_count==0):
                    t_count+=1   
            elif(i=='i'):
                if(i_count==0):
                    i_count+=1     
            elif(i=='m'):
                if(m_count==0):
                    m_count+=1   
            elif(i=='u'):
                if(u_count==0):
                    u_count+=1    
            elif(i=='r'):
                if(r_count==0):
                    r_count+=1 
 
    count=t_count+i_count+m_count+u_count+r_count   
    if(count==5):
        print("YES",end="\n")
    else:
        print("NO",end="\n")
    n-=1;