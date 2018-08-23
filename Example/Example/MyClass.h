#pragma once

#include <iostream> // 包含输入输出流，然后就可以使用cout进行输出，cin进行输入

using namespace std; // 命名空间，标准库的函数都在命名空间std内

class MyClass {
public:
	MyClass(); // 构造函数，在创建该类的实例时调用
	~MyClass(); // 析构函数，在销毁当前实例时调用
	void love();
private:
	int anyVariable;
};