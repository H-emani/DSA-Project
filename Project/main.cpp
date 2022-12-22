#include <bits/stdc++.h>
#include "LRUCache.h"
#include <graphics.h>
using namespace std;
typedef long long ll;
typedef vector<ll> v;
void details(string key)
{
    if (key == "Stack")
    {
        initwindow(688, 388, "stack");
        readimagefile("stack.jpg", 0, 0, 688, 388);
        getch();
        closegraph();
    }
    else if (key == "Queue")
    {
        initwindow(688, 388, "Queue");
        readimagefile("Queue.jpg", 0, 0, 688, 388);
        getch();
        closegraph();
    }
    else if (key == "Linked List")
    {
        initwindow(688, 388, "Linked List");
        readimagefile("Linked_list.jpg", 0, 0, 688, 388);
        getch();
        closegraph();
    }
    else if (key == "Array")
    {
        initwindow(688, 388, "Array");
        readimagefile("Arrays.jpg", 0, 0, 688, 388);
        getch();
        closegraph();
    }
    else if (key == "Graph")
    {
        initwindow(688, 388, "Graph");
        readimagefile("Graph.jpg", 0, 0, 688, 388);
        getch();
        closegraph();
    }
    else
    {
        initwindow(688, 388, "Trees");
        readimagefile("Tree.jpg", 0, 0, 688, 388);
        getch();
        closegraph();
    }
}
int main()
{
    LRUCache l(5);
    l.insertkeyValue("Array", 3);
    l.insertkeyValue("Queue", 4);
    l.insertkeyValue("Linked List", 5);
    l.insertkeyValue("Tree", 10);
    cout<<"The most recently used Data Structure is: "<<l.mostRecently()<<endl;
    // details("Stack");
    l.insertkeyValue("Graph", 10);
    int * p  = l.getvalue("Stack");
    if(p!=NULL) cout<<"Stack exists in the Cache"<<endl;
    else cout<<"Stack doesn't exist"<<endl;

    cout<<"To get more details about the Fundamental of Data Structure "<<endl;
    string key;
    cin>>key;
    details(key);
    

    return 0;
}