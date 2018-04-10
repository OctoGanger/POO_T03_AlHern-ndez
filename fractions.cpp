//
// Created by AnaLuz on 31/03/2018.
//

#include "fractions.h"

fraccion::fraccion(int num, int den){
    this->  numerador=num;
    this-> denominador=den;
}

fraccion operator+(const fraccion &num1, const fraccion &num2) {
    //nuDenominador= operacion para sacar el comun denominador
    //nuNumerador1 y 2 = operacion de cruce para simplicar
    //rDenonimador= resultado definitivo para el denominador
    //rNumerador= resultado definitivo del numerador
    int nuDenominador;
    int rDenominador;
    int nuNumerador1;
    int nuNumerador2;
    int rNumerador;

    nuDenominador = (num1.denominador * num2.denominador);
    nuNumerador1 = (num1.numerador * num2.denominador);
    nuNumerador2 = (num2.numerador * num2.denominador);

    rNumerador = nuNumerador1 + nuNumerador2;
    rDenominador = nuDenominador;

    fraccion resultado = *new fraccion(rNumerador, rDenominador);

}

fraccion operator-(const fraccion &num1, const fraccion &num2){
    //nuDenominador= operacion para sacar el comun denominador
    //nuNumerador1 y 2 = operacion de cruce para simplicar
    //rDenonimador= resultado definitivo para el denominador
    //rNumerador= resultado definitivo del numerador
    int nuDenominador;
    int rDenominador;
    int nuNumerador1;
    int nuNumerador2;
    int rNuemerador;

nuDenominador=(num1.denominador*num2.denominador);
nuNumerador1=(num1.numerador*num2.denominador);
nuNumerador2=(num2.numerador*num1.denominador);

rNuemerador=nuNumerador1-nuNumerador2;
rDenominador=nuDenominador;

fraccion resultado= *new fraccion(rNuemerador, rDenominador);

}

fraccion operator*(const fraccion &num1, const fraccion &num2){
    int rNumerador;
    int rDenominador;

    rNumerador=(num1.numerador*num2.numerador);
    rDenominador=(num1.denominador*num2.denominador);

    fraccion resultado= *new fraccion(rNumerador,rDenominador);
}

fraccion operator/(const fraccion &num1, const fraccion &num2){
    int rNumerador;
    int rDenominador;

    rNumerador=(num1.numerador*num2.denominador);
    rDenominador=(num1.denominador*num2.numerador);

    fraccion resultado= *new fraccion(rNumerador, rDenominador);
}

bool operator<(const fraccion &num1, const fraccion &num2){
    float FrNum1;
    float FrNum2;

    FrNum1=float (num1.numerador/num1.denominador);
    FrNum2=float(num2.numerador/num2.denominador);

    return FrNum1<FrNum2;


}

bool operator>(const fraccion &num1, const fraccion &num2){
    float FrNum1;
    float FrNum2;

    FrNum1=float(num1.numerador/num1.denominador);
    FrNum2=float(num2.numerador/num2.denominador);

    return FrNum1<FrNum2;
}
bool operator<=(const fraccion &num1, const fraccion &num2){
    float FrNum1;
    float FrNum2;

    FrNum1=float(num1.numerador/num1.denominador);
    FrNum2=float(num2.numerador/num2.denominador);

    return FrNum1<=FrNum2;
}

bool operator >=(const fraccion &num1, const fraccion &num2){
    float FrNum1;
    float FrNum2;

    FrNum1=float(num1.numerador/num1.denominador);
    FrNum2=float(num2.numerador/num2.denominador);

    return FrNum1>=FrNum2;

}
bool operator ==(const fraccion &num1, const fraccion &num2){
    float FrNum1;
    float FrNum2;

    FrNum1=float(num1.numerador/num1.denominador);
    FrNum2=float(num2.numerador/num2.denominador);

    return FrNum1==FrNum2;
}

bool operator !=(const fraccion &num1, const fraccion&num2){
    float FrNum1;
    float FrNum2;

    FrNum1=float(num1.numerador/num1.denominador);
    FrNum2=float(num2.numerador/num2.denominador);

    return FrNum1!=FrNum2;

}
std:: string fraccion::toString(){
    std:: string Numerador;
    std:: string Denominador;

    Numerador=std::to_string(numerador);
    Denominador=std::to_string(denominador);

    return "fraccion"Numerador"/"Denominador;

}
