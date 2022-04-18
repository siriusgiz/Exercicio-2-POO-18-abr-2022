#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <numeric>

#include "./menu.hpp"

#include "./forno.hpp"

using namespace std;

Menu::Menu(){
    vector<string> st;
    st.push_back("-");

    for (size_t i = 0; i < 36; i++)
    {
        st.push_back("-");
    }

    st.push_back("-");

    this->set_title(st);
    

}

Menu::Menu(std::string title){
    this->set_title(title);
}

Menu::~Menu(){}

int Menu::get_option() {
	return this->option;
}
    
void Menu::set_option(int option) {
	this->option = option;
}

void Menu::set_title(std::vector<std::string> vstr){

    // Converte um Vector<string> em string (C++ 11)
    string temp = std::accumulate(vstr.begin(), vstr.end(), std::string{}, [](std::string &s, const std::string &piece) -> decltype(auto) { return s += piece; });

    this->title = temp;

}

void Menu::generate_menu(){
    
    while(true)
    {
        this->decoration(1);
        this->decoration(1);
        cout << this->get_title() << endl;
        this->decoration(1);
        this->decoration(1);

        cout << "\n";

        cout << "Selecione as opções: " << endl;
        cout << "1: Sair" << endl;

        int op = 0;
        cin >> op;
        getchar();

        this->set_option(op);

        if(this->option == 1)
        {
            break;
        }
        
    }
}


void Menu::decoration(int option)
{
    switch (option)
    {
    case 1:
        cout << "-";
        for(int i = 0; i <= 36; i++){
            cout << "-";
        }
        
        cout << '-' << '\n';

        break;
    
    default:
        break;
    }
}




FornoMenu::FornoMenu(){}
FornoMenu::FornoMenu(std::string title):Menu(title){}
FornoMenu::~FornoMenu(){}

void FornoMenu::generate_menu()
{

    

}




