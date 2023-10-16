#include <iostream>
using namespace std;
int main() {
    
    int choice, x,y;
    cout << "أهلاً بك في برنامج الآالة الحاسبة العظيمة ! "<< endl;
    cout << "1- الجمع"
    << endl << "2- الطرح"
    << endl <<"3- الضرب"
    << endl << "4- القسمة"
    << endl;
    
    cin >> choice;
    
    cout << "أدخل الرقم الأول...";
    cin >> x;
    cout << "أدخل الرقم الثاني...";
    cin >> y;
    
    switch(choice)
    {
        case 1:
            cout << x << " + " << y << " = " << x + y;
            break;
        case 2:
            cout << x << " - " << y << " = " << x - y;
            break;
        case 3:
            cout << x << " * " << y << " = " << x * y;
            break;
        case 4:
            cout << x << " / " << y << " = " << x / y;
            break;
        default:
            cout << "الرقم الذي أدخلته غير صحيح!" << endl;
            break;
    }
    cout << endl;
    
    return 0;
}
