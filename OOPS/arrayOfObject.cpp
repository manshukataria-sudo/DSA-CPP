#include <iostream>
using namespace std;
class Cricketer
{
private:
    char name;
    int age;
    int matches;
    int runs;
    double avg;

public:
    void setName(char name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setMatches(int matches)
    {
        this->matches = matches;
    }
    void setRuns(int runs)
    {
        this->runs = runs;
    }
    void setAvg()
    {
        double avg = getRuns() / getMatches();
        this->avg = avg;
    }
    char getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    int getMatches()
    {
        return matches;
    }
    int getRuns()
    {
        return runs;
    }
    double getAvg()
    {
        return avg;
    }
};
int main()
{
    Cricketer a, b, c;

    Cricketer cricketer[20];

    cricketer[0].setAge(30);
    cricketer[0].setName('A');
    cricketer[0].setRuns(5000);
    cricketer[0].setMatches(150);
    cricketer[0].setAvg();

    cout << cricketer[0].getAge() << endl;
    cout << cricketer[0].getName() << endl;
    cout << cricketer[0].getRuns() << endl;
    cout << cricketer[0].getMatches() << endl;
    cout << cricketer[0].getAvg() << endl;
}