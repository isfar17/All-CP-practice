n,m=input().split()
n=int(n)
m=int(m)
flag=0
for i in range(1,int(n)+1):
    if(i%2==0):
        if(flag==0):
            string="."*(m-1)
            print(string+"#")
            flag=1
        else:
            print("#"+string)
            flag=0
    else:
        print("#"*m)