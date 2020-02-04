#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;

    int a[] = {1, 2, 3, 4, 5, 5, 6};
    char c[] = "EE599";
    float f[] = {1.0, 2.0, 1.1, 2.5, 1.5};

    std::cout << solution.PrintHelloWorld() << std::endl;

    int size_a = sizeof(a)/sizeof(int);
    int size_c = sizeof(c)/sizeof(char);
    int size_f = sizeof(f)/sizeof(float);

    std::cout << "The size of int array 'a' is: " << size_a << std::endl;
    std::cout << "The size of char array 'c' is: " << size_c << std::endl;
    std::cout << "The size of float array 'f' is: " << size_f << std::endl;

    return EXIT_SUCCESS;
}