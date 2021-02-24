## Problem
Implement the unique_names method. When passed two vectors of names, it will return a vector containing the names that appear in **either or both** vectors. The returned vector should have no duplicates.

For example, calling *uniqe_names(std::vector<std:string>{"Ava", "Emma", "Olivia"}, std::vector<std::string>{"Olivia", "Sophia", "Emma"})* should return a vector containing Ava, Emma, Olivia, and Sophia in any orde
#### Example
    #include <iostream>
    #include <vector>
    
    std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
    {
        throw std::logic_error("Waiting to be implemented");
    }
    
    #ifndef RunTests
    int main()
    {
        std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
        std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
        
        std::vector<std::string> result = unique_names(names1, names2);
        for(auto element : result)
        {
            std::cout << element << ' '; // should print Ava Emma Olivia Sophia
        }
    }
    #endif

## Solution
1. Defining Function: **append_string (std::set<std::string>&str1, const std::vector<std::string>&str**
Using ***set*** container ti concat string 2 into string 1 to remove duplicate names
2. Using ***vector::assign*** function to assign std::set to std::vector

## Complile and Run
    g++ -std=c++17 -o ex1.1 ex1.1.cpp -Wall
    sudo ./ex1.1
## Test cases
| Case | Test | Input | Output | Result
| ---- | ---- | ---- | ---- | ---- |
| 1 |   Example case | {"Ava", "Emma", "Olivia"}, {"Olivia", "Sophia", "Emma"} | Ava Emma Olivia Sophia | Correct answer |
| 2 |     Each vector has distinct names | {"Ronaldo", "Maradona", "Pele"}, {"Henry", "Messi", "Beckham"} | Beckham Henry Maradona Messi Pele Ronaldo | Correct answer |
| 3 |     Each vector has duplicate names | {"Ronaldo", "Maradona", "Ronaldo"}, {"Henry", "Messi", "Messi"} | Henry Maradona Messi Ronaldo | Correct answer |
| 4 |     Each vector has duplicate names | {"Ronaldo", "Maradona", "Henry", "Ronaldinho", "Ferdinand"}, {"Henry", "Messi", "Beckham", "Pele", "Ronaldinho"} | Beckham Ferdinand Henry Maradona Messi Pele Ronaldinho Ronaldo | Correct answer |
