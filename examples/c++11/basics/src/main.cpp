/*!
 * src/main.cpp
 * 
 * main function for project
 * Author: Abner Castro
 * Date: April 30th, 2017
 */

#include <iostream>
#include <vector>

// Defining your own initializer constructor
#include <initializer_list>
using std::initializer_list;
class myVector {
    std::vector<int> m_vec;
    public:
        myVector(const initializer_list<int>& v) {
            for (initializer_list<int>::iterator itr = v.begin(); itr != v.end(); ++itr)
                m_vec.push_back(*itr);
        }
};

// C++03 way
class person {
    public:
        std::string m_name;
        int m_age;
        void display() { std::cout << m_name << ", " << m_age << " years old." << std::endl; }
};

// Now this works in C++11
class dog {
    public:
        dog(int age, std::string name) {};
        void bark() { std::cout << "woof!" << std::endl; }
};

// override and final new keywords
class animal {
    public:
        virtual void make_noise() = 0;
};

// final: no class can be derived from cat
class cat final : public animal {
    private:
        std::string m_name = "Smelly Cat";
    public:
        cat(std::string name) : m_name(name) {}
        cat() = default; // Force compiler to generate the default constructor
        virtual void make_noise() override { std::cout << m_name << " goes meow" << std::endl; }
};

// This would be compile error
// class yellowcat : public cat {};

// constexpr - write faster programs, because it is computed at compile time
constexpr int cubed(int x) { return x * x * x; }

// working with lambda functions
template<typename func>
void filter(func f, std::vector<int> arr) {
    for (auto i : arr) {
        if (f(i))
            std::cout << i << " ";
    }
    std::cout << std::endl;    
}

int main()
{
    // Since C++03 it is possible to initialize an array like this
    int array[4] = {1, 2, 3, 4};
    std::cout << "3rd element in array" << array[2];

    // With C++11 it is now possible to initialize STL containers the same way
    std::vector<int> v = {1, 2, 3, 4};

    // Using auto type
    for (auto it = v.begin(); it != v.end(); ++it)
        std::cout << "vector=" << *it << std::endl;

    // Using my own initializer on myVector class
    myVector myVec = {0, 1, 2, 3};

    person p = {"Abner Castro", 25};
    p.display();

    dog d = {5, "Marley"};
    d.bark();

    // foreach in C++11
    // for any class that has begin() and end()
    for (auto i : v) // readonly access
        std::cout << "iterating vector with foreach: " << i << std::endl;

    // if I want to change the value
    for (auto& i : v) // changes the value in v
        i++;

    // checking if value changed
    for (auto i : v)
        std::cout << "new values in v: " << i << std::endl;

    cat smellycat;
    smellycat.make_noise();

    cat judite("Judite");
    judite.make_noise();

    std::cout << "1780 cubed is " << cubed(1780) << std::endl; // computed at compile time

    // lambda functions
    std::cout << "lambda function: " << [](int x, int y) { return x + y; } (3, 4) << std::endl;

    // or also
    auto function = [](int x, int y) { return x * y; };
    std::cout << "another lambda function: " << function(4, 5) << std::endl;

    std::vector<int> integers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto nofilter = [](int x) { return true; };
    std::cout << "showing vector with no filter" << std::endl;
    filter(nofilter, integers);

    // filter and show only the even values
    std::cout << "showing only the even values with lambda function" << std::endl;
    filter([](int x) { return x % 2 == 0; }, integers);

    // variable capture
    // we want only values larger than y
    int y = 4;
    std::cout << "show only values larger than " << y << std::endl;
    filter([&](int x) { return x > y; }, integers);

}