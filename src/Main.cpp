#include <iostream>
#include <vector>
#include "include/logger.h"
#include "include/eventHandler.h"
#include <string.h>
#include "include/structure.h"

int main(void)
{
  bool on = true;
  char ch[100];
  Log("Initialized..");
  while (on)
  {
    std::cin.getline(ch, 100);
    if (strcmp(ch, "q") == 0)
    {
      on = false;
    }
    else
    {
      Node::inputEvent temp;
      strcpy(temp.type, "Text");
      strcpy(temp.event, ch);
      handleInput(temp);
    }
  }
  Log("Exiting..");
  return 0;
}