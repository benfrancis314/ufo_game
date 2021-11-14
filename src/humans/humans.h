#include <string>
#include <initializer_list>

using namespace std;

class Person {
    private: 
        string name;
        unsigned short int level;
    public:
        Person(string name="Unnamed Agent", unsigned short int level=1) : name(name), level(level=1) {}
};

class Team {
    private:
        Person* people;
        int sz;
    public: 
        Team(int s) : people(new Person[s]), sz(s) {
            for (int i=0; i!=s; ++i) people[i] = Person();
        }

        // TODO: Get initializer list to work
        Team(initializer_list<Person> lst); 

        ~Team() { delete[] people; }

        void push_back(Person);
        int size() { return sz; }
 };



