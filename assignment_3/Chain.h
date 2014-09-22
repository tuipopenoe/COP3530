// Tui Popenoe
#include "LinearList.h"

using namespace std;

class chain: public linearList{
    public:
        // Constructor, Copy Constructor, and Destructor
        chain(int initialCapacity = 100);
        chain(const chain&);
        ~chain() {delete [] element;}

        virtual bool empty() const {return listSize == 0}
        virtual int size() const {return listSize;}
        virtual int* get(int theIndex) const;
        virtual void erase(int theIndex);
        virtual void insert(int theIndex, const int& theElement);
        virtual void MaxMin();
        // void output(ostream& out) const;
        virtual void changeLength1D(int*&, int, int);
        // additional methods
        virtual void traverse();
        virtual int capacity() const {return chainLength;}

    protected:
        void checkIndex(int theIndex) const;

        int* element;
        int chainLength;
        int listSize;
}