#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    using namespace std;

    cout << "hello world!" << endl;
    cout << "o" << endl;

    return a.exec();
}
