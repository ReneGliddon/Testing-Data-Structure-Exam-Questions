#include <vector>
using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <list>


template <class Type>
struct nodeType {
	Type info;
	nodeType<Type> *link;
};

template<class Type>
int recSeqSearch(const vector<Type> &a, const Type &x, int sizeLessOne)
{
    int loc;
    bool found = false;
    //for (loc = 0; loc < sizeLessOne; loc++)
    if (a[sizeLessOne] == x)
    {
        found = true;
        return sizeLessOne;
    }
    else
    {
        if(sizeLessOne==0&&!found)
        {
            return -1;
        }
        else
            recSeqSearch(a, x, sizeLessOne - 1);
    }




}


template <class Type>
int sequentialSearch(const vector<Type> &a, const Type &x)
{
    return (recSeqSearch(a, x, a.size()-1));
}


int main()
{
    string* adjPtr;
    nodeType<string> *first;
    nodeType<string>*last;
    nodeType<string> *newNode; //pointer to create the new node
    newNode = new nodeType<string>; //create the new node
    newNode->info = "fat"; //store the new item in the node
    first=newNode;
    last=newNode;

    nodeType<string> *nextNode;
    nextNode= new nodeType<string>;
    nextNode->info="thin";
    last =nextNode;
    first->link=nextNode;
    last->link=first;


    cout<<endl<<"Let's check if the last node points to the first."<<endl;

   cout<<"our first node is: "<<first->info<<". ";
   cout<<" Our last node is: "<<last->info;
   cout<<". Last points to "<<last->link->info<<endl<<endl;
   /* const int AMOUNT = 6;
    const int MAX = 10;

    int value[AMOUNT];
    srand(time(NULL));

    for (int i= 0; i<AMOUNT; i++)
    {
        bool check;
        int n;

        do
        {
            n=rand()%MAX+1;
            check=true;
            for(int j =0; j<i; j++)
                if(n==value[j])
                {
                    check = false;
                    break;
                }
        }while(!check);
        value[i]=n;
    }
//    sort(begin(value), end(value));

    cout<<endl<<"here are your values  of myList \n\n";
    for(int i = 0; i<AMOUNT; i++)
    {
        cout<<value[i]<<" ";
    }

    int x = rand()%7;
    if(x==3)
        x++;
    cout<<"\nSearch for: "<<value[x];*/





    /*vector<int> intList;
    int value;
    cout<<"Enter your vector values, ending with -999."<<endl;
    cin>>value;
    int size = 0;
    while(value!= -999)
    {
        intList.push_back(value);
        size++;
        cin>>value;
    }


    cout<<"The vector array is: ";
    for(int i = 0; i < size; i++)
    {
        cout<<intList[i]<<" ";
    }

    int searching;
    cout<<endl<<"What should we search for? ";
    cin>>searching;

    int num = sequentialSearch(intList, searching);

    if (num=-1)
    {
        cout<<"Welp! Not here!";
    }
    else
        cout<<endl<<"Yes, this is in the vector array. It is located at position "<<num+1<<"."<<endl;
        */


    /*
    int n;
    int i = 1;
    int sum = 0;
    cout<<endl<<"Enter n: ";
    cin>>n;

    int j = n;
    while (i < n)
    {
        i*=2;
        sum++;
        cout<<endl<<"Sum = "<<sum;
    }
    while (j > 1)
    {
       j--;
        sum--;
        cout <<endl<<"Second while loop. Sum is "<<sum;
    }*/



return 0;
}
