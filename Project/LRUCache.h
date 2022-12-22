#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

class node
{
public:
    string data_structures;
    int operation;
    node(string ds, int p)
    {
        data_structures = ds;
        operation = p;
    }
};

class LRUCache
{
public:
    int max_size;
    list<node> l;
    unordered_map<string, list<node>::iterator> m;
    LRUCache(int ms)
    {
        max_size = ms > 1 ? ms : 1;
    }
    void insertkeyValue(string key, int value)
    {
        if (m.count(key) != 0)
        {
            auto it = m[key];
            it->operation = value;
        }
        else
        {
            if (l.size() == max_size)
            {
                cout << "CACHE is Full, Least Recently Used Data Structure is removed" << endl;
                node last = l.back();
                m.erase(last.data_structures);
                l.pop_back();
            }
            else
            {
                node n(key, value);
                l.push_front(n);
                m[key] = l.begin();
            }
        }
    }

    int *getvalue(string key)
    {
        if (m.count(key) == 0)
        {
            auto it = m[key];
            int value = it->operation;
            l.push_front(*it);
            l.erase(it);
            m[key] = l.begin();
            return &l.begin()->operation;
        }
        else
            return NULL;
    }
    string mostRecently()
    {
        return l.begin()->data_structures;
    }
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
};
