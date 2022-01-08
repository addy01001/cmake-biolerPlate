#include <iostream>
#include <vector>
#include "headers/logger.h"
#include "headers/eventHandler.h"
#include <string.h>

int main(void)
{
  bool on = true;
  char ch[100];
  std::vector<std::string> store;
  Log("Initialized..");
  while (on)
  {
    std::cin.getline(ch, 100);
    if (strcmp(ch,"q")==0)
    {
      on = false;
    }
    else
    {
      handleInput(ch, store);
    }
  }
  Log("Exiting..");
  return 0;
}