#include <iostream>

class lol
{
    int a;
    public :
        lol(){a = 15;};
};

int main ()
{
    lol obj[10];
    
    int arr[] = {1, 2, 3};

    std::string strit[] = {"abdo", "lolop", "LOLK"};

    int size = *(&strit + 1) - strit;

    std::cout << size << std::endl;
    return (0);
}
