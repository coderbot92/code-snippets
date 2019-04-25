#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"

#include <iostream>

/// Whenever there is initialization (i.e you specify type in statement)
/// constructor or move constructor is called
/// When an object is copy initialized then constructor is implicitly called
/// When an object is direct initialized or copy initialized 
/// using uniform initialization then constructor is explicitly called
class num
{ 
public: 
  explicit num(int)
  {
    std::cout << "explicit constructor called" << std::endl;
  }
  
  num(double) 
  {
    std::cout << "implicit constructor called" << std::endl;
  }
  
  num(num const&&)
  {
    std::cout << "move constructor called" << std::endl;
  }
  
  num& operator=(num const&&) = delete;
  
  num(num const&) = delete;
  num& operator=(num const&) = delete;
};

int main(int argc, char* argv[]) 
{
  // uniform direct initialization
  num val1{ 7 }; // explicit constructor called
  
  // uniform copy initialization
  num val2 = num{ 7 }; // explicit constructor called

  // copy initialization
  num val3 = 7; // implicit constructor called
  
  // move initialization
  num val4 = std::move(val1); // move constructor called
  num val5{ std::move(val2) }; // move constructor called
  
  return 0;
}

#pragma GCC diagnostic pop