#include <iostream>
#include <io.h> 
#include <fcntl.h> 
#include <Windows.h>



using namespace std;

int main()
{





    ///1. Кодові сторінки 
    //Ідентифікатори кодових сторінок https://learn.microsoft.com/ru-ru/windows/win32/intl/code-page-identifiers
    ///Для певного кода є відповідна ASCII таблиця
    ///Наприклад для грецької https://www.ascii-code.com/CP1253
    /// 
  //  SetConsoleOutputCP(1253);////встановлення кодової сторінки Грецька
  //  SetConsoleCP(1253);
  //unsigned char ch =206;
  //  cout << ch << endl;


   /* ch = 'σ';
    cout <<ch << endl;*/

    ////2. Універсальна таблиця Unicode працює однаково на всіх машинах


   /* _setmode(_fileno(stdout), _O_U16TEXT);
    wchar_t wch = L'λ';
    wcout << wch << endl;


    char16_t ch16 = u'η';
    wcout << wchar_t(ch16) << endl;*/


    ////Для того щоб сам код зберігав незвичайні символи
// Tools > Options > Environment > Documents, named Save documents as Unicode when data cannot be saved in codepage


    cout << "Test code1 for Br1" << endl;
    cout << "Test code2 for Br1" << endl;


}


