#include <qapplication.h>
#include <qpushbutton.h>

int main( int argc, char **argv )
{
    QApplication a( argc, argv );
  
    QString h = QStringLiteral("H");
    QString e = QStringLiteral("E");
    QString l1 = QStringLiteral("L");
    QString h2 = QStringLiteral("L");
    QString o1 = QStringLiteral("O");
    QString space = QStringLiteral(" ");
    QString w = QStringLiteral("W");
    QString o2 = QStringLiteral("O");
    QString r = QStringLiteral("R");
    QString l3 = QStringLiteral("L");
    QString d = QStringLiteral("D");

    qDebug() << h << e << l1 << l2 << o1 << space << w << o2 << r << l3 << d
    
    return a.exec();
}
