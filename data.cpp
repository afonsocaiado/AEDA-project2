#include "data.h"

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

Data::Data() {
    dia = 0;
    mes = 0;
    ano = 0;
}

Data::Data(int dia, int mes, int ano)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

int Data::getDia()
{
    return dia;
}

int Data::getMes()
{
    return mes;
}

int Data::getAno()
{
    return ano;
}

void Data::setDia(int dia)
{
    this->dia = dia;
}

void Data::setMes(int mes)
{
    this->mes = mes;
}

void Data::setAno(int ano)
{
    this->ano = ano;
}

ostream & operator<<(ostream & o, const Data & d) {
    o << d.dia << '/' << d.mes << '/' << d.ano;
    return o;
}

istream &operator>>(istream &i, Data &d){
    string tempd,tempm,tempa;
    int intd,intm,inta;

    getline(i, tempd, '/');
    getline(i, tempm, '/');
    getline(i, tempa, ';');

    try {
        intd = stoi(tempd);
        intm = stoi(tempm);
        inta = stoi(tempa);
        if(intd>31 || intd<0)
        { throw 1;}

        else if (intm<0 || intm>12)
        {throw 2;}

        else if (inta<1900 || inta>2100)
        {throw 3;}

        else
            d.dia=intd; d.mes =intm; d.ano=inta;
    }

    catch(std::invalid_argument&)
    {
        cout << "Formato de data incorreto"<<endl;
    }

    catch(int i){
        if(i==1){cout << "Dia invalido" << endl;}
        else if (i==2){cout << "Mes invalido" << endl;}
        else if(i==3){cout << "Ano invalido" << endl;}
    }

    return i;
}

bool Data::operator== ( Data& d1){ // check for equality
    if( (d1.getDia()==this->getDia()) && (d1.getMes()==this->getMes()) && (d1.getAno()==this->getAno())){ return true;};
    return false;}

bool Data::operator>(Data& d1){
    if (d1==*this)
    {
        return false;
    }
    if ((this->getAno()>d1.getAno()) || (this->getAno()==d1.getAno() && this->getMes()>d1.getMes()) || (this->getAno()==d1.getAno() && this->getMes()==d1.getMes() && this->getDia()>d1.getDia()))
    {
        return true;
    }
}

bool Data::operator>=(Data& d1){
    { if (d1==*this) { return true;};
        return (d1 > *this);
    };
}