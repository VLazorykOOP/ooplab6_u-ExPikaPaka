#include <iostream>
#include <string>

class Entity {
protected:
    std::string name;
    int age;
public:
    Entity(const std::string& name, int age) : name(name), age(age) {}
    virtual ~Entity() {}
    virtual void PrintInfo() {
        std::cout << "Name: " << name << ", Age: " << age << "\n";
    }
    friend std::ostream& operator<<(std::ostream& os, const Entity& entity) {
        os << "Name: " << entity.name << ", Age: " << entity.age;
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Entity& entity) {
        std::cout << "Enter name: ";
        std::getline(is, entity.name);
        std::cout << "Enter age: ";
        is >> entity.age;
        return is;
    }
};

class Student : virtual public Entity {
protected:
    std::string subject;
public:
    Student(const std::string& name, int age, const std::string& subject)
        : Entity(name, age), subject(subject) {}
    void PrintInfo() override {
        std::cout << "Student, ";
        Entity::PrintInfo();
        std::cout << "Subject: " << subject << "\n";
    }
};

class FamilyHead : virtual public Entity {
protected:
    int numChildren;
public:
    FamilyHead(const std::string& name, int age, int numChildren)
        : Entity(name, age), numChildren(numChildren) {}
    void PrintInfo() override {
        std::cout << "Family Head, ";
        Entity::PrintInfo();
        std::cout << "Number of Children: " << numChildren << "\n";
    }
};

class StudentFamilyHead : public Student, public FamilyHead {
public:
    StudentFamilyHead(const std::string& name, int age, const std::string& major, int numChildren)
        : Entity(name, age), Student(name, age, major), FamilyHead(name, age, numChildren) {}
    void PrintInfo() override {
        std::cout << "Student Family Head, ";
        Student::PrintInfo();
        std::cout << "Number of Children: " << FamilyHead::numChildren << "\n";
    }
};