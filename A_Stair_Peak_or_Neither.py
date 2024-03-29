x=int(input())
while(x!=0):
  a,b,c=[int(i) for i in input().split()]
  if(a<b<c):
    print("STAIR",end="\n")
  elif(a<b>c):
    print("PEAK",end="\n")
  else:
    print("NONE",end="\n")
  x-=1;