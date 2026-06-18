x = float(input("Enter 1st number: "))
y = float(input("Enter 2nd number: "))
f = input("Enter function (+, -, *, /): ")

if f == "+":
    print("Answer:", x + y)

elif f == "-":
    print("Answer:", x - y)

elif f == "*":
    print("Answer:", x * y)

elif f == "/":
    if y != 0:
        print("Answer:", x / y)
    else:
        print("Cannot divide by zero")

else:
    print("Invalid function")
