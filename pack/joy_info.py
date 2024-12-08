#Uy Module
import os

infos = {
    "Name": "Angelica Joy Uy",
    "Age": "19/Nineteen years old",
    "Birthday": "December 16, 2004",
    "Program": "DIT",
    "Year Level": "Sophomore/2nd yr"
}

goals = {
    "Self Goal": "I hope to be more productive and passionate to the things I love and always be positive.",
    "Goal for My Family": "I want our bond to be strong no matter what life change us and stay healthy.",
    "Future Goals": "Be successful and always be happy."
}

comment = {
    "Indicate your changes in this Module": ""
}

def joy_menu():
    while True:
        os.system('cls') 
        print("---Welcome, Angelica Joy Uy---")
        print("1. Basic Info")
        print("2. Goals")
        print("3. Comment/Change from Teammate 1")
        print("\nInput 0 to back to Main Menu.")

        try:
            choice = int(input("\nEnter your choice: "))  
        except ValueError:
            print("Invalid input! Please enter a number.")
            continue  

        if choice == 0:
            break  

        match choice:
            case 1:
                os.system('cls')  
                print("---Basic Information---")

                for key, value in infos.items():
                    print(f"{key} : {value}")

                input("\nPress enter to continue.")  

            case 2:
                os.system('cls')
                print("---Goals---")

                for key, value in goals.items():
                    print(f"{key} : {value}")

                input("\nPress enter to continue.")

            case 3:
                os.system('cls')
                print("---Comment/Change from Teammate 1---")

                for key, value in comment.items():
                    print(f"{key} : {value}")

                input("\nPress enter to continue.")

            case _:
                print("Invalid choice. Please try again.")