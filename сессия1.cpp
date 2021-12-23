// сессия1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iostream>
using namespace std;
int main()
{
    int i=0;
    char hexDecNum[10];
    cout<<"Enter the Hexadecimal Number: ";
    cin>>hexDecNum;
    cout<<"\ Binary Value = ";
    while(hexDecNum[i])
    {
        switch(hexDecNum[i])
        {
            case '0':
                cout<<"0000";
                break;
            case '1':
                cout<<"0001";
                break;
            case '2':
                cout<<"0010";
                break;
            case '3':
                cout<<"0011";
                break;
            case '4':
                cout<<"0100";
                break;
            case '5':
                cout<<"0101";
                break;
            case '6':
                cout<<"0110";
                break;
            case '7':
                cout<<"0111";
                break;
            case '8':
                cout<<"1000";
                break;
            case '9':
                cout<<"1001";
                break;
            case 'A':
            case 'a':
                cout<<"1010";
                break;
            case 'B':
            case 'b':
                cout<<"1011";
                break;
            case 'C':
            case 'c':
                cout<<"1100";
                break;
            case 'D':
            case 'd':
                cout<<"1101";
                break;
            case 'E':
            case 'e':
                cout<<"1110";
                break;
            case 'F':
            case 'f':
                cout<<"1111";
                break;
            default:
                cout<<"--Invalid Hex Digit ("<<hexDecNum[i]<<")--";
        }
        i++;
    }
    cout<<endl;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
