#pragma once
#ifndef TRABALHOAEDAPARTE1_JOGOSOL_H
#define TRABALHOAEDAPARTE1_JOGOSOL_H

/// @file Ficheiro header da classe Jogosol

#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <unordered_set>

#include "funcionario.h"

struct funcHash
{
    int operator() (const Funcionario & f) const
    {
        return f.getPassaporte()%7919;
    }

    bool operator() (const Funcionario & f1, const Funcionario & f2) const
    {
        return f1.getPassaporte() == f2.getPassaporte();
    }
};

typedef unordered_set<Funcionario, funcHash, funcHash> tabFunc;

using namespace std;
/// Classe Jogosol.
/// Permite representar objetos Jogos Olímpicos
class Jogosol {
private:
    static vector<Modalidade*> modalidades;
    static vector<Funcionario> funcionarios;
    static vector<Atleta> vatletas;
    static BST<Recorde> recordes;
    static priority_queue<Funcionario> fila;
    static tabFunc tabela;
public:
    /// Construtor vazio de Jogosol.
    Jogosol();
    static map<string,vector<int>> medalhas;
    /// Método get do vetor de Atletas de Jogosol.
    /// Este vetor guarda os atletas portugueses dos Jogos Olímpicos
    static vector<Atleta> getVAtletas();
    /// Método get do vetor de Funcionários de Jogosol.
    /// Este vetor guarda os funcionários (não atletas) portugueses dos Jogos Olímpicos
    static vector<Funcionario> getFuncionarios();
    /// Método get do vetor de apontadores para Modalidades de Jogosol.
    /// Este vetor guarda as modalidade dos Jogos Olímpicos
    static vector<Modalidade*> getModalidades();
    /// Método get da BST de recordes
    /// Está árvore binária de pesquisa guarda os recordes
    static BST<Recorde> getRecordes();
    /// Método get da fila de prioridade dos funcionários
    /// Nesta árvre os funcionários estão ordenados pela sua disponibilidade
    static priority_queue<Funcionario> getFuncDisp();
    /// Método get da tabela de dispersão
    /// Esta tabela guarda todos os funcionários para permitir pesquisa mais rápida
    static tabFunc getTabela();
    /// Leitura dos funcionários (não atletas) do ficheiro funcionarios.txt.
    void readFuncionarios();
    /// Leitura da indisponibilidade dos funcionarios do ficheiro funcionariosserind.txt
    void readFuncionariosIndisp();
    /// Leitura dos atletas do ficheiro atletas.txt.
    void readAtletas();
    /// Leitura dos medalhados do ficheiro medalhados.txt.
    void readMedalhas();
    /// Leitura dos recordes do fiheiro recordes.txt
    void readRecordes();
    /// Adicionar funcionário.
    /// Permite adicionar um funcionário ao vetor de funcionários de Jogosol
    ///
    /// @return Retorna o sucesso ou insucesso da operação
    static bool addFuncionario();
    /// Eliminar funcionário.
    /// Permite eliminar um funcionário do vetor de funcionários de Jogosol
    ///
    /// @return
    static bool deleteFuncionario();

    static void addRecorde();

    static void viewRecorde();
};

#endif //TRABALHOAEDAPARTE1_JOGOSOL_H
