#include <iostream>
#include <string>

class TextInput
{
public:
    std::string current_value = "";
    virtual void add(char c)
    {
        current_value += c;
    }

    std::string getValue()
    {
        return current_value;
    }
};

class NumericInput : public TextInput
{
    void add(char c) {
        if(isdigit(c)) {
            current_value += c;
        }
    }
};

#ifndef RunTests
int main()
{
    TextInput *input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue();
}
#endif