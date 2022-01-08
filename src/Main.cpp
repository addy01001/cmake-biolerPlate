#include <iostream>
#include "Helper/logger.h"
#include <string.h>

int main()
{
  bool on = true;
  std::string ch;
  Log("Initialized..");
  while (on)
  {
    Log("Input value");
    std::getline(std::cin, ch);
    if(ch=="q"){
      on=false;
    }
  }
  return 0;
}