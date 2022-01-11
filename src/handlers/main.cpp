#include "../include/logger.h"
#include <vector>
#include <string>
#include <iostream>
#include "../include/structure.h"

std::vector<Node::inputEvent> store;

void handleInput(Node::inputEvent data)
{
    store.push_back(data);
    std::cout << "Response: " << store[rand() % store.size()].event << std::endl;
}