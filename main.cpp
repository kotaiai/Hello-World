#include <iostream>

using namespace std;


class Hello{
    private:
        struct llist
        {
            char input;
            llist *next;

        };llist *top;

    public:
        Hello();
        void push(char val);
        void pop(char &val);
        bool isempty();

};

Hello::Hello()
{
    top = NULL;
}

void Hello::push(char val)
{
    llist *newNode;
    newNode = new llist;
    newNode->input = val;


    if(isempty())
    {
        top = newNode;
        newNode->next = NULL;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }


}

void Hello::pop(char &val)
{
    llist *ntop;
    val = top->input;
    ntop = top->next;
    delete top;
    top = ntop;
    cout<<val;


}

bool Hello::isempty()
{
    bool status;

    if (!top)
        status = true;
    else
        status = false;

    return status;
}

int main()
{
    Hello world;

    return 0;
}
