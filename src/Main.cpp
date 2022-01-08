#include <iostream>
#include <vector>
#include "headers/logger.h"
#include "headers/eventHandler.h"
#include <string.h>

int main(void)
{
  bool on = true;
  char ch[100];
  std::vector<char*> store;
  Log("Initialized..");
  while (on)
  {
    std::cin>> ch;
    if (strcmp(ch,"q")==0)
    {
      on = false;
    }
    else
    {
      store.push_back(ch);
      Log(store[rand()%store.size()]);
      handleInput(ch);
    }
  }
  Log("Exitting..");
  return 0;
}