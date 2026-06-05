#pragma once
#include <exception>
#include <string>

class MyExcept : public std::exception
{
private:
    std::string message;
    std::string classification;
public:
    MyExcept(const std::string& msg);
    MyExcept(const std::string& msg, const std::string& classification);

    // Перевизначення методу what() для повернення тексту помилки
    const char* what() const noexcept override;
};

