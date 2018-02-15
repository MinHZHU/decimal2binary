#include <iostream>
#include <string>
#include <algorithm>

std::string i2bs(long int number)
{
    std::string binary;

    for(unsigned int i = 0; i < 8*sizeof(int); i++, number >>= 1)
    {
        if(i % 4 == 0 && i > 0)
            binary += ' ';
        binary += (number & 0x01) + '0';
    }
    reverse(binary.begin(), binary.end());

    return binary;
}

void decimal2binary(unsigned int number)
{
    std::cout << '(' << number << ")D = (" << i2bs(number) << ")B" << std::endl;
}

int main()
{
    long int number;

    std::cin >> number;
    decimal2binary(number);

    return 0;
}
