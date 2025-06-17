#include<iostream>
using namespace std;
class parking{
    public:
    char choice;
    int car=0,bike=0,au=0,rikshaw=0;
    char a='T';
    parking(){
        while(a=='T'){
            cout<<"enter A for parking auto"<<endl;
            cout<<"enter B for parking bike "<<endl;
            cout<<"enter C for parking car  " << endl;
            cout<<"enter R for parking rikshaw"<<endl;
            cout<<"enter  E for exit"<<endl;
            cin>>choice;
            switch(choice){
                case 'A' :au=au+1;
                              system("CLS");
                             break;
                case 'B' :bike=bike+1;
                             system("CLS");
                             break;             
                case 'C' :car=car+1;
                            system("CLS");
                             break;
                case 'R' :rikshaw=rikshaw+1;
                             system("CLS");
                             break;
                case 'E':a='F';
                            system("CLS");
                            break;
                                       

                           
            }
                      
        }
    }
    void display(){
        cout<<au<<" Autos has been parked"<<endl;
        cout<<car<<" Cars has been parked"<<endl;
        cout<<bike<<" Bikes has been parked"<<endl;
        cout<<rikshaw<<" Rikshaws has been parked"<<endl;



    }

};

int main(){
    parking p1;
    p1.display();
}