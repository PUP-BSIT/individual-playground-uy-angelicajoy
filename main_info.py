import os
from pack import joy_info 

def main():
    while True:
        os.system('cls')  
        print("--Technew Jeans Team Members--")
        print("1. Angelica Joy Uy")
        print("2. ")  
        print("6. Exit Program")

        choice = int(input("\nEnter your choice: "))

        if choice == 6:
            print("Exiting Program.")
            break  

        match choice:
            case 1:  
                os.system('cls') 
                joy_info.joy_menu() 
                  
            case _:
                print("Invalid choice.")  

if __name__ == "__main__":
    main()