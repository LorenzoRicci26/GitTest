#include <iostream>

void greet(const std::string &name){
    std::cout<<"Hello,"<<name<<"!"<<std::endl;
}
int main() {
    std::string n="World";
    greet(n);
    return 0;
}