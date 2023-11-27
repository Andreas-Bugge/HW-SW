#include <iostream>
#include <cstdlib>
#include <ctime>

bool valid(int p) {
    return p % 2 == 0;
}

// Function to switch the system to Active state
void activateSystem() {
    std::cout << "System is now Active.\n";
}


int main() {
    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Initial state is Inactive
    bool systemActive = false;

    // Generate a random PIN code
    int generatedPin = std::rand() % 10;

    // Check if the generated PIN is valid
    if (valid(generatedPin)) {
        // If valid, switch the system to Active state
        activateSystem();
        systemActive = true;
    } else {
        std::cout << "Invalid PIN. System remains Inactive.\n";
    }

    // Additional code for the rest of your program

    return 0;
}