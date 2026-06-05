#include "MyExcept.h"
#include <string>
#include <iostream>

MyExcept::MyExcept(const std::string& msg) {
    this->message = msg;
}

MyExcept::MyExcept(const std::string& msg, const std::string& classfic) {
    this->message = msg;
    this->classification = classfic;
}

const char* MyExcept::what() const noexcept {
    return message.c_str();
}