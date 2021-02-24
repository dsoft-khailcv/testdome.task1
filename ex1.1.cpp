#include <iostream>
#include <vector>
#include <set>
//concat vector str2 to set str1 (to remove duplicate element)
void append_string(std::set<std::string>&str1, const std::vector<std::string>&str2) {
    // for(auto element : str2)
    // {
    //    str1.insert(element);
    // }
    str1.insert(str2.begin(), str2.end());
}


std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    std::vector<std::string> names_v;
    std::set<std::string> names_s;
    append_string(names_s, names1);
    append_string(names_s, names2);
    names_v.assign(names_s.begin(), names_s.end());
    return names_v;
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