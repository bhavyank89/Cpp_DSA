#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    string rollNumber;
};

class male
{
protected:
    string voiceMale;
};

class female
{
protected:
    string voiceFemale;
};

class Boy : public male, public Student
{
protected:
    string name;

public:
    Boy(string name, string rollNumber, string voiceMale)
    {
        this->name = name;
        this->rollNumber = rollNumber;
        this->voiceMale = voiceMale;
    }

    void display()
    {
        cout << "Displaying Boy : " << endl;
        cout << "Name : " << this->name << endl;
        cout << "RollNumber : " << this->rollNumber << endl;
        cout << "VoiceMale : " << this->voiceMale << endl;
    }
};

class Girl : public female, public Student
{
protected:
    string name;

public:
    Girl(string name, string rollNumber, string voiceFemale)
    {
        this->name = name;
        this->rollNumber = rollNumber;
        this->voiceFemale = voiceFemale;
    }

    void display()
    {
        cout << "Displaying Girl : " << endl;
        cout << "Name : " << this->name << endl;
        cout << "RollNumber : " << this->rollNumber << endl;
        cout << "VoiceFemale : " << this->voiceFemale << endl;
    }
};

int main()
{
    Boy Rohan("Rohan", "1613208", "high");
    Rohan.display();

    Girl Kavya("Kavya", "1613209", "low");
    Kavya.display();

    return 0;
}
