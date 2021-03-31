#include "../inc/menu.hpp"
#include <iostream>
#include <stdlib.h>
#include "../inc/menu.hpp"
#include "../inc/dados.hpp"
#include "../inc/main.hpp"
#include <vector>
#include <fstream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void cadastra_patrimonio()
{
    string myText;
    ifstream myfile("banco_de_dados.txt");
    dados patrimonio;

    cout << "Insira o nome do patrimonio: " << endl;
    cin >> patrimonio.nome;

    cout << "Insira o numero do patrimonio: " << endl;
    cin >> patrimonio.numero;
    // verifica se o numero já existe no arquivo
        while (getline(myfile, myText)){
            if (myText == patrimonio.numero){
                cout << "Numero já existe!" << endl;
                cin >> patrimonio.numero;
            }
        }

    cout << "Insira o setor responsável: " << endl;
    cin >> patrimonio.setor;

    cout << "Insira o nome e sobrenome do responsável: " << endl;
    cin >> patrimonio.responsavel;

    // instance of a ofstream called "file"
    std::ofstream file;
    file.open("banco_de_dados.txt", std::ios::app);

    std::vector<std::string> propriedades;
    propriedades.push_back(patrimonio.nome);
    propriedades.push_back(patrimonio.numero);    
    propriedades.push_back(patrimonio.setor);
    propriedades.push_back(patrimonio.responsavel);

    for (std::string item : propriedades)
    {
        file << item << std::endl;
    }

    file.close();

}

void busca_arquivo(){
    string nome;
    string myText;
    // abre o arquivo para leitura
    ifstream MyReadFile("banco_de_dados.txt");

    // cria um vetor com cada linha do arquivo
    std::vector<std::string> arquivo_salvo;
    while (getline(MyReadFile, myText)){
        arquivo_salvo.push_back(myText);
    }
    MyReadFile.close();

    //solicita o nome para que a busca seja realizada
    cout << "Para a busca, insira o nome do patrimonio: " << endl;
    cin >> nome;
    /* verifica se o nome já existe no vetor gerado
    pela leitura do arquivo */
    for (unsigned int i = 0 ; i < arquivo_salvo.size(); ++i){
        if (arquivo_salvo.at(i) == nome){
            cout << "Patrimônio: " << arquivo_salvo.at(i) << endl;
            i = i + 1;
            cout << "Numero: "<< arquivo_salvo.at(i) << endl;
            i = i + 1;
            cout << "Setor: " << arquivo_salvo.at(i) << endl;
            i = i + 1;
            cout << "Responsável: " << arquivo_salvo.at(i) << endl;
        }
    }
}

void atualiza_arquivo(){
    string numero;
    string novo_numero;
    string novo_responsavel;
    string novo_setor;
    string myText;
    // abre o arquivo para leitura
    ifstream MyReadFile("banco_de_dados.txt");

    // cria um vetor com cada linha do arquivo
    std::vector<std::string> arquivo_salvo;
    while (getline(MyReadFile, myText)){
        arquivo_salvo.push_back(myText);
    }
    MyReadFile.close();
    cout << "Para a atualização, insira o numero do patrimonio: " << endl;
    cin >> numero;
    for (unsigned int i = 0 ; i < arquivo_salvo.size(); ++i){
        if (arquivo_salvo.at(i) == numero){
            i = i + 1;
            cout << "Insira os dados a serem atualizados" << endl;
            cout << "Setor:" << endl;
            cin >> novo_setor;
            arquivo_salvo[i] = novo_setor;
            cout << "Responsavel:" << endl;
            cin >> novo_responsavel; 
            i = i +1;
            arquivo_salvo[i] = novo_responsavel;
        }
    }

    std::ofstream file;
    file.open("banco_de_dados.txt", std::ios::app);

    for (std::string item : arquivo_salvo)
    {
        file << item << std::endl;
    }

    file.close();

}




