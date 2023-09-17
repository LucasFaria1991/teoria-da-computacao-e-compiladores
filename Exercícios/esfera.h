void esfera(){

float raio, PI;
PI = 3.14159;

printf("Digite o valor do raio: ");
scanf("%f", &raio);

printf("O cumprimento da esfera é: %.2f", 2 * PI * raio);

printf("\nA área do circulo é: %.2f", PI * pow(raio,2));

printf("\nA área do esfera é: %.2f", 4 * PI * pow(raio,2));

printf("\nO volume da esfera é: %.2f", 4.0 / 3.0 * PI * pow(raio,3));



}
