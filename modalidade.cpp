#include "modalidade.h"

#include<fstream>

Modalidade::Modalidade()= default;

Modalidade::Modalidade(string nome)
{
   this->nome = nome;

   ifstream file;

   string filename = "C:\\Users\\Fisica1\\Desktop\\AEDA\\Trabalho\\TrabalhoAEDAParte1\\" + nome + ".txt";

   file.open(filename);

   while(!file.eof())
   {
       Competicao c;

       file >> c;

       competicoes.push_back(c);
   }

}
