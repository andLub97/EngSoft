#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void conceitosFT(){
    printf("###################################################################################################\n\n");
    printf("\n\t ->Fluido eh algo que escoa e que nao resiste a aplicacao de forcas pontuais \n");
    printf("\n\t ->P = F/A :::  Pressao eh igual a forca sobre area, em newton por metro quadrado\n");
    printf("\n\t ->Pressao eh obtida atraves da aplicacao de um forcao perpendicular a uma superficie\n");
    printf("\n\t ->Viscosidade eh uma prorpiedade do material\n");
    printf("\n\t ->A tensao de cisalhamento tem origem na viscosidade\n");
    printf("\n\t ->Quanto mais viscoso o fluido, maior a tensao de cisalhamento\n");
    printf("\n\t ->Tensao normal pode ser tanto de tracao como compressao\n");
    printf("\n\t ->Um fluido continua se deformando continuamente com a aplicacao de uma tensao cisalhante\n");
    printf("\n\t ->liquidos admitem superficie livre, gases preenchem totalmente o recipiente\n");
    printf("\n\t ->Particula fluida: menor volume com a maior quantidade de moleculas possiveis\n");
    printf("\n\t ->Massa especifica = massa/volume [kg/m^3]\n");
    printf("\n\t ->Peso especifico = massa especifica * gravidade [N/m^3]\n");
    printf("\n\t ->Peso especifico tambem pode ser visto como (m*g)/v\n");
    printf("\n\t ->Densidade relativa = massa especifica/1000\n");
    printf("\n\t ->1000 eh a massa especifica da agua\n");
    printf("\n\t ->Principiod da aderencia completa:\n");
    printf("\n\t particulas fluidas em contato com superficies\n");
    printf("\n\t solidas adquirem a mesma velocidade dos pontos\n");
    printf("\n\t da superficie solida com os quais estabelece contato!\n");
    printf("\n\t ->Fluido Newtoniano: respondem a altas e baixas tensoes da mesma forma\n");
    printf("\n\t ->Para Liquidos:::: quanto maior a temperatura, menor a viscosidade\n");
    printf("\n\t ->Para Gases:::: quanto maior a temperatura, maior a viscosidade\n");
    printf("\n\t ->Incompressivel -> volume nao varia com a pressao\n");
    printf("\n\n");
    printf("\n###################################################################################################\n\n");
}
void estaticaFT(){
    printf("###################################################################################################\n\n");

    printf("\n\t ->Lei de Stevin: A pressao num liquido em repouso aumenta");
    printf("\n\t  proporcionalmente com a profundidade");
    printf("\n\t -> Pressao absoluta: referencia eh o vacuo");
    printf("\n\t -> Pressao absoluta = pressao atmosferica + pressao manometrica");
    printf("\n\t -> pressao manometrica = pressao relativa = pressao efetiva");
    printf("\n\t -> a referencia da pressao relativa eh a pressao atm local");
    printf("\n\t -> p atm = 101325 Pa");
    printf("\n\t -> Manometro eh um dispositivo que mede a pressao");
    printf("\n\t -> Piezometro: Nao eh util para gas");
    printf("\n\t                Nao eh util para medir pressoes elevadas");
    printf("\n\t                Nao mede pressao negativa ");
    printf("\n\t -> Tubo em U: Nao eh util para gas");
    printf("\n\t               Nao eh util para medir pressoes elevadas");
    printf("\n\t               Consegue medir pressoes negativas");
    printf("\n\t -> Tubo em U com liquido manometrico: ");
    printf("\n\t                Solucina os problemas dos manometros anteriores");
    printf("\n\t -> Bourdon: Mede pressao de forma indireta, por meio da deformacao de um tubo metalico\n");

    printf("\n###################################################################################################\n\n");
}

int main(){

    int uc;

    printf("##############################\n\n");
    printf("opcoes de unidade curricular: \n");
    printf("\n1: fenomenos de transporte");
    printf("\n2: manutencao industrial");


    printf("\n\n\nDigite o nome da unidade curricular: ");
    scanf("%d",&uc);
    printf("##############################\n\n");

    if(uc==1){
        printf("ok, voce escolheu fenomenos de transporte\n\n");
    }else if(uc==2){
        printf("ok, voce escolheu manutencao industrial\n\n");
    }else{
        exit(0);
    }
// caso o usuario escolha fenomenos
    if(uc==1){
    int escolha;
    printf("\n\n\n\nEscolha o que deseja: ");
    printf("\n\n1: Conceitos Fundamentais");
    printf("\n\n2  Estatica dos Fluidos");
    printf("\n\n##opcao: ");
    scanf("%d",&escolha);


    switch(escolha){

    case 1:
        printf("\n\nConceitos Fundamentais");
        conceitosFT();
        break;

    case 2:
        printf("\n\nEstatica dos Fluidos");
        estaticaFT();
        break;
    default:
        printf("\n\nfim");

    }

    }


return 0;
}




/*
-André Lubawski
-14/08/2022
-Inicio do projeto

-conceitos sobre fenômenos de transporte

Inicialmente tudo será feito aqui, porém,
isso deve ser melhor estruturado no futuro

*/
