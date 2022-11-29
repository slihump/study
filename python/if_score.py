score = input("Enter score(MAX:1.0): ")
s = float(score)

if s >= 1.1 :
    print("The Score is out of the range")
elif s >= 0.9 :
    print("A")
elif s >= 0.8 :
    print("B")
elif s >= 0.7 :
    print("C")
elif s >= 0.6 :
    print("D")
else :
    print("F")