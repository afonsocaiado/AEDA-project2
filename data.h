#pragma once
#ifndef TRABALHOAEDAPARTE1_DATA_H
#define TRABALHOAEDAPARTE1_DATA_H

#include <iostream>

#include "util.h"

using namespace std;

/// Classe Data.
/// Utilizada para representar datas.
class Data {
private:
    int dia, mes, ano;
public:
    /// Construtor vazio da classe Data.
    Data();
    /// Construtor da classe Data
    ///
    /// @param dia Dia da data
    /// @param mes Mês da data
    /// @param ano Ano da data
    Data(int dia, int mes, int ano);
    /// Método get do dia.
    ///
    /// @return Retorna o dia da data
    int getDia();
    /// Método get do mês.
    ///
    /// @return Retorna o mês da data
    int getMes();
    /// Método get do ano.
    ///
    /// @return Retorna o ano da data
    int getAno();
    /// Método set do dia.
    void setDia(int dia);
    /// Método set do mês.
    void setMes(int mes);
    /// Método set do ano.
    void setAno(int ano);
    /// Operador de escrita da data.
    ///
    /// @param o Stream de output
    /// @param d Objeto Data a ser escrito
    /// @return Retorna a stream de output o
    friend ostream & operator<<(ostream & o, const Data & d);
    /// Operador de leitura da data.
    ///
    /// @param i Stream de input
    /// @param d Objeto Data a ser construído com os dados daa leitura
    /// @return Retorna a stream de input i
    friend istream &operator>>(istream &i, Data &d);
    /// Operador de verificaçâo de igualdade entre datas
    ///
    /// @param d1
    /// @return Retorna true se as datas forem iguais
    bool operator==(Data& d1);
    /// Operador de maior ou igual entre datas
    ///
    /// @param d1 Data a ser comparada com a data antes do operador
    /// @return Retorna true se a data antes do operador for maior ou igual que a data após o operador
    bool operator>=(Data& d1);
    /// Operador de maior entre datas
    ///
    /// @param d1 Data a ser comparada com a data antes do operador
    /// @return Retorna true se a data antes do operador for maior que a data após o operador
    bool operator>(Data& d1);
};

#endif //TRABALHOAEDAPARTE1_DATA_H
