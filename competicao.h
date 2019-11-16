#pragma once
#ifndef TRABALHOAEDAPARTE1_COMPETICAO_H
#define TRABALHOAEDAPARTE1_COMPETICAO_H


#include <vector>

#include "prova.h"

using namespace std;

/// Classe Competicao.
/// Classe relativa às competições.
class Competicao {

private:
    string nome;
    vector<Prova*> provas;
    bool individual;
    vector<string> medalhados;

public:
    /// Construtor vazio da Competição.
    Competicao();
    /// Construtor da Competição.
    ///
    /// @param nome Nome da competição
    /// @param individual Booleano relativo a ser individual ou coletiva (true se for individual)
    Competicao(string nome, bool individual);

    string getNome();
    /// Método get do vetor de apontadores para Provas da competição.
    ///
    /// @return Retorna o vetor de apontadores para Provas

    vector<struct Prova *> getProvas();
    /// Método get do booleano Individual.
    ///
    /// @return Retorna o booleano Individual (true se for individual)
    bool getIndividual();
    /// Método get dos medalhados da competição.
    ///
    /// @return Retorna o vetor de medalhados da competição
    vector<string> getMedalhados();
    /// Método set do vetor de medalhados (string) da competição.
    ///
    /// @param medalhados Vetor de medalhados da competição
    void setMedalhados(vector<string> medalhados);
    /// Método para adicionar uma Provas.
    ///
    /// @return Retorna o sucesso ou insucesso do método
    bool addProva();
    /// Operador de input da competição.
    /// Permite ler uma competição de uma stream de input.
    ///
    /// @param i Stream de input
    /// @param c Objeto Competicao a ser construído com os dados da leitura
    /// @return Retorna a stream de input i
    friend istream &operator>>(istream & i, Competicao &c);
};
#endif //TRABALHOAEDAPARTE1_COMPETICAO_H
