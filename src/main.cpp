#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>

using namespace std;

int main(){

cout<<"Seja Bem Vindo ao Solucionador de Relação de Segunda Ordem"<<endl;
cout<<"----------------------------------------------------------"<<endl<<endl<<endl;
cout<<"Pressione enter para continuar"<<endl;
cin.ignore();
int A, B;
int elemento1, elemento2;
cout<<"Antes de tudo, informe a letra da fórmula explícita da sequência: ";
char letra;
cin>>letra;
cout<<endl<<"Agora informe o primeiro elemento e o segundo elemento: ";
cin>>elemento1;
cin>>elemento2;
cout<<"Obrigado!"<<endl;
std::chrono::milliseconds timespan(1040);
std::chrono::milliseconds times(1040);
cout<<"Indo para o programa. "<<endl;
std::this_thread::sleep_for(times);
system("clear");
cout<<endl<<endl<<endl<<endl<<"                 Carregando";
for (int i = 0; i < 3; i++)
{
    cout<<".";
    fflush(stdout);
    for (int y = 0; y < 1; y++)
    {
        std::this_thread::sleep_for(times);
    }
    
}

system("clear");
cout<<endl<<"Passo 1: "<<endl;
cout<<"Constante A :";
cin>>A;
cout<<"Constante B :";
cin>>B;
cout<<"A ="<<A<<" e B ="<<B<<endl<<endl<<endl;
cout<<"Passo 2: "<<"Equação Característica: "<<"t² -At -B = 0"<<endl;
A = -A;
B = -B;
if(B<0)
{
    cout<<"Ficará: "<<"t²"<<A<<B<<"= 0"<<endl;
}
else
{
    cout<<"Ficará: "<<"t²"<<A<<'+'<<B<<"= 0"<<endl;
}
cout<<endl<<endl<<"Passo 3: Encontrar as raízes da equação do passo 2."<<endl<<endl<<"Veja:"<<endl;
if ((-4*1*B)>0)
{
    cout<<"t =("<<A*-1<<" ± "<<"√"<<pow(A,2)<<"+"<<-4*1*B<<")/2"<<endl;
}
else
{
    cout<<"t =("<<A*-1<<" ± "<<"√"<<pow(A,2)<<-4*1*B<<")/2"<<endl;
}
int raiz1, raiz2;
raiz1 = A*-1 + sqrt(pow(A,2)+(-4*1*B));
raiz1 = raiz1/2;
raiz2 = A*-1 - sqrt(pow(A,2)+(-4*1*B));
raiz2 = raiz2/2;
cout<<"Raiz 1 : "<<raiz1<<endl;
cout<<"Raiz 2 : "<<raiz2<<endl;
cout<<"Portanto as raízes serão: "<<raiz1<<" e "<<raiz2<<endl;
cout<<endl<<endl<<"Passo 4: Apresentar a solução geral: "<<endl;
if(raiz1!=raiz2)
{
    cout<<"Como tem duas raízes distintas, "<<letra<<"_n = "<<"C."<<raiz1<<"^n"<<" + "<<"D."<<raiz2<<"^n, ∀n ≥ 0, n ∊ Z"<<endl;
    cout<<"C, D ∊ ℝ."<<endl;
}
cout<<endl<<endl<<endl<<"Passo 5: Encontrar C e D."<<endl;
cout<<"Dadas as condições iniciais, temos: "<<endl<<endl;
cout<<letra<<"_0 = C."<<raiz1<<"^0 + D."<<raiz2<<"^0 "<<endl;
cout<<letra<<"_0 = C."<<pow(raiz1,0)<<"+ D."<<pow(raiz2,0)<<" "<<endl;
cout<<elemento1<<" = "<<"C "<<"+ D"<<" "<<endl<<endl;
cout<<letra<<"_1 = C."<<raiz1<<"^1 + D."<<raiz2<<"^1 "<<endl;
cout<<letra<<"_1 = C."<<pow(raiz1,1)<<"+ D."<<pow(raiz2,1)<<" "<<endl;
cout<<elemento2<<" = "<<pow(raiz1,1)<<"C + "<<pow(raiz2,1)<<"D"<<" "<<endl;
cout<<"Agora basta calcular o sistema."<<endl<<"Isto é :"<<endl;
cout<<"De "<<letra<<"_0 temos que C = "<<elemento1<<"-D ."<<endl;
cout<<"De "<<letra<<"_1 e substituindo o valor de C, teremos: ";
cout<<elemento2<<" = "<<pow(raiz1,1)<<"("<<elemento1<<"-D)"<<" + "<<pow(raiz2,1)<<"D"<<" "<<endl;
cout<<elemento2<<" = "<<pow(raiz1,1)*elemento1<<pow(raiz1,1)*-1<<"D"<<" + "<<pow(raiz2,1)<<"D"<<" "<<endl;
cout<<elemento2<<" = "<<pow(raiz1,1)*elemento1<<(pow(raiz1,1)*-1)+pow(raiz2,1)<<"D"<<" "<<endl;
cout<<elemento2<<"-"<<(pow(raiz1,1)*elemento1)<<" = "<<(pow(raiz1,1)*-1)+pow(raiz2,1)<<"D"<<" "<<endl;
cout<<elemento2-(pow(raiz1,1)*elemento1)<<" = "<<(pow(raiz1,1)*-1)+pow(raiz2,1)<<"D"<<" "<<endl;
cout<<elemento2-(pow(raiz1,1)*elemento1)<<"/"<<(pow(raiz1,1)*-1)+pow(raiz2,1)<<" = "<<"D"<<" "<<endl;
if((elemento2-(pow(raiz1,1)*elemento1))<0 && (pow(raiz1,1)*-1)+pow(raiz2,1)<0)
{
    cout<<(elemento2-(pow(raiz1,1)*elemento1))*-1<<"/"<<((pow(raiz1,1)*-1)+pow(raiz2,1))*-1<<" = "<<"D"<<" "<<endl;
}
cout<<"Finalmente substituindo o valor de D em "<<elemento1<<" = "<<"C "<<"+ D"<<" "<<endl<<endl;


    return 0;
}