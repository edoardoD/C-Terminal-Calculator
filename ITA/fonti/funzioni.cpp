#include "funzioni.h"
#include "principale.h"
#include <iostream>
#include <string>
#include <string.h>
#include <cmath>
using namespace std;

void esci(){
    string risposta;
    cout << '\n';
    cout << "Vuoi procedere con altre operazioni o uscire dall'app?" << endl;
    cout << "1. Per continuare in questo campo della fisica classica, digita 'continua'" << endl;
    cout << "2. Per continuare con altri calcoli in un campo diverso, digita 'continua con altri'" << endl;
    cout << "3. Per uscire da tutto, digita 'uscita'" << endl;
    cout << "Scegli l'opzione: "; getline(cin, risposta);
    if (risposta == "continua") {
        cout << '\n';
        cout << "Ecco qua, <Fisica Classica>" << endl;
        fisica_classica();
    }
    else if (risposta == "continua con altri") {
        cout << '\n';
        cout << "Ecco qua, <principale>" << endl;
        main();
    }
    else if (risposta == "uscita") {
        cout << "Arrivederci!" << endl;
    }
    else {
        cout << "Seleziona l'opzione corretta!" << endl;
        esci();
    }
}
void esci_2(){
    string risposta;
    cout << '\n';
    cout << "Vuoi procedere con altre operazioni o uscire dall'app?" << endl;
    cout << "1. Per continuare in questo campo della calcolatrice normale, digita 'continua'" << endl;
    cout << "2. Per continuare con altri calcoli in un campo diverso, digita 'continua con altri'" << endl;
    cout << "3. Per uscire da tutto, digita 'uscita'" << endl;
    cout << "Scegli l'opzione: "; getline(cin, risposta);
    if (risposta == "continua") {
        cout << '\n';
        cout << "Ecco qua, <Calcolatrice>" << endl;
        calcolatrice_base();
    }
    else if (risposta == "continua con altri") {
        cout << '\n';
        cout << "Ecco qua, <principale>" << endl;
        main();
    }
    else if (risposta == "uscita") {
        cout << "Arrivederci!" << endl;
    }
    else {
        cout << "Seleziona l'opzione corretta!" << endl;
        esci_2();
    }
}

// fisica
void fisica_classica(){
        double num1, num2, forza, forza1, forza2, forza_totale, accelerazione, massa, gravita, forza_elastica, costante_molla, movimento, forza_peso, forza_attrito,
            forza_attrito_statico, forza_attrito_dinamico, forza_premente, forza_parallela, mu_s, mu_d, altezza, lunghezza, base, delta_v, delta_t, delta_s, velocita_media, forza_archimede, densita, volume, sa, sb, ta, tb;

        cout << "Seleziona l'operazione: ";
        string input;
        getline(cin,input);
        
        if (input=="forza totale"){
            cout << "Inserisci Forza1: ";
            cin >> forza1;
            cout << "Inserisci Forza2: ";
            cin >> forza2;
            forza_totale = forza1 + forza2;
            cout << "La tua forza totale e' -> " << forza_totale << "N" << endl;  
            esci();          
        }
        else if (input == "forza totale usando rdqt") {
    cout << "Inserisci Forza1: ";
    cin >> forza1;
    cout << "Inserisci Forza2: ";
    cin >> forza2;
    forza_totale = sqrt(forza1 + forza2);
    cout << "La tua forza totale con rdqt e' -> " << forza_totale << "N" << endl;
    esci();
}
else if (input == "forza peso") {
    cout << "Inserisci Massa: ";
    cin >> massa;
    cout << "Inserisci Gravita (9.8 N/Kg sulla Terra): ";
    cin >> gravita;
    forza_peso = massa * gravita;
    cout << "La tua forza peso e' -> " << forza_peso << "N" << endl;
    esci();
}
else if (input == "massa usando forza peso") {
    cout << "Inserisci Forza Peso: ";
    cin >> forza_peso;
    cout << "Inserisci Gravita (9.8 N/kg sulla Terra): ";
    cin >> gravita;
    if (gravita != 0) {
        massa = forza_peso / gravita;
        cout << "La tua massa e' -> " << massa << "kg" << endl;
        esci();
    }
    else {
        cout << "Impossibile dividere per 0" << endl;
        esci();
    }
}
else if (input == "gravita") {
    cout << "Inserisci Forza peso: ";
    cin >> forza_peso;
    cout << "Inserisci Massa: ";
    cin >> massa;
    if (massa != 0) {
        gravita = forza_peso / massa;
        cout << "La tua Gravita e' -> " << gravita << "N/kg" << endl;
        esci();
    }
    else {
        cout << "Impossibile dividere per 0" << endl;
        esci();
    }
}
else if (input == "forza elastica") {
    cout << "Inserisci Costante della Molla: ";
    cin >> costante_molla;
    cout << "Inserisci Movimento: ";
    cin >> movimento;
    forza_elastica = costante_molla * movimento;
    cout << "La tua forza elastica e' -> " << forza_elastica << "N" << endl;
    esci();
}
else if (input == "costante elastica") {
    cout << "Inserisci forza elastica: ";
    cin >> forza_elastica;
    cout << "Inserisci movimento: ";
    cin >> movimento;
    if (movimento != 0) {
        costante_molla = forza_elastica / movimento;
        cout << "La tua costante della molla e' -> " << costante_molla << "N/m" << endl;
        esci();
    }
    else {
        cout << "Impossibile dividere per 0" << endl;
        esci();
    }
}
else if (input == "movimento") {
    cout << "Inserisci forza elastica: ";
    cin >> forza_elastica;
    cout << "Inserisci costante della molla: ";
    cin >> costante_molla;
    if (costante_molla != 0) {
        movimento = forza_elastica / costante_molla;
        cout << "Il tuo movimento e' -> " << movimento << "m" << endl;
        esci();
    }
    else {
        cout << "Impossibile dividere per 0" << endl;
        esci();
    }
}
else if (input == "forza") {
    cout << "Inserisci Massa: ";
    cin >> massa;
    cout << "Inserisci accelerazione: ";
    cin >> accelerazione;
    forza = massa * accelerazione;
    cout << "La tua forza e' -> " << forza << "N" << endl;
    esci();
}
else if (input == "massa usando accelerazione") {
    cout << "Inserisci Forza: ";
    cin >> forza;
    cout << "Inserisci Accelerazione: ";
    cin >> accelerazione;
    if (accelerazione != 0) {
        massa = forza / accelerazione;
        cout << "La tua massa e' -> " << massa << "kg" << endl;
        esci();
    }
    else {
        cout << "Impossibile dividere per 0" << endl;
        esci();
    }
}
else if (input == "accelerazione") {
    cout << "Inserisci ?v: ";
    cin >> delta_v;
    cout << "Inserisci ?t: ";
    cin >> delta_t;
    if (delta_t != 0) {
        accelerazione = delta_v / delta_t;
        cout << "La tua accelerazione e' -> " << accelerazione << "m/s2" << endl;
        esci();
    }
    else {
        cout << "Impossibile dividere per 0" << endl;
        esci();
    }
}
else if (input == "forza di attrito statico") {
    cout << "Inserisci Mu (statico): ";
    cin >> mu_s;
    cout << "Inserisci Forza premente: ";
    cin >> forza_premente;
    forza_attrito_statico = mu_s * forza_premente;
    cout << "La tua Forza di Attrito Statico e' -> " << forza_attrito_statico << "N" << endl;
    esci();
}
else if (input == "forza di attrito dinamico") {
    cout << "Inserisci Mu (dinamico): ";
    cin >> mu_d;
    cout << "Inserisci Forza premente: ";
    cin >> forza_premente;
    forza_attrito_dinamico = mu_d * forza_premente;
    cout << "La tua Forza di Attrito Dinamico e' -> " << forza_attrito_dinamico << "N" << endl;
    esci();
}
else if (input == "forza premente") {
    cout << "Inserisci forza peso: ";
    cin >> forza_peso;
    cout << "Inserisci forza parallela: ";
    cin >> forza_parallela;
    forza_premente = sqrt(pow(forza_peso, 2) - pow(forza_parallela, 2));
    cout << "La tua Forza premente e' -> " << forza_premente << "N" << endl;
    esci();
}
else if (input == "forza parallela") {
    cout << "Inserisci forza peso: ";
    cin >> forza_peso;
    cout << "Inserisci altezza ";
    cin >> altezza;
    cout << "Inserisci lunghezza: ";
    cin >> lunghezza;
    if (lunghezza != 0) {
        forza_parallela = forza_peso * altezza / lunghezza;
        cout << "La tua forza parallela e' -> " << forza_parallela << "N" << endl;
        esci();
    }
    else {
        cout << "Impossibile dividere per 0" << endl;
        esci();
    }
}
else if (input == "lunghezza del triangolo") {
    cout << "Inserisci il valore della Base: ";
    cin >> base;
    cout << "Inserisci il valore dell'Altezza: ";
    cin >> altezza;
    lunghezza = pow(base, 2) + pow(altezza, 2);
    cout << "La tua Lunghezza del triangolo e' " << lunghezza << "^2" << endl;
    esci();
}
else if (input == "base") {
    cout << "Inserisci il valore della Lunghezza: ";
    cin >> lunghezza;
    cout << "Inserisci il valore dell'Altezza: ";
    cin >> altezza;
    base = sqrt(pow(lunghezza, 2) - pow(altezza, 2));
    cout << "La tua Base e' " << base << endl;
    esci();
}
else if (input == "lunghezza") {
    cout << "Inserisci il valore dell'Altezza: ";
    cin >> altezza;
    cout << "Inserisci il valore della Base: ";
    cin >> base;
    lunghezza = sqrt(pow(altezza, 2) + pow(base, 2));
    cout << "La tua Lunghezza e' " << lunghezza << endl;
    esci();
}
else if (input == "delta s") {
    cout << "Inserisci S(a): ";
    cin >> sa;
    cout << "Inserisci S(b): ";
    cin >> sb;
    delta_s = sb - sa;
    cout << "Il tuo Δs e' -> " << delta_s << "m" << endl;
    esci();
}
else if (input == "delta t") {
    cout << "Inserisci t(a): ";
    cin >> ta;
    cout << "Inserisci t(b): ";
    cin >> tb;
    delta_t = tb - ta;
    cout << "Il tuo Δt e' -> " << delta_t << "s" << endl;
    esci();
}
else if (input == "velocita media") {
    cout << "Inserisci Δs: ";
    cin >> delta_s;
    cout << "Inserisci Δt: ";
    cin >> delta_t;
    if (delta_t != 0) {
        velocita_media = delta_s / delta_t;
        cout << "La tua velocita media e' -> " << velocita_media << "m/s" << endl;
        esci();
    }
    else {
        cout << "Impossibile dividere per 0" << endl;
        esci();
    }
}
else if (input == "forza di archimede") {
    cout << "Inserisci densita: ";
    cin >> densita;
    cout << "Inserisci volume: ";
    cin >> volume;
    cout << "Inserisci gravita (es. Gravita terrestre 9.8N/kg): ";
    cin >> gravita;
    forza_archimede = densita * volume * gravita;
    cout << "La tua Forza di Archimede e' -> " << forza_archimede << "N" << endl;
    esci();
}
else if (input == "massa usando densita") {
    cout << "Inserisci densita: ";
    cin >> densita;
    cout << "Inserisci volume: ";
    cin >> volume;
    massa = densita * volume;
    cout << "La tua massa e' -> " << massa << "kg" << endl;
    esci();
}
else if (input == "volume") {
    cout << "Inserisci densita: ";
    cin >> densita;
    cout << "Inserisci massa: ";
    cin >> massa;
    volume = densita * massa;
    cout << "Il tuo volume e' -> " << volume << "m^3" << endl;
    esci();
}
else if (input == "densita") {
    cout << "Inserisci massa: ";
    cin >> massa;
    cout << "Inserisci volume: ";
    cin >> volume;
    if (volume != 0) {
        densita = massa / volume;
        cout << "La tua densita e' -> " << densita << "kg/m^3" << endl;
        esci();
    }
    else {
        cout << "Impossibile dividere per 0" << endl;
        esci();
    }
}

        else{
            cout << "Comando errato," << " Riprova!" << endl;
            fisica_classica();
        }
}

void calcolatrice_base(){
    char operazione;
    double num1, num2, risultato;

    cout << "Seleziona un'operazione:\n";
    cout << "1. Addizione\n";
    cout << "2. Sottrazione\n";
    cout << "3. Moltiplicazione\n";
    cout << "4. Divisione\n";
    cout << "Inserisci la tua scelta: ";
    cin >> operazione;

    switch (operazione) {
    case '1':
        cout << "Inserisci il primo numero: ";
        cin >> num1;
        cout << "Inserisci il secondo numero: ";
        cin >> num2;
        risultato = num1 + num2;
        cout << num1 << " + " << num2 << " = "  << risultato << endl;
        esci_2();
        break;
    case '2':
        cout << "Inserisci il primo numero: ";
        cin >> num1;
        cout << "Inserisci il secondo numero: ";
        cin >> num2;
        risultato = num1 - num2;
        cout << num1 << " - " << num2 << " = "  << risultato << endl;
        esci_2();
        break;
    case '3':
        cout << "Inserisci il primo numero: ";
        cin >> num1;
        cout << "Inserisci il secondo numero: ";
        cin >> num2;
        risultato = num1 * num2;
        cout << num1 << " * " << num2 << " = "  << risultato << endl;
        esci_2();
        break;
    case '4':
        cout << "Inserisci il dividendo: ";
        cin >> num1;
        cout << "Inserisci il divisore: ";
        cin >> num2;
        if (num2 != 0) {
            risultato = num1 / num2;
            cout << num1 << " / " << num2 << "=" << risultato << endl;
        }
        else {
            cout << "Errore: Impossibile dividere per zero." << endl;
        }
        esci_2();
        break;
    default:
        cout << "Operazione selezionata non valida. Riprova!" << endl;
        calcolatrice_base();
        break;
    }

}
