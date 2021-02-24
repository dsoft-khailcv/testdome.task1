## Problem
User interface contains two types of user input controls: *TextInput*, which accepts all characters and *NumericInput*, which accepts only digits.

Implement the following methods:
* *add* on class *TextIput* - adds the given character to the current value
* *getValue* on class TextInput - returns the current value
* *add* on class *NumericInput* - overrides the base class method so that each non-numeric character is ignored

The example below show output "10".
#### Example
    #include <iostream>
    #include <string>
    
    class TextInput
    {
    public:
        void add(char c) { }
    
        std::string getValue() { return NULL; }
    };
    
    class NumericInput : public TextInput { };
    
    #ifndef RunTests
    int main()
    {
        TextInput* input = new NumericInput();
        input->add('1');
        input->add('a');
        input->add('0');
        std::cout << input->getValue();
    }
    #endif

## Solution
By default, function Binding is **Early binding**, so when we use Base class's pointer or reference **TextInput\* input**, the dirive class cannot override and gives unexpected result.
So I use virtual keyword when declaring *TextInput* to lead to **Late Binding**.

## Complile and Run
    g++ -std=c++17 -o ex1.2 ex1.2.cpp -Wall
    sudo ./ex1.2
## Test cases
| Case | Test | Result |
| ---- | ---- | ---- |
| 1 |   Example case | Correct answer |
| 2 | Adding various characters to TextInput | Correct answer |
| 3 | Adding various characters to NumericInput | Correct answer |
