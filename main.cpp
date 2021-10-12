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
        char pop(char &val);
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

char Hello::pop(char &val)
{
    llist *ntop;
    val = top->input;
    ntop = top->next;
    delete top;
    top = ntop;

    return val;


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
    char alph[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!$%^&*";
    char hw;
    int count = 0;

    for (int i = 0; i<12; i++)
    {
        for (int j= 0; j<59; j++)
        {
            if (alph[j]=='!')
            {
                if(count == 0)
                {
                    world.push(alph[j]);
                    count++;
                }
            }
            else if (alph[j]=='d')
            {
                if(count == 1)
                {
                    world.push(alph[j]);
                    count++;
                }
            }
            else if (alph[j]=='l')
            {
                if(count == 2 || count == 7|| count ==8)
                {
                    world.push(alph[j]);
                    count++;
                }
            }
            else if (alph[j]=='r')
            {
                if(count == 3)
                {
                    world.push(alph[j]);
                    count++;
                }
            }
            else if (alph[j]=='o')
            {
                if(count == 4||count==6)
                {
                    world.push(alph[j]);
                    count++;
                }
            }
            else if (alph[j]=='W')
            {
                if(count == 5)
                {
                    world.push(alph[j]);
                    count++;
                }
            }
            else if (alph[j]=='e')
            {
                if(count == 9)
                {
                    world.push(alph[j]);
                    count++;
                }
            }
            else if (alph[j]=='H')
            {
                if(count == 10)
                {
                    world.push(alph[j]);
                    count++;
                }
            }
        }
    }
        for(int i = 0; i<11; i++)
        {
            if (i==5)
                cout<<" ";
            cout<<world.pop(hw);
        }

    return 0;
}
