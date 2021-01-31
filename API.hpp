//
// Created by maxim on 31.01.21.
//

#ifndef OS_API_HPP
#define OS_API_HPP

#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;
struct Size {
    int width;
    int height;
};

class API {
private:
    Size size;
    RenderWindow *window;
public:
    RenderWindow *getWindow() {
        return window;
    }

    Size getSize() {
        return size;
    }

};


#endif //OS_API_HPP
