 fraccion mult = F1 * F2;
    fraccion div = F1 / F2;
    bool menor;
    bool mayor;
    bool menig;
    bool mayig;
    bool igual;
    bool nigual;

    std::cout << "TAREA 3// OPERADORES LÓGICOS\n";
    std::cout << "ANA LUZ HERNÁNDEZ CASTORENA\n";

    std::cout << "Suma de Fracciones\n";
    std::cout << F1.toString() + F2.toString() + "\n";

    std::cout << "Resta de Fracciones\n";
    std::cout << resta.toString() + "\n";

    std::cout << "Multiplicacion de Fracciones\n";
    std::cout << mult.toString() + "\n";

    std::cout << "Division de Fracciones\n";
    std::cout << div.toString() + "\n";

    std::cout << "Operador Lógico: F1 es menor Que F2?\n";
    F1 < F2 ? menor = true : menor = false;
    if (F1 < F2) {
        std::cout << "Si\n";
    } else {
        std::cout << "No\n";
    }

    std::cout << "Operador Lógico: F1 es mayor que F2\n";
    F1 > F2 ? mayor = true : mayor = false;
    if (F1 < F2) {
        std::cout << "Si\n";
    } else {
        std::cout << "No\n";
    }

    std::cout << "Operador Lógico: F1 es menor o igual a F2?\n";
    F1 <= F2 ? menig = true : menig = false;
    if (F1 <= F2) {
        std::cout << "Si\n";

    } else {
        std::cout << "No\n";
    }

    std::cout << "Operador Lógico: F1 es mayor o igual a F2?\n";
    F1 >= F2 ? mayig = true : mayig = false;
    if (F1 >= F2) {
        std::cout << "Si\n";
    } else {
        std::cout << "No\n";
    }

    std::cout << "Operador Logico: F1 es igual a F2?\n";
    F1 == F2 ? igual = true : igual = false;
    if (F1 == F2) {
        std::cout << "Si\n";
    } else {
        std::cout << "No\n";
    }

    std::cout << "Operador Logico: F1 no es igual a F2?\n";
    F1 != F2 ? nigual = true : nigual = false;
    if (F1 != F2) {
        std::cout << "Si\n";
    } else {
        std::cout << "No\n";
    }
    return 0;
}