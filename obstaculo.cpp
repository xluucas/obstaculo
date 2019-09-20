/*
  obstaculo.cpp - Library for car IFNMG
  Created by Top Team 2019
  feras.com
*/

#include "obstaculo.h"

const int janela =30;
int medida[janela];
int pos;

int getMediaMovel(int dist)
{
int total;
total=0;

medida[pos]=dist;

pos++;

if(pos>janela)
pos=0;


for (int i=0;i<janela;i++)
{
  total+=medida[i];
}

return total/janela;


}



bool vigia(int dist)
{
 /* Manter velocidade indicada pelo usuário se o campo estiver livre, e 
  não seja detectado nenhum obstáculo a uma distância menor que 3 metros, 
  mantendo o led verde aceso;*/
 if(dist > 300)
 acendeLedVerde();

 /*Se detectado algum obstáculo no intervalo de 1,5 a  3 metros de distância, reduzir velocidade em 50% iniciual e acender o led amarelo;*/
 // ter uma variavel global para travar a velocidade incial
 else if(dist==300)

 

 
 
}
