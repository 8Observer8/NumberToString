#include <QCoreApplication>
#include <string>
#include <iostream>
#include "boost/lexical_cast.hpp"

int main( int argc, char *argv[] ) {
    QCoreApplication a( argc, argv );

    int i = 5;
    std::string s = boost::lexical_cast<std::string>(i);
    std::cout << s << std::endl;

    double d = 5.5;
    s = boost::lexical_cast<std::string>(d);
    std::cout << s << std::endl;

    return a.exec( );
}
