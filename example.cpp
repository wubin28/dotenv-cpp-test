#include<iostream>
#include"dotenv.h"

int main()
{
    dotenv::init();
    std::cout << "BASE_PATH: " << std::getenv("BASE_PATH") << std::endl;
    std::cout << "LOG_PATH: " << std::getenv("LOG_PATH") << std::endl;
    std::cout << "CONFIG_PATH: " << std::getenv("CONFIG_PATH") << std::endl;
    return 0;
}