using namespace std;

class faktorial{

public:
int faktorial_number(int x){
if(x < 0) 
        return 0; 
    if (x == 0)
        return 1; 
    else
    return x * faktorial_number(x - 1); 
}
};

int main() {
int x;
faktorial number;
cout << "Введите число для вычисления факториала: ";
cin >> x;
cout << "Факториал для числа " << x << " = " << number.faktorial_number(x);

}