#include <iostream>
using namespace std;

template <class T>
class SmartP
{
private:
    T *p;

public:
    // costruttore
    SmartP(const T *ptr = nullptr) : p((ptr) ? new T(*(ptr)) : nullptr) {}

    // costruttore copia
    SmartP(const SmartP &sp) : p(new T(*(sp.p))) {}

    // distruttore
    ~SmartP() { delete p; }

    // assegnazione
    SmartP &operator=(const SmartP &sp)
    {
        if (this != &sp)
        {
            delete p;
            p = new T(*(sp.p));
        }
        return *this;
    }

    // uguaglianza
    bool operator==(const SmartP &sp) const { return p == sp.p; }

    // disuguaglianza
    bool operator!=(const SmartP &sp) const { return p != sp.p; }

    // dereferenziazione
    T &operator*() const { return *p; }
};