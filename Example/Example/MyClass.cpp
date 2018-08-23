#include "MyClass.h"

MyClass::MyClass() {
	anyVariable = 1;
}

MyClass::~MyClass() {

}

void MyClass::love() {
	cout << "Yichao, I love you. " << endl; // cout和endl都在std命名空间内，由于我们之前便声明了命名空间，所以直接可以用cout和endl（否则就得用std::cout和std::endl）
}