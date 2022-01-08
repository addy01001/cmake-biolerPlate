#include "../headers/logger.h"
#include <vector>
#include <string.h>
#include <iostream>

void handleInput(const char *ch, std::vector<std::string> store)
{
    store.push_back(ch);
    std::cout << "Response: " << store[rand() % store.size()] << std::endl;
}