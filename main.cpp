#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QFont>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QWidget w;
  w.setFixedSize(300,200);
  w.setWindowTitle("Exit Button Übung");

  QPushButton pbExit("Beenden",&w);
  pbExit.setGeometry(55,70,200,40);

  QFont myFont;
  myFont.setBold(true);
  myFont.setFamily("Times");
  myFont.setPixelSize(18);
  pbExit.setFont(myFont);

  QObject::connect(&pbExit,SIGNAL(clicked(bool)),&w,SLOT( close() )  );

  w.show();
  return a.exec();
}
