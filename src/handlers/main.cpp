#include "logger.h"
#include <vector>
#include <string>
#include <iostream>
#include "structure.h"

std::vector<Node::inputEvent> store;
std::string state="Neutral";

void handleInput(Node::inputEvent data)
{
    store.push_back(data);
    std::cout << "Response: " << store[rand() % store.size()].event << std::endl;
}