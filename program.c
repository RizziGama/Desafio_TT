#include <stdio.h>

int main() {

  typedef struct {

      int estado;

      int vel_md;
      int vel_md;

      float PID_input;
      float PID_output;

      int marc_lat_dir;
      int marc_lat_esq;

      int enc_md;
      int enc_me;

      int sens_lat[2];
      int sens_front[8];



  }followline;
  
  LerSensores(followline.sens_front);
  MediaSensores(followline.sens_front);

  

  calc_PID_motores(&followline.PID_input, &followline.PID_output);

  return 0;
}


void LerSensores(int vetor[]){

  int i;
  for(i = 0; i < 8; i++){
    
    vetor[i] = analogRead(i);
  }
}

void MediaSensores(int v[]){
  //função generica para calculo de media ponderada
  float mediaPonderada
  
  followline.PID_input = mediaPonderada;

  }



void calc_PID_motores(float *PID_input, float *PID_output){

  float setPoint = 50

  if((*PID_input) == 50){ //PEGANDO O VALOR DO PONTEIRO PID_OUTPUT 
    erro = 0;
  }else{
    erro = setPoint - (*PID_input);
  }

  int kp = 0; // por tentativa e erro
  int ki = 0; // por tentativa e erro
  int kd = 0; // por tentativa e erro


  float P = erro;
  float I = I + erroAnterior;
  float D = erro - erroAnterior;

  (*PID_output) = (kp * P) + (ki * I) + (kd * D);
  
}
