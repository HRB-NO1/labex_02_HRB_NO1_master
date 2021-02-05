#include <iostream>

#include "cpputils/graphics/image.h"
#include "pizza.h"



using graphics::Image;

int main() {
    // Add your code here to ask the user what kind of pizza they want,
    // and create that pizza for them.
    char want_pizza;
    char tomato_sauce;
    char cheese;
    char pepperoni;
    char jalapeno;
    char onion;

    Image my_image(500, 500);

    std::cout << "Welcome to PizzaMaker 2.0!\nWould you like a pizza?\n(y/n): ";
    std::cin >> want_pizza;
    if (want_pizza == 'y'){
        AddCrust(my_image);
        std::cout << "Would you like tomato sauce?\n(y/n): " ;
        std::cin >> tomato_sauce;
        if (tomato_sauce == 'y') {
            AddSauce(my_image);
        }
        std::cout <<"Would you like cheese with that?\n(y/n): ";
        std::cin >> cheese;
        if (cheese == 'y') {
            AddCheese(my_image);
        }
        std::cout <<"Would you like pepperoni?\n(y/n): ";
        std::cin >> pepperoni;
        if (pepperoni == 'y') {
            AddPepperoni(my_image);
        }
        std::cout <<"Would you like jalapeno with that?\n(y/n): ";
        std::cin >> jalapeno;
        if (jalapeno == 'y') {
            AddJalapeno(my_image);
        }
        std::cout <<"Would you like onion?\n(y/n): ";
        std::cin >> onion;
        if (onion == 'y') {
            AddOnion(my_image);
        }
        std::cout << "Great! Your pizza is at pizza.bmp. Enjoy!\n";
    }
    else{


    }


    my_image.SaveImageBmp("pizza.bmp");

    return 0;
}
