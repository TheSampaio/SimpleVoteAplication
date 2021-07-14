// 2) Algoritmo Candidatos

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void menu () {
    cout << "------------------------------------------------------" << endl;
    cout << " Algoritmo Candidatos | By Kellvyn de Miranda Sampaio " << endl;
    cout << "------------------------------------------------------" << endl << endl;
}

int main () {

    menu();

    int voto;

    int candidato01 = 0;
    int candidato02 = 0;
    int votoBranco = 0;
    int votoNulo = 0;

    while (true)
    {
        cout << "Insira seu voto: ";
        cin >> voto;

        if (voto != -1) {

            switch (voto)
            {
            case 0: votoBranco = votoBranco + 1, cout << "Voto validado com sucesso" << endl << endl; break;
            case 1: candidato01 = candidato01 + 1, cout << "Voto validado com sucesso" << endl << endl; break;
            case 2: candidato02 = candidato02 + 1, cout << "Voto validado com sucesso" << endl << endl; break;
            case 3: votoNulo = votoNulo + 1, cout << "Voto validado com sucesso" << endl << endl; break;

            default: cout << "\nOpcao invalida! as opcoes validas sao:\n\n0 - Voto em Branco\n1 - Candidato 1\n2 - Candidato 2\n3 - Voto nulo\n\n-1 - Encerrar votacao\n\n";
                break;
            }
        }

        else {
            cout << endl << "------------------------------------" << endl;
            cout << " Votacao encerrada, o placar ficou:" << endl;
            cout << "------------------------------------" << endl << endl;

            cout << "Candidato 1: " << candidato01 << " votos" << endl;
            cout << "Candidato 2: " << candidato02 << " votos" << endl;
            cout << "Votos em Branco: " << votoBranco << " votos" << endl;
            cout << "Votos Anulados: " << votoNulo << " votos" << endl << endl;

            break;
        }

    }

    return 0;
}