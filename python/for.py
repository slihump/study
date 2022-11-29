largest = -1
smallest = None

while True:
    num = input("Enter a number")
    if num == "Done":
        break
    try:
        numb = int(num)
    except:
        print('invalid input')
    if smallest is None:
        smallest = numb
    if numb > largest:
        largest = numb
    elif numb < smallest : smallest = numb

print("Maximum is", largest)
print("Minimum is",smallest)