#include <iostream>

int main() {

    double millasxdia;
    double costoxgalon;
    double millasxgalon;
    double tarifaestacionamiento;
    double peaje;

    std::cout << "Ingrese las millas totales recorridas por día: ";
    std::cin >> millasxdia;

    std::cout << "Ingrese el costo por galón de gasolina: $";
    std::cin >> costoxgalon;

    std::cout << "Ingrese el promedio de millas por galón: ";
    std::cin >> millasxgalon;

    std::cout << "Ingrese las tarifas de estacionamiento por día: $";
    std::cin >> tarifaestacionamiento;

    std::cout << "Ingrese los peajes por día: $";
    std::cin >> peajesPorDia;


    double costodiario = (millasxdia/millasxgalon)*costoxgalon+tarifaestacionamiento+peaje;

    std::cout << "El costo diario de conducción al trabajo es: $" << costodiario << std::endl;

    return 0;
}