#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
class Compartment
{
Public:
    virtual string notice() = 0;
    virtual ~Compartment() {}
};
class FirstClass : public Compartment
{
public:
    string notice() override
    {
        return "Notice: This is First Class Compartment.";
    }
};
class Ladies : public Compartment
{
public:
    string notice() override
    {
        return "Notice: Reserved for Ladies.";
    }
};
class General : public Compartment
{
public:
    string notice() override
    {
        return "Notice: General Compartment.";
    }
};
class Luggage : public Compartment
{
public:
    string notice() override
    {
        return "Notice: Luggage Compartment.";
    }
};
class TestCompartment
{
public:
    static void mainFunction()
    {
        Compartment* compartments[10];

        srand(time(0));
        for (int i = 0; i < 10; i++)
        {
            int randomNumber = rand() % 4 + 1; // Range 1 to 4

            if (randomNumber == 1)
                compartments[i] = new FirstClass();
            else if (randomNumber == 2)
                compartments[i] = new Ladies();
            else if (randomNumber == 3)
                compartments[i] = new General();
            else
                compartments[i] = new Luggage();
        }
        cout << "Railway Compartments and Their Notices:\n\n";

        for (int i = 0; i < 10; i++)
        {
            cout << "Compartment " << i + 1 << " -> "
                 << compartments[i]->notice() << endl;
        }
        for (int i = 0; i < 10; i++)
        {
            delete compartments[i];
        }
    }
};
int main()
{
    TestCompartment::mainFunction();
    return 0;
}
