#include "hospital_worker.hpp"

#include <iomanip>
#include <iostream>

int main() {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Lab 4, variant 4\n\n";

    const Nurse nurse("Anna Petrova", 1994, "Saint Petersburg", "Medical college", 380.0, 168);
    const Surgeon surgeon("Ivan Sokolov", 1982, "Saint Petersburg", "Medical university", 2500.0, 34);

    std::cout << nurse.getReport() << '\n';
    std::cout << surgeon.getReport() << '\n';

    return 0;
}

