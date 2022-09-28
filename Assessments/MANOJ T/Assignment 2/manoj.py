import random
a=random.randint(50,100)
b=random.randint(20,50)
print('a:',a)
print('b:',b)
if(a>80):
    print("High temp")
    if(b<40):
        print("fire detected")
        print("alarm on")
    elif(b==40):
        print('humidity at risk level')
    else:
        print('LED ON')
elif(a==80):
    print("risk level")
else:
    print("normal condition")
    print("alarm off")
