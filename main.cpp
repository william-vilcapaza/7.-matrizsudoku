#include <iostream>

using namespace std;

int main()
{

    int sudoku[9][9];
    int i,j,k,valor;

    for(i=0;i<9;i++){
        for (j=0;j<9;j++){

            do{
                printf ("Ingrese el numero en fila %d columna %d\n", (i+1), (j+1));
                scanf("%d",&valor);
                if (valor >=1 && valor <=9)
                    sudoku[i][j]=valor;
                else printf("Debe ingresar un valor entre 1 y 9\n");

            }while(valor <1 || valor >9);
        }
    }


    int tablerocorrecto = 1;
    //filas
    for(i=0;i<9;i++){
        int numeros[10] = {1,1,1,1,1,1,1,1,1,1};
        for(j=0;j<9;j++){
            numeros[sudoku[i][j]] = 0;
        }

        int correcto =1;
        for(k=1;k<10;k++){
            if(numeros[k] == 1){
                correcto=0;
                tablerocorrecto=0;
            }
        }

        if (correcto ==0)
            printf("La columna %d no cumple con lo solicitado\n",i);
    }


    //columnas
    for(j=0;j<9;j++){
        int numeros[10] = {1,1,1,1,1,1,1,1,1,1};
        for(i=0;i<9;i++){
            numeros[sudoku[i][j]] = 0;
        }


    int correcto =1;
        for(k=1;k<10;k++){
            if(numeros[k] == 1){
                correcto=0;
                tablerocorrecto=0;
            }
        }

        if (correcto ==0)
            printf("La fila %d no cumple con lo solicitado\n",j);
    }
    //verificacion de cuadro 1
    int numeros[10];
    int correcto =1;

    for(i=0;i<10;i++){
        numeros[i]=1;
    }

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){

            for(k=0;k<9;k++){
            numeros[sudoku[i][j]] = 0;
        }
        }
    }

    for(k=1;k<10;k++){
            if(numeros[k] == 1){
                correcto=0;
                tablerocorrecto=0;
            }
        }

    if (correcto ==0)
        printf("La sub matriz 1 no cumple con lo solicitado\n",j);


//verificacion de cuadro 2


    for(i=0;i<10;i++){
        numeros[i]=1;
    }

    for(i=0;i<=2;i++){
        for(j=3;j<=5;j++){

            for(k=0;k<9;k++){
            numeros[sudoku[i][j]] = 0;
        }
        }
    }

    for(k=1;k<10;k++){
            if(numeros[k] == 1){
                correcto=0;
                tablerocorrecto=0;
            }
        }

    if (correcto ==0)
        printf("La sub matriz 2 no cumple con lo solicitado\n",j);

//verificacion de cuadro 3


    for(i=0;i<10;i++){
        numeros[i]=1;
    }

    for(i=0;i<=2;i++){
        for(j=6;j<=8;j++){

            for(k=0;k<9;k++){
            numeros[sudoku[i][j]] = 0;
        }
        }
    }

    for(k=1;k<10;k++){
            if(numeros[k] == 1){
                correcto=0;
                tablerocorrecto=0;
            }
        }

    if (correcto ==0)
        printf("La sub matriz 3 no cumple con lo solicitado\n",j);


//verificacion de cuadro 4


    for(i=0;i<10;i++){
        numeros[i]=1;
    }

    for(i=3;i<=5;i++){
        for(j=0;j<=2;j++){

            for(k=0;k<9;k++){
            numeros[sudoku[i][j]] = 0;
        }
        }
    }

    for(k=1;k<10;k++){
            if(numeros[k] == 1){
                correcto=0;
                tablerocorrecto=0;
            }
        }

    if (correcto ==0)
        printf("La sub matriz 4 no cumple con lo solicitado\n",j);


//verificacion de cuadro 5


    for(i=0;i<10;i++){
        numeros[i]=1;
    }

    for(i=3;i<=5;i++){
        for(j=3;j<=5;j++){

            for(k=0;k<9;k++){
            numeros[sudoku[i][j]] = 0;
        }
        }
    }

    for(k=1;k<10;k++){
            if(numeros[k] == 1){
                correcto=0;
                tablerocorrecto=0;
            }
        }

    if (correcto ==0)
        printf("La sub matriz 5 no cumple con lo solicitado\n",j);

//verificacion de cuadro 6


    for(i=0;i<10;i++){
        numeros[i]=1;
    }

    for(i=3;i<=5;i++){
        for(j=6;j<=8;j++){

            for(k=0;k<9;k++){
            numeros[sudoku[i][j]] = 0;
        }
        }
    }

    for(k=1;k<10;k++){
            if(numeros[k] == 1){
                correcto=0;
                tablerocorrecto=0;
            }
        }

    if (correcto ==0)
        printf("La sub matriz 6 no cumple con lo solicitado\n",j);


//verificacion de cuadro 7


    for(i=0;i<10;i++){
        numeros[i]=1;
    }

    for(i=6;i<=8;i++){
        for(j=0;j<=2;j++){

            for(k=0;k<9;k++){
            numeros[sudoku[i][j]] = 0;
        }
        }
    }

    for(k=1;k<10;k++){
            if(numeros[k] == 1){
                correcto=0;
                tablerocorrecto=0;
            }
        }

    if (correcto ==0)
        printf("La sub matriz 7 no cumple con lo solicitado\n",j);


//verificacion de cuadro 8


    for(i=0;i<10;i++){
        numeros[i]=1;
    }

    for(i=6;i<=8;i++){
        for(j=3;j<=5;j++){

            for(k=0;k<9;k++){
            numeros[sudoku[i][j]] = 0;
        }
        }
    }

    for(k=1;k<10;k++){
            if(numeros[k] == 1){
                correcto=0;
                tablerocorrecto=0;
            }
        }

    if (correcto ==0)
        printf("La sub matriz 8 no cumple con lo solicitado\n",j);

//verificacion de cuadro 9


    for(i=0;i<10;i++){
        numeros[i]=1;
    }

    for(i=6;i<=8;i++){
        for(j=6;j<=8;j++){

            for(k=0;k<9;k++){
            numeros[sudoku[i][j]] = 0;
        }
        }
    }

    for(k=1;k<10;k++){
            if(numeros[k] == 1){
                correcto=0;
                tablerocorrecto=0;
            }
        }

    if (correcto ==0)
        printf("La sub matriz 9 no cumple con lo solicitado\n",j);



    //se verifica que este todo bien
    if (tablerocorrecto==1){
        printf("\nEl tablero es correcto");
    }
    else{
        printf("\nEl tablero esta mal");
    }

    return 0;
}
