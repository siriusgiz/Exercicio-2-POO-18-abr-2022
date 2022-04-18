#if !defined(MENU_H)
#define MENU_H

#include <iostream>
#include <vector>

class Menu
{
private:
    int option;
    std::string title;

protected:
    void decoration(int);

public:
    Menu();
    Menu(std::string);
    ~Menu();
    void generate_menu();
    void set_option(int);
    int get_option();
    void set_title(std::string title = "\n"){
        this->title = title;
    }

    void set_title(std::vector<std::string>);

    std::string get_title(){
	    return this->title;
    }
};

class FornoMenu: public Menu{
    public:
        FornoMenu();
        FornoMenu(std::string);
        ~FornoMenu();
        void generate_menu();

};



#endif // MENU_H
