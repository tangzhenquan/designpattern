#include "stdio.h"
#include "string.h"



class Singleton1
{
public:
    static Singleton1* getInstance()
    {
        if(m_instance==NULL)
        {
            m_instance=new Singleton1;
        }
        return m_instance;

    }
    void dump()
    {
        printf("singleton 1\n");
    }
private:
    Singleton1()
    {
    }

    Singleton1(const Singleton1& s)
    {
        
    }
    Singleton1& operator=(const Singleton1& s)
    {

    }

private:
   static Singleton1 *m_instance;
};
Singleton1* Singleton1::m_instance=NULL;


class Singleton2
{
public:
    static Singleton2* getInstance()
    {
        return m_instance;
    }
    void dump()
    {
        printf("singleton 2\n");
    }
private:
    static Singleton2 *m_instance;

};
Singleton2* Singleton2::m_instance=new Singleton2;

int main()
{
   Singleton1* instance=Singleton1::getInstance();
   instance->dump();
   Singleton2* instance2=Singleton2::getInstance();
   instance2->dump();
}
