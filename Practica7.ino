void setup(){
    Serial.begin(115200);
    delay(10);
}

void loop(){
    char s[100];
    int i = 0;

    while(Serial.available()){
        s[i++] = Serial.read();
        delay(1);
    }

    s[i] = 0;
    if (i>0){
        Serial.print("El array es ");
        Serial.println(s);
        char* numeros = strtok(s, " ,");
        int resultado = atoi(numeros);
        while(numeros!=NULL){
            numeros = strtok(NULL, " ,");
            resultado = resultado - atoi(numeros);
        }
        Serial.print("El resultado es: ");
        Serial.println(resultado);
    }
}
