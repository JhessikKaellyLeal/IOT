//variaveis
int led =3;
int sensorluminosidade= A0;
// variavel para capturar a luminosidade
int luz =0; 

void setup()
{
  // led é de saida
  pinMode(led,OUTPUT);
  // sensor é de entrada
  pinMode(sensorluminosidade,INPUT);
}

void loop()
{
  // capturar o que o sensor leu no ambiente
  // analogRead é usado para leitura analogica
  
  luz = analogRead(sensorluminosidade);
  /* as portas analogicas capturam dados que variam
   de 0 até 1023 */
  
  // SE LUZ TIVER POUCA LUZ
  if(luz<500){
    //LED RECEBE INTENSIDADE MAXIMA
    analogWrite(led,1023); 
  }
  // SE LUZ ESTIVER MÉDIA
  if(luz>500 & luz<900){
    //LED RECEBE INTENSIDADE MÉDIA
    analogWrite(led,400);
  }else{ //SE NÃO TIVER LUZ
    //LED NÃO É LIGADO
    analogWrite(led,0);
  }
  
  
}