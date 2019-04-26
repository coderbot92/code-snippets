#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"

#include <iostream>

/// initialization is creating new object without existing object
/// move construction is creating new object from temporary
/// copy construction is creating new object from existing object
/// move assignment is changing existing object from a temporary
/// copy assignment is changing exiting object from existing object
class num
{
public:
  num(int)
  {
    std::cout << "constructor called" << std::endl;
  }

  num(num const&&)
  {
    std::cout << "move constructor called" << std::endl;
  }

  num& operator=(num const&&)
  {
    std::cout << "move assignment called" << std::endl;
    return *this;
  }

  num(num const&)
  {
    std::cout << "copy constructor called" << std::endl;
  }

  num& operator=(num const&)
  {
    std::cout << "copy assignment called" << std::endl;
    return *this;
  }
};

int main(int argc, char* argv[])
{
  // uniform direct initialization
  num val1{ 7 }; // constructor called

  // uniform copy initialization
  // move constructor is not called because temporary is considered
  // only when std::move is used
  num val2 = num{ 7 }; // constructor called

  // move initialization
  num val4 = std::move(val1); // move constructor called
  num val5{ std::move(val2) }; // move constructor called

  // copy construction
  num val6 = val5; // copy constructor called

  // copy assignment
  val5 = val4; // copy assignment called

  // move assignment
  val6 = std::move(val5); // move assignment called

  // copy initialization
  /// this line will not compile if constructor is explicit
  num val10 = 7; // constructor called

  // first the constructor is called
  // then the created object is made temporary
  // then move constructor is called
  num val11 = std::move(num{7});

  return 0;
}

#pragma GCC diagnostic pop