#command-line utility for personal financial management
# track financial transactions, maintain a real-time
#account of cumulative spending
#  and provide essential feedback to the user regarding their fiscal status. 
# The final output will be a comprehensive summary of the user's financial activity.

def get_positive_float(prompt):
    """Helper function to get a non-negative float from the user."""
    while True:
        try:
            value = float(input(prompt))
            if value < 0:
                print("Please enter a non-negative number.")
            else:
                return value
        except ValueError:
            print("Invalid input. Please enter a number (e.g., 5000 or 1500.50).")

# Main program
print("Welcome! Please enter your details:")

# Get user's name
name = input("Enter your name: ")

# Get user's class
class_name = input("Enter your class: ")

# Get initial amount of money (non-negative)
initial_money = get_positive_float("Enter your initial amount of money: ")

# Display the collected information
print("\n--- User Information ---")
print(f"Name: {name}")
print(f"Class: {class_name}")
print(f"Initial Money: ${initial_money:.2f}")