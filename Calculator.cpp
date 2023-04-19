#include <iostream>

using namespace std;
int num1,num2,result,choice;


int soma(){
    result=num1+num2;
    return result;
}

int Sub(){
    result=num1-num2;
    return result;
}

int Mult(){
    result=num1*num2;
    return result;
}

int Div(){
    result=num1/num2;
    return result;
}

int main(){

cout <<"escolha\n";
cin >> choice;
    switch(choice){
        case 1:
            cout << "digite um numero\n";
            cin >> num1;
            cout << "digite outro numero\n";
            cin >> num2;   
            soma();
            cout <<result;
        break;
        case 2:
            cout << "digite um numero\n";
            cin >> num1;
            cout << "digite outro numero\n";
            cin >> num2;
            Sub();
            cout <<result;    
        break;
        case 3:
            cout << "digite um numero\n";
            cin >> num1;
            cout << "digite outro numero\n";
            cin >> num2;
            Mult();
            cout << result;
        break;
        case 4:
            cout << "digite um numero\n";
            cin >> num1;
            cout << "digite outro numero\n";
            cin >> num2;
            Div();
            cout << result;        
        break;

    }


}
