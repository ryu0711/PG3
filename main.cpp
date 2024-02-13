#include <iostream>

// �����N���X
class Animal {
public:
 
    virtual void MakeSound() const {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

// ���N���X
class Dog : public Animal {
public:
    void MakeSound() const override {
        std::cout << "One" << std::endl;
    }
};

// �L�N���X
class Cat : public Animal {
public:
 
    void MakeSound() const override {
        std::cout << "Nya!" << std::endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

  
    animal1->MakeSound(); 
    animal2->MakeSound(); 

    delete animal1;
    delete animal2;

    return 0;
}