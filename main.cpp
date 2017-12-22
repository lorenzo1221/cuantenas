#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <windows.h>
using namespace std;
class generador{
  private:
      int x;
      int par1, par2, par3, par4, par5, par6, par7, par8;
      int impar1, impar2, impar3, impar4, impar5, impar6, impar7,  impar8;
      int multipar1, multipar2, multipar3, multipar4, multipar5, multipar6, multipar7, multipar8;
      int uni, dec, resultado;
      int valida;
      int i, cantidad;
      char bin[6];
      int lon;
  public:
      void bin_();
      void generar();
};

void generador::bin_(){
    do{
        cout<<"Ingrese BIN [6 Digitos]"<<endl;
        cin>>bin;
        lon= strlen(bin);
        if(lon != 6){
            cout<<"BIN invalido"<<endl;
        }
    }while(lon != 6);
   generar();
}

void generador::generar(){
    srand(time(NULL));
    cout<<"running.."<<endl;
    cout<<"Cuantas ccs quieres generar? "<<endl;
    cin>>cantidad;
    i=0;

    int x0=bin[0]-'0';
    int x1=bin[1]-'0';
    int x2=bin[2]-'0';
    int x3=bin[3]-'0';
    int x4=bin[4]-'0';
    int x5=bin[5]-'0';
    do{
        int x6=0+rand()%(10-0);
        int x7=0+rand()%(10-0);
        int x8=0+rand()%(10-0);
        int x9=0+rand()%(10-0);
        int x10=0+rand()%(10-0);
        int x11=0+rand()%(10-0);
        int x12=0+rand()%(10-0);
        int x13=0+rand()%(10-0);
        int x14=0+rand()%(10-0);
        int x15=0+rand()%(10-0);
        par1=x1;
        par2=x3;
        par3=x5;
        par4=x7;
        par5=x9;
        par6=x11;
        par7=x13;
        par8=x15;

        impar1=x0;
        impar2=x2;
        impar3=x4;
        impar4=x6;
        impar5=x8;
        impar6=x10;
        impar7=x12;
        impar8=x14;

        multipar1=impar1*2;
        multipar2=impar2*2;
        multipar3=impar3*2;
        multipar4=impar4*2;
        multipar5=impar5*2;
        multipar6=impar6*2;
        multipar7=impar7*2;
        multipar8=impar8*2;

        do{
            if(multipar1 > 9){
                uni= multipar1 - multipar1 / 10*10;
                dec= (multipar1 - multipar1 / 100*100)/10;
                multipar1= uni+dec;
            }
        }while(multipar1 > 9);
        do{
            if(multipar2 > 9){
                uni= multipar2 - multipar2 / 10*10;
                dec= (multipar2 - multipar2 / 100*100)/10;
                multipar2= uni+dec;
            }
        }while(multipar2 > 9);
        do{
            if(multipar3 > 9){
                uni= multipar3 - multipar3 / 10*10;
                dec= (multipar3 - multipar3 / 100*100)/10;
                multipar3= uni+dec;
            }
        }while(multipar3 > 9);
        do{
            if(multipar4 > 9){
                uni= multipar4 - multipar4 / 10*10;
                dec= (multipar4 - multipar4 / 100*100)/10;
                multipar4= uni+dec;
            }
        }while(multipar4 > 9);
        do{
            if(multipar5 > 9){
                uni= multipar5 - multipar5 / 10*10;
                dec= (multipar5 - multipar5 / 100*100)/10;
                multipar5= uni+dec;
            }
        }while(multipar5 > 9);
        do{
            if(multipar6 > 9){
                uni= multipar6 - multipar6 / 10*10;
                dec= (multipar6 - multipar6 / 100*100)/10;
                multipar6= uni+dec;
            }
        }while(multipar6 > 9);
        do{
            if(multipar7 > 9){
                uni= multipar7 - multipar7 / 10*10;
                dec= (multipar7 - multipar7/ 100*100)/10;
                multipar7= uni+dec;
            }
        }while(multipar7 > 9);
        do{
            if(multipar8 > 9){
                uni= multipar8 - multipar8 / 10*10;
                dec= (multipar8 - multipar8 / 100*100)/10;
                multipar8= uni+dec;
            }
        }while(multipar8 > 9);

        resultado= par1+par2+par3+par4+par5+par6+par7+par8+multipar1+multipar2+multipar3+multipar4+multipar5+multipar6+multipar7+multipar8;

        if(resultado%10==0){
            cout<<"[+] ";
            cout<<x0;
            cout<<x1;
            cout<<x2;
            cout<<x3;
            cout<<x4;
            cout<<x5;
            cout<<x6;
            cout<<x7;
            cout<<x8;
            cout<<x9;
            cout<<x10;
            cout<<x11;
            cout<<x12;
            cout<<x13;
            cout<<x14;
            cout<<x15<<endl;
            i++;
        }else{
            //meh
        }
    }while(i<cantidad);
     if(x0==3){
        cout<<"[+] tipo: American Express"<<endl;
     }else{
        if(x0==4){
           cout<<"[+] tipo: American Visa"<<endl;
        }else{
            if(x0==5){
                cout<<"[+] tipo: Mastercard"<<endl;
            }else{
                if(x0==6){
                    cout<<"[+] tipo: Discover"<<endl;
                }else{
                    cout<<"[+] tipo: WTF!"<<endl;
                }
            }
        }
     }
}
int main()
{
    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
    system("title CC Generator by St0rMd[4]rk [+] cyber-oxyde.blogspot.mx");
    char xd;
    do{
        system("CLS");
        cout<<"__________________________"<<endl;
        cout<<"By St0rMd4rk @cyber-oxyde"<<endl;
        cout<<"--------------------------"<<endl<<endl;
        generador obj;
        obj.bin_();
        cout<<"Generar mas? s/n"<<endl;
        cin>>xd;
        xd=tolower(xd);
    }while(xd == 's');
    return 0;
}
