#include <bits/stdc++.h>
using namespace std;

#define line cerr<<__LINE__<<"\t| "
#define DEBUG
#define track cout<<"Congrats.."<<endl;
#define printa(a,n) \
        f(i,n)\
        cout<<a[i]<<" ";\
        cout<<endl;


void deprint(auto &a) {
    cerr << a;
}
void deprint(bool &a) {
    cerr << (a ? "true" : "false");
}
void deprint(string &a) {
    cerr << "\"";
    cerr << a;
    cerr << "\"";
}

// pair
template <typename A,typename B>
void deprint(pair<A,B> p)
{
    cerr << "(";
    deprint((p).first);
    cerr << ",";
    deprint((p).second);
    cerr << ")";
}

// vector
template <typename A>
void deprint(vector<A> &v)
{
    bool first = true;
    cerr << "[";
    for(auto x : v)
    {
        if(!first)
            cerr << ", ";
        first = false;
        deprint(x);
    }
    cerr << "]";
}

// queue
template <typename A>
void deprint(queue<A> &q)
{
    bool first = true;
    cerr << "{";
    while(!q.empty())
    {
        if(!first) 
            cerr << ", ";
        first = false;
        deprint(q.front());
        q.pop();
    }
    cerr << "}";  
}

// priority_queue
template <typename A>
void deprint(priority_queue<A> &pq)
{
    bool first = true;
    cerr << "{";
    while(!pq.empty())
    {
        if(!first) 
            cerr << ", ";
        first = false;
        deprint(pq.top());
        pq.pop();
    }
    cerr << "}";
}

template <typename A>
void deprint(priority_queue<A, vector<A>, greater<A>> &pq)
{
    bool first = true;
    cerr << "{";
    while(!pq.empty())
    {
        if(!first) 
            cerr << ", ";
        first = false;
        deprint(pq.top());
        pq.pop();
    }
    cerr << "}";
}
    
// stack
template <typename A>
void deprint(stack<A> &s)
{
    stack<A> rev;
    while(!s.empty())
    {
        rev.emplace(s.top());
        s.pop();
    }
    
    cerr << "{";
    bool first = true;
    while(!rev.empty())
    {
        if(!first)
            cerr << ", ";
        first = false;
        deprint(rev.top());
        rev.pop();
    }
    cerr << "}";
}

// set
template <typename A>
void deprint(set<A> &s)
{
    bool first = true;
    cerr << "<";
    for(auto x : s)
    {
        if(!first)
            cerr << ", ";
        first = false;
        deprint(x);
    }
    cerr << ">";
}

// multiset
template <typename A>
void deprint(multiset<A> &s)
{
    bool first = true;
    cerr << "{";
    for(auto &x : s)
    {
        if(!first)
            cerr<<", ";
        first = false;
        deprint(x);
    }
    cerr << "}";
}

// map
template <typename A,typename B>
void deprint(map<A,B> &m)
{
    bool first = true;
    cerr << "{";
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        if(!first)
            cerr << ", ";
        first = false;
        deprint((*it).first);
        cerr << ":";
        deprint(it->second);
    }
    cerr << "}";  
}

// multimap
template <typename A,typename B>
void deprint(multimap<A,B> &m)
{
    bool first = true;
    cerr << "{";
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        if(!first)
            cerr << ", ";
        first = false;
        deprint((*it).first);
        cerr << ":";
        deprint(it->second);
    }
    cerr << "}";  
}

// -------------------------------------------------------------------------


#define d(...) line<<"["<<#__VA_ARGS__<<"] : ", debug(__VA_ARGS__)

void debug() {
    cerr << '\n';
}

template<typename Head,typename... Tail>
void debug(Head H, Tail ... T)
{
    deprint(H);
    cerr << " ";
    debug(T...);
}
