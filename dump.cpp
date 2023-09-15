#include <iostream>

int main() {
    int choice;

    while (true) {
        std::cout << "Menu:\n";
        std::cout << "1. Option 1\n";
        std::cout << "2. Option 2\n";
        std::cout << "3. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "You chose Option 1\n";
                // Add code to handle Option 1
                break;
            case 2:
                std::cout << "You chose Option 2\n";
                // Add code to handle Option 2
                break;
            case 3:
                std::cout << "Exiting the program\n";
                return 0; // Exit the program
            default:
                std::cout << "Invalid choice. Please try again.\n";
                // Clear the input stream to prevent an infinite loop
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    return 0;
}
