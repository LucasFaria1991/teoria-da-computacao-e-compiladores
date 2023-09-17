int potencia (int base, int expoente){
    if (expoente == 0 ){
        return 1;
    }else if(expoente == 1){
    return base;
    }else{
    return base * potencia(base, expoente - 1);
    }
}
