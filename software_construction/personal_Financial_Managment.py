#command-line utility for personal financial management
# track financial transactions, maintain a real-time
#account of cumulative spending
#  and provide essential feedback to the user regarding their fiscal status. 
# The final output will be a comprehensive summary of the user's financial activity.

def get_positive_price(firstPrice):
    #get a non-negative float from user
    while True:
        try:
            value = float(input(firstPrice))
            if value < 0:
                print("Please enter a non-negative number.")
            else:
                return value
        except ValueError:
            print("Invalid input. Please enter a valid number ")


print("Enter your details:")

# Get user's name
name = input("Enter your name: ")

# Get user's class
class_name = input("Enter your class: ")

# Get initial amount of money 
initial_money = get_positive_price("Enter your initial amount of money: ")

# Display initial information
print("\n--- User Information ---")
print(f"Name: {name}")
print(f"Class: {class_name}")
print(f"Initial Money: ${initial_money:.2f}")