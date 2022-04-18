#include <iostream>
#include <iomanip>

#include "./menu.hpp"
#include "./forno.hpp"


int main(int argc, char const *argv[])
{
    Menu m("Selecione o tipo de fono");

    m.generate_menu();
    
    return 0;
}


