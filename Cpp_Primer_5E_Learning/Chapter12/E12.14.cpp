//
// Created by Xiyun on 2016/11/17.
//
#include <iostream>
#include <memory>
#include <string>

using std::shared_ptr;
using std::endl;
using std::cout;
using std::string;

struct destination {
    string ip;
    int port;
    destination(string _ip, int _port) : ip(_ip), port(_port) { }
};
struct connection {
    string ip;
    int port;
    connection(string _ip, int _port) : ip(_ip), port(_port) { }
};

connection connect(destination* pDest) {
    shared_ptr<connection> ret(new connection(pDest->ip, pDest->port));
    cout << "creating connection(" << ret.use_count() << ")" << endl;
    return *ret;
}
void disconnection(connection pConn) {
    cout << "connect close (" << pConn.ip << " " << pConn.port << ")" << endl;
}

void end_connection(connection *p)
{
    disconnection(*p);
}

void f(destination &d)
{
    connection c = connect(&d);
    shared_ptr<connection> p(&c, end_connection);
    cout << "connecting now (" << p.use_count() << ")" << endl;
}

void f_lambda(destination &d)
{
    connection c = connect(&d);
    shared_ptr<connection> p(&c, [](connection *p){disconnection(*p);});
    cout << "connecting now (" << p.use_count() << ")" << endl;
}

int main()
{
    destination dest("202.118.176.67", 3316);
//    f(dest);
    f_lambda(dest);
    return 0;
}