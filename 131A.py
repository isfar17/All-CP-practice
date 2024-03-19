x=input()
if(len(x)==1):
    if(x.isupper()):
        print(x.lower())
    else:
        print(x.upper())
        
elif(( x[0].islower() and x[1:].isupper()) or x.isupper() ) :
    print(x.lower().capitalize())
else:
    print(x)
    