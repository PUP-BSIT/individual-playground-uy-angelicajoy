#1
n1 = int(input("Enter First number: "))
n2 = int(input("Enter Second number: "))

if n1==n2:
    print ("The numbers are equal.")
else:
    print ("The numbers are not equal.")

#2
    n1 = int(input("Enter the a number: "))
    if n1 == 0:
        print ("Numbers are equal to 0.")
    elif n1 % 2==0:
        print ("Numbers are equal to even.")
    else:
        print ("Numbers are equal to odd.")

#3
    n1 = int (input("Enter first number: "))
    n2 = int (input("Enter second number: "))
    n3 = int (input("Enter third number: "))

    highest = max (n1, n2, n3)
    print ("The highest number is", highest)

#5
    str = input ("Enter the character: ").lower()

    if str in 'aeiou':
        print (f"The user input is vowel {str}")
    else:
        print (f"The user input is consonant {str}")

#6
    n = int (input("Enter 2 digit numbers: "))

    ones = n % 10
    tens = n // 10

    digits = ones + tens
    print ("sum of digits", digits)