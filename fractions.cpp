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
