int somaNumerosNaturais(int numero){
    if (numero == 0){
        return numero;
    }else if (numero == 1){
        return 1;
    }else{
    return numero + +somaNumerosNaturais(numero -1);
    }

}
