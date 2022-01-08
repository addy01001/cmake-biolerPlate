#include "../headers/logger.h"
#include <string.h>

void handleInput(const char* ch){
    if(strcmp(ch,"hi")==0){
        Log("Hi there");
    }
}