// Your code here to implement the function.
#include <input.h>
bool GetYesOrNoInput(std::string YN) {

    for (YN != "yes" || "no") {


        std::cout << "Sorry, I didn't understand. ";

    }
    if (YN == "yes") {
        return true;

    } else if (YN == "no") {
        return false;
    }
}