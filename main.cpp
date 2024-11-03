#include <iostream>
int main() {
    char a = 'x';
    char *aPtr = &a;
    *aPtr = 'y';
    std::cout << a << std::endl;
    return 0;
}
