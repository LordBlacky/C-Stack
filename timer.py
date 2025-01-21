import time
import os

if __name__ == '__main__':

    # Time for 8 minutes (480 seconds), but you can modify it based on your needs
    os.system('clear')
    timer = 8 * 60
    print()
    print('START TIMER: press enter')
    input()
    os.system('clear')

    # List of structs and function definitions with their respective times
    items = [
        ("Time to begin: ",10),
        ("struct Item {int value; struct Item *next;};", 30),
        ("struct Stack {struct Item *top;};", 30),
        ("struct Stack *createStack()", 30),
        ("int isEmptyStack(struct Stack *stack)", 30),
        ("void pushStack(struct Stack *stack, int value)", 60),
        ("int popStack(struct Stack *stack)", 60),
        ("int topStack(struct Stack *stack)", 60),
        ("void deleteStack(struct Stack *stack)", 60),
        ("void reverseStack(struct Stack *stack)", 120)
    ]

    a = 1
    total = 0
    # Loop through each struct and function item, printing them with respective times
    for item, duration in items:
        for t in range(duration):

            print('')
            print('TIMER: ')
            print('----------------------------------------')
            print()
            print(f'\033[32m {item}\033[0m') 
            print()
            # Print the struct or function definition
            print(f"\033[31m Time: {t}s/{duration}s ----- Total: {total}/490s\033[0m")  # Print the time in seconds

            print()
            print('------------------- Still to-do --------------------')
            print()
            for i in range(a,len(items)):
                if (item != "Time to begin: "):
                    
                    print(items[i][0])
                    print()
            time.sleep(1)
            total += 1# Wait for 1 second
            os.system('clear')  # Clear the terminal screen
        a += 1
        


