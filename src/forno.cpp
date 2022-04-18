#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <numeric>

#include "./forno.hpp"

using namespace std;

Forno::Forno()
{
}

Forno::Forno(double temperature){
    set_temperature(temperature);
}

Forno::~Forno()
{
    set_temperature(0);
}

double Forno::get_temperature() const{
	return this->temperature;
}
void Forno::set_temperature(double temperature) {
	if(temperature > 500){
        cout << "Erro!!!" << endl;
        cout << "Temperatura ulrapassou o limite!!!" << endl;
        throw temperature;
    }
    else{
        this->temperature = temperature;
    }

}

FornoEletrico::FornoEletrico(){}
FornoEletrico::FornoEletrico(double temperature):Forno(temperature){}
FornoEletrico::~FornoEletrico(){
    set_temperature(0);
}

void FornoEletrico::control_the_temperature(double tempet)
{
    this->set_temperature(this->get_temperature() + tempet);
}

FornoALenha::FornoALenha(){}
FornoALenha::FornoALenha(double temper):Forno(temper){}
FornoALenha::~FornoALenha(){
    set_temperature(0);
}

void FornoALenha::add_firewood(int wood_pieces){
    double temper = this->get_temperature() + (0.5 * wood_pieces);
    set_temperature(temper);
}

