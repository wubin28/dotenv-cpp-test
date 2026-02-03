#include<iostream>
#include<cstdlib>
#include"dotenv.h"

int main()
{
    // 先设置一个环境变量
    _putenv("DATABASE_HOST=already_set");

    std::cout << "Before init: " << std::getenv("DATABASE_HOST") << std::endl;

    // 使用Preserve模式，不覆盖已有变量
    dotenv::init(dotenv::Preserve);

    std::cout << "After init with Preserve: " << std::getenv("DATABASE_HOST") << std::endl;

    return 0;
}
