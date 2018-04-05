#include <iostream>
//Declaración de variables y operadores lógicos

class fraccion {

protected:
    int numerador,denominador;

public:

    fraccion(int num,int den);

    friend fraccion operator + (const fraccion &f1, const fraccion &f2);
    friend fraccion operator - (const fraccion &f1, const fraccion &f2);
    friend fraccion operator * (const fraccion &f1, const fraccion &f2);
    friend fraccion operator / (const fraccion &f1, const fraccion &f2);

    friend bool operator< (const fraccion &f1, const fraccion &f2);
    friend bool operator> (const fraccion &f1, const fraccion &f2);
    friend bool operator<=(const fraccion &f1, const fraccion &f2);
    friend bool operator>=(const fraccion &f1, const fraccion &f2);
    friend bool operator==(const fraccion &f1, const fraccion &f2);
    friend bool operator!=(const fraccion &f1, const fraccion &f2);

    std::string toString();
};



#endif //SOBRECARGA_FRACCIONES_T03ALHECA_FRACTIONS_H
