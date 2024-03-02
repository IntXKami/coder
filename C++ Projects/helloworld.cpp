#include <iostream>

int main(){

    //This is a comment
    /*This is a
    multi-line
    comment
    */
    //std::cout << "I like sushi!" << '\n'; // put comment in 2nd line ('\n';)
    //std::cout << "It's really good!" << '\n'; // or (endl;)

    // declaration (int x;)
    // assignment (x = 7;)
    int x = 7;
    int y = 8;
    int sum = x + y; // can combine in multiplications

    //integer (whole number)
    int age = 33;
    int year = 2024;
    int days = 7;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature =25.1;

    // single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean (true or false)
    bool student = true;
    bool power = false;
    bool forsale = true;

    // string (objects that respresent a sequence of text)
    std::string name = "Xavior";
    std::string day = "Saturday";
    std::string food = "Sushi";
    std::string address = "69 Fake ST.";

    //std::cout << "Hello " << name << '\n'; // check your spacing in ("text")
    //std::cout << "You are " << age << " years old";

    // The const keyword specifies that a variable's value is constant
    // tells the complier to prevent anything from modifying it
    // (read-only)
    //double pi = 3.14159;
    //double radius = 10;
    //double circumference = 2 * pi * radius; // symbol for times is *

    //std::cout << circumference << "cm";

    //const (read-only) 
    // a common name to make const is to make all the letters uppercase
    // so easy to spot
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    return 0;
}