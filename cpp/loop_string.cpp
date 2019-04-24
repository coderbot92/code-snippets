#include <iostream>

/**
 * Looping over characters in a string
 */
int main(int argc, char* argv[])
{
    std::string str{ "dummy" };
    
    std::cout << "Using range-based for loop: ";
    
    for (const char& c : str)
    {
        std::cout << c << " ";
    }
    
    std::cout << std::endl;
    
    std::cout << "Using iterator: ";
    
    for (std::string::iterator it = str.begin(); it != str.end(); ++it)
    {
        std::cout << *it << " ";
    }
    
    std::cout << std::endl;
    
    std::cout << "Using string size: ";
    
    for (std::string::size_type i = 0; i < str.size(); ++i)
    {
        std::cout << str[i] << " ";
    }
    
    std::cout << std::endl;

    return 0;
}