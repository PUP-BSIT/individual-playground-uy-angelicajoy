# index = int (input("Enter an index from 0 to 4: "))

# list = ['adobo', 'sinigang', 'fries', 'chicken', 'cookies']
# print (list[index])

#01_ARITHMETIC
n1 = int (input("Enter 1st number: "))
n2 = int (input("Enter 2nd number: "))

sum = int (n1 + n2)
dif = int (n1 - n2)
prod = int (n1 * n2)
quo = float (n1 / n2)

print (f"Sum: {sum}")
print (f"Difference: {dif}")
print (f"Product: {prod}")
print (f"Quotient: {quo}")

#02_CONDITIONAL
n1 = int (input("Enter 1st number: "))
n2 = int (input("Enter 2nd number: "))

if n1 > n2:
    print (f"{n1} is greater than {n2}")
else:
    print (f"{n1} is less than {n2}")

#03_DISPLAY
name = str (input("Enter your name: "))
print (f"Hello {name}")