#include <iostream>

void first_func();
void second_func(int n, int x, int y);
void third_func(int x, int y);
void error_message();

int main() {
    std::cout << "Hi! Which algorithm you want use?"
                 "\n1. § = 9 + number * 3 = 0."
                 "\n2. § = x * y * z."
                 "\n3. § = 4 - x - y\n\nFunction Number: ";

    int number;
    std::cin >> number;

    switch(number) {
        case 1:
            first_func();
            break;
        case 2:
            int num1, num2, num3;
            std::cin >> num1 >> num2 >> num3;
            second_func(num1, num2, num3);
            break;
        case 3:
            int num4, num5;
            std::cin >> num4 >> num5;
            third_func(num4, num5);
            break;
        default:
            error_message();
            break;
    }
    return 0;
}

void first_func() {
    int whatisthis = -5;
    while(true) {
        if (9 + whatisthis * 3 == 0) {
            std::cout << "9 + " << whatisthis << " * 3 = 0";
            break;
        } else {
            whatisthis++;
        }
    };
}

void second_func(int n, int x, int y) {
    std::cout << n * x * y << std::endl;
}

void third_func(int x, int y) {
    std::cout << 4 - x - y << std::endl;
}

void error_message() {
    std::cout << "I dont know this number :(" << std::endl;
}