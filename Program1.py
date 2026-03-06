print("Welcome to The Cloud Computing Lab")
print("Here we are dealing with Google Cloud Engine")

# Console-based application example
def display_menu():
    print("\n===== Cloud Console Application =====")
    print("1. Display Welcome Message")
    print("2. Perform Addition")
    print("3. Display System Information")
    print("4. Exit")

def welcome_message():
    print("\nWelcome! This program demonstrates a simple console application.")
    print("It can be used while learning cloud deployment concepts.")

def perform_addition():
    try:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        result = num1 + num2
        print("Result:", result)
    except ValueError:
        print("Invalid input! Please enter numeric values.")

def system_info():
    import platform
    print("\nSystem Information")
    print("Operating System:", platform.system())
    print("OS Version:", platform.version())
    print("Processor:", platform.processor())

def main():
    while True:
        display_menu()
        choice = input("Enter your choice: ")

        if choice == "1":
            welcome_message()

        elif choice == "2":
            perform_addition()

        elif choice == "3":
            system_info()

        elif choice == "4":
            print("Exiting program...")
            break

        else:
            print("Invalid choice! Please try again.")

if __name__ == "__main__":
    print("Starting Program1 Console Application...")
    main()
