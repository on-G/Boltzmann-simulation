//
// Created by riccardo on 02/10/24.
//

#ifndef BOLTZMANN_SIMULATION_BOLTZMANN_HPP
#define BOLTZMANN_SIMULATION_BOLTZMANN_HPP

#include <vector>

class boltzmann{
    std::vector<int> configuration_{};          //system's configuration
    int U_{};           // energy
    int N_{};           //number of systems
    int T_{};           //time

public:
    boltzmann();
};

#endif //BOLTZMANN_SIMULATION_BOLTZMANN_HPP
