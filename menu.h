#pragma once
#ifndef TRABALHOAEDAPARTE1_MENU_H
#define TRABALHOAEDAPARTE1_MENU_H

#include <iostream>
#include <sstream>

#include "jogosol.h"

using namespace std;
/// Classe Menu.
/// Permite representar o objeto Menu
class Menu {
public:
    /// Menu principal.
    void mainMenu();
    /// Menu de funcionários e atletas.
    void funcionariosEAtletas();
    /// Menu de atletas.
    void atletas();
    /// Menu de funcionários.
    void funcionarios();
    /// Visualizar os Atletas.
    /// Apresenta uma lista com informação dos atletas
    ///
    /// @param atleta Atleta selecionado
    void visualizarAtletas(Atleta &atleta);
    /// Menu editar atleta.
    /// Apresenta uma lista de opções de edição do alteta
    void editarAtleta();
    /// Menu editar funcionário.
    /// Apresenta uma lista de opções de edição do funcionário
    void editarFuncionario();
    /// Lista de escolha de atletas.
    /// Apresenta uma lista de todos os atletas e lê uma escolha
    static void listaAtletasEscolhe();
    /// Lista de escolha de funcionários.
    /// Apresenta uma lista de todos os funcionários e lê uma escolha
    static void listaFuncionariosEscolhe();
    /// Menu de alteração da informação pessoal do funcionário.
    /// Aprsenta uma lista com a informação possível de ser alterada, lê uma escolha e efetua a alteração
    void modificarInfoPessoalFuncionario(Funcionario &funcionario);
    /// Menu de alteração da informação pessoal do atleta.
    /// Aprsenta uma lista com a informação possível de ser alterada, lê uma escolha e efetua a alteração
    ///
    /// @param atleta Atleta selecionado
    void modificarInfoPessoalAtleta(Atleta &atleta);
    /// Lista de modalidades.
    /// Apresenta uma lista das modalidades e lê uma escolha
    static void listaModalidades();
    /// Menu de modalidade.
    ///
    /// @param modalidade Apontador para a modalidade selecionada
    void modalidadeMenu(Modalidade *modalidade);
    /// Lista de competições.
    /// Apresenta uma lista das competições de uma modalidade
    static void listaCompeticoes(Modalidade *modalidade);
    /// Menu de visualização da competição.
    /// Apresenta uma lista da informação possível de se visializar de uma competição
    ///
    /// @param competicao Competição selecionada
    /// @param modalidade Apontador para a modalidade selecionada
    void competicaoMenuVis(Competicao &competicao,Modalidade *modalidade);
    /// Menu de visualização da competição.
    /// Apresenta uma lista da informação possível de se modificar de uma competição
    ///
    /// @param competicao Competição selecionada
    /// @param modalidade Apontador para a modalidade selecionada
    void competicaoMenuMod(Competicao &competicao,Modalidade *modalidade);
    /// Programação diária.
    /// Apresenta a programação diária
    void programacaoDiaria();
    ///  Menu de programação de dias anteriores.
    /// Apresenta a programação de dias anteriores
    void diasAnteriores();
    /// Menu tabela de medalhados.
    /// Apresenta os países e as medalhas respetivas, seguindo a ordenação escolhida pelo utilizador
    void tabelaDeMedalhados();
    /// Menu genérico.
    /// Menu a ser apresentado em diversas siuações com escolhas diversas
    static void continuar();
};


#endif //TRABALHOAEDAPARTE1_MENU_H
