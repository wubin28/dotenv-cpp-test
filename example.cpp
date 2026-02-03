// example.cpp
#include<iostream>
#include"dotenv.h"

int main()
{
    // 初始化dotenv，加载.env文件
    dotenv::init();

    // 读取环境变量并输出
    std::cout << "DATABASE_HOST: " << std::getenv("DATABASE_HOST") << std::endl;
    std::cout << "DATABASE_USERNAME: " << std::getenv("DATABASE_USERNAME") << std::endl;
    std::cout << "DATABASE_PASSWORD: " << std::getenv("DATABASE_PASSWORD") << std::endl;

    // 使用dotenv::getenv()的默认值功能
    std::cout << "DATABASE_PORT: "
              << dotenv::getenv("DATABASE_PORT", "3306")
              << std::endl;

    return 0;
}