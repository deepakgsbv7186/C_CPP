#include<iostream>
using namespace std;

// Class and Object
// Abstraction
// Encapsulation
// Inheritence
// Polymorphism

class Car{
    private:
        int wheels;
        string color;
    protected:
        string name;
        bool isWorking;
    public:
        Car(int w,string n,string c){
            wheels = w;
            name = n;
            color = c;
            isWorking = false;
        }
        void crashCar(){
            cout << name << " damaged" << endl;
            isWorking = true;
        }
        void repairCar(){
            cout << name << " repaired" << endl;
            isWorking = false;
        }
        void moving(){
            if(isWorking)
                cout << name << " is not moving" << endl;
            else
                cout << name << " is driving" << endl;
        }
        void getDetails(){
            cout << "My " << name << " is " << color;
            cout << " having " << wheels << " wheels." << endl;
        }
};
class flyingCar:public Car{
    public:
        flyingCar(int w,string n,string c):Car(w,n,c){}
        void moving(){
                if(isWorking)
                    cout << name << " is not moving" << endl;
                else
                    cout << name << " is flying" << endl;
            }
};
class deepCar:public Car{
    public:
        deepCar(int w,string n,string c):Car(w,n,c){}
        void moving(){
            if(isWorking)
                cout << name << " is not moving" << endl;
            else
                cout << name << " is surfing" << endl;
        }
};
int main(){

    // input car descriptions
    Car rc(4, "ford","black");
    flyingCar fc(2, "skyfury", "blue");
    deepCar dc(0, "bluesale", "red");

    // initial run
    rc.moving();
    fc.moving();
    dc.moving();

    // create pointer of base class "Car" pointing to objects
    Car *car1 = &fc;
    Car *car2 = &dc;

    // using crashcar() method
    car1->crashCar();
    car2->crashCar();

    // after crash 
    rc.moving();
    fc.moving();
    dc.moving();

    // repair cars method
    car1->repairCar();
    car2->repairCar();

    // final run
    rc.moving();
    fc.moving();
    dc.moving();

    // rc.getDetails();
    // fc.getDetails();
    // dc.getDetails();
    // ford.crashCar();
    // ford.moving();
    // ford.repairCar();
    // ford.moving();
    return 0;
}