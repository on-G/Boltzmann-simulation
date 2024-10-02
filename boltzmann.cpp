//
// Created by riccardo on 02/10/24.
//

#include "boltzmann.hpp"
#include <iostream>
#include <cmath>

boltzmann::boltzmann() {
    int N, T, U;
    std::cout << "Inserisci il numero di sistemi da considerare: ";
    std::cin >> N;
    std::cout << "Inserisci il numero di cicli temporali: ";
    std::cin >> T;
    std::cout << "Inserisci l'energia media dell'ensemble: ";
    std::cin >> U;

    N_ = (int)std::round(N);
    T_ = (int)std::round(T);
    U_ = (int)std::round(U);

    for(int i = 0; i < N_; ++i){
        configuration_.push_back(U_);
    }
}