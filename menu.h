#pragma once
#ifndef TRABALHOAEDAPARTE1_MENU_H
#define TRABALHOAEDAPARTE1_MENU_H

#include <iostream>
#include <sstream>

#include "jogosol.h"

using namespace std;

class Menu {
public:
    void mainMenu();
    void funcionariosEAtletas();
    void atletas();
    void funcionarios();
    void visualizarAtletas(Atleta &atleta);
    void editarAtleta();
    void editarFuncionario();
    static void listaAtletasEscolhe();
    static void listaFuncionariosEscolhe();
    void modificarInfoPessoalFuncionario(Funcionario &funcionario);
    void modificarInfoPessoalAtleta(Atleta &atleta);
    static void listaModalidades();
    void modalidadeMenu(Modalidade *modalidade);
    static void listaCompeticoes(Modalidade *modalidade);
    void competicaoMenuVis(Competicao &competicao,Modalidade *modalidade);
    void competicaoMenuMod(Competicao &competicao,Modalidade *modalidade);
    void programacaoDiaria();
    void diasAnteriores();
    void tabelaDeMedalhados();
    static void continuar();
};


#endif //TRABALHOAEDAPARTE1_MENU_H
