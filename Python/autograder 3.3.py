

scr = input("Enter Score: ")
score = float(scr)
if(score>0.0 and score<1.0):
    if(score>=0.9):
        gr = 'A'
    elif(score>=0.8 and score<0.9):
       gr = 'B'
    elif(score>=0.7 and score<0.8):
        gr = 'C'
    elif(score>=0.6 and score<0.7):
        gr = 'D'
    elif(score<0.6):
        gr = 'F'
    print(gr)        
else:
    print("Error")

