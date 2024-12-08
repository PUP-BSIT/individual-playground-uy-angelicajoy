import os
from showinfm import show_in_file_manager

def main():
    # Get user input for the file or folder path
    user_input = input("Enter the file or folder path you want to open: ").strip()

    # Check if the file or folder exists
    if os.path.exists(user_input):
        # Open the specified file or folder in the file manager
        show_in_file_manager(user_input)
        print(f"Opened '{user_input}' in your default file manager.")
    else:
        # Inform the user if the path does not exist
        print(f"Error: The path '{user_input}' does not exist. Please check and try again.")

if __name__ == "__main__":
    main()