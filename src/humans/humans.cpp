#include "humans.h"
#include <initializer_list>

using namespace std;

Team::Team(initializer_list<Person> lst) 
                : people(new Person[lst.size()]), sz(static_cast<int>(lst.size()))
                {}
    
