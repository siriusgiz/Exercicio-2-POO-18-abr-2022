#ifndef FORNO_H
#define FORNO_H

class Forno
{
private:
    double temperature;
public:
    Forno();
    Forno(double);
    ~Forno();
    void set_temperature(double);
    double get_temperature() const;
};

class FornoEletrico: public Forno
{
    private:
    public:
        FornoEletrico();
        FornoEletrico(double);
        ~FornoEletrico();
        void control_the_temperature(double);

};

class FornoALenha: public Forno
{
    private:
    public:
        FornoALenha();
        FornoALenha(double);
        ~FornoALenha();
        void add_firewood(int);
};

enum fornos{
    Forno,
    Fono_elerico,
    Fono_a_lenha
};



#endif  // FORNO_H