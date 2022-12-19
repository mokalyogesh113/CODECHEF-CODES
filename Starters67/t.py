
x,y = map(int,input().split())

for i in range(x//2):
    for j in range(y//2 - (i*3)-1):
        print("-",end="")
    for j in range(i):
        print(".|.",end="")
    print(".|.",end="")
    for j in range(i):
        print(".|.",end="")
    for j in range(y//2 - (i*3)-1):
        print("-",end="")
    print()


for i in range((y-7)//2):
    print('-',end="")
print("WELCOME",end="")
for i in range((y-7)//2):
    print('-',end="")
print()

for t in range(x//2):
    i = (x//2)-1-t
    for j in range(y//2 - (i*3)-1):
        print("-",end="")
    for j in range(i):
        print(".|.",end="")
    print(".|.",end="")
    for j in range(i):
        print(".|.",end="")
    for j in range(y//2 - (i*3)-1):
        print("-",end="")
    print()