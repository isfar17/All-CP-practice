x=int(input())
while(x!=0):
    date=input()
    int_date=int(date[:2])
    if(int_date==0):
        new_date="12:"+date[3:]
        print(new_date+" AM")
    elif(int_date>21):
      int_date=int_date-12
      new_date=str(int_date)+":"+date[3:]
      print(new_date+" PM")       
    elif(int_date>12):
      int_date=int_date-12
      new_date="0"+str(int_date)+":"+date[3:]
      print(new_date+" PM")
    elif(int_date==12):
        print(date+" PM")
    elif(int_date<12):
        print(date+" AM")
    x-=1

