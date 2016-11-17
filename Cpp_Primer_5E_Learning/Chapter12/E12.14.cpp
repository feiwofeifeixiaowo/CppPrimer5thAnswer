//
// Created by Xiyun on 2016/11/17.
//
#include <iostream>
#include <memory>
using namespace std;

struct destination;
struct connection;

connection connect(destination*);
void dissconnection(connection);

void end_connection(connection *p)
{
    dissconnection(p);
}

void f(destination &d)
{
    connection c = connect(d);
    shared_ptr<connection> p(&c, end_connection);
}

void f_lambda(destination &d)
{
    connection c = connect(d);
    shared_ptr<connection> p(&c, [](connection *p){dissconnection(p);});
}