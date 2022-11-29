def computepay(h, r) :
    if h <= 40 :
        p = h * r
        return print(p)
    else :
        p = (40*r) + (h-40) * (r*1.5)
        return print(p)

hrs = input("Enter hour: ")
h = float(hrs)
min = input("Enter rate: ")
r = float(min)

print("Pay: ")
computepay (h, r)