"""
💱 Currency Converter
----------------------
Author: Mahvil
GitHub: https://github.com/Mahvil
Description:
    A simple currency converter that converts between USD, PKR, and EUR.
    Uses fixed exchange rates for easy calculations.
"""

def currency_converter():
    print("=== 💱 Currency Converter ===")
    print("1. USD to PKR")
    print("2. PKR to USD")
    print("3. EUR to PKR")
    print("4. PKR to EUR")

    choice = input("Enter your choice (1-4): ")

    try:
        amount = float(input("Enter amount: "))
    except ValueError:
        print("❌ Invalid amount entered.")
        return

    if choice == "1":
        print(f"💵 {amount} USD = {amount * 278.50:.2f} PKR")
    elif choice == "2":
        print(f"🇵🇰 {amount} PKR = {amount / 278.50:.2f} USD")
    elif choice == "3":
        print(f"💶 {amount} EUR = {amount * 296.75:.2f} PKR")
    elif choice == "4":
        print(f"🇵🇰 {amount} PKR = {amou
