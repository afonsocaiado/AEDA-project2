#pragma once
#ifndef TRABALHOAEDAPARTE1_PROVA_H
#define TRABALHOAEDAPARTE1_PROVA_H

#include <string>

#include "recorde.h"


class Prova {
private:
    string nome;
    Data data;
public:
    /// Construtor vazio da Prova.
    Prova();
    /// Construtor da Prova.
    ///
    /// @param nome Nome da prova
    explicit Prova(string nome);
    /// Método get da data.
    ///
    /// @return Retorna a data da Prova
    Data getData();
    /// Método get do nome.
    ///
    /// @return Retorna o nome da prova
    string getNome() const;
    /// Método set da Data
    ///
    /// @param data Data para a qual será alterada a data da prova
    void setData(Data data);
};

#endif //TRABALHOAEDAPARTE1_PROVA_H
