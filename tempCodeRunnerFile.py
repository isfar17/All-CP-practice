x=input()

if(( x[0].islower() and x[1:].isupper()) or x.isupper() ) :
    print(x.lower().capitalize())
else:
    print(x)
    