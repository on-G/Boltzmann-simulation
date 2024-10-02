//
// Created by riccardo on 02/10/24.
//

#include "boltzmann.hpp"
#include <iostream>
#include <cmath>
#include <random>

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

int boltzmann::random() {
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution dist(0, N_-1);
    return dist(eng);
}