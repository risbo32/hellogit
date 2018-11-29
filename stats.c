
float averageInt (int * tableau, int length){

    int i=0;
    float avrge =0;
    for (i=0; i<length ; i++){
        avrge+= tableau[i];

    }

    avrge= avrge/length;

    return avrge;
}

float frequenceInt(int  *tableau , int length, int indice){

    int i=0;
    float frequence;
    float somme=0;
    for (i=0; i< length; i++)
    somme+= tableau[i];

    frequence= tableau[indice]/somme;

    return frequence; 
}
