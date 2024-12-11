import os
from package import joy

def main():
    while True:
        os.system('cls')  
        print("--Technew Jeans Team Members--")
        print("1. Angelica Joy Uy")
        print("2. Exit Program")

        choice = int(input("\nEnter your choice: "))

        if choice == 2:
            print("Exiting Program.")
            break  

        match choice:
            case 1:  
                os.system('cls') 
                joy.uy_menu() 

            case _:
                print("Invalid choice.")  

if __name__ == "__main__":
    main()