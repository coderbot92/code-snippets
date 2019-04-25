#include <iostream>
#include <iomanip>

/// std::ws is used when switching between reading formatted input to unformatted input
/// Reading formatted input: std::cin >> some_var; --- skips leading whitespaces 
/// or endline chars and stops just when token is read
/// Reading unformatted input: std::getline(std::cin, str_variable) --- reads
/// until endline chars are found and also consumes the endline chars
/// std::getline(...) therefore does not skip any leading whitespaces
int main(int argc, char* argv[])
{
    double price;
    std::string product;
    
    std::cin >> price;
    
    // use of std::cin >> std::ws skips the leading whitespaces or 
    // leading end line chars and returns an updated std::cin stream, 
    // which is then passed to std::getline to carry on reading 
    // where the actual content is present till end line chars are reached.
    std::getline(std::cin >> std::ws, product);
    
    std::cout << std::fixed << std::setprecision(1) << "Price is: " << price << std::endl;
    std::cout << "Product is: " << product << std::endl;
    
    return 0;
}