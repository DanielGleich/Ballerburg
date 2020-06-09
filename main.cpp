#include <QApplication>
#include <QLabel>
#include <QPushButton>

int main(int argc, char **argv)
{
  QApplication a(argc, argv);
  QLabel l("Hello World");
  l.setAlignment( Qt::AlignCenter );
  l.show();
  QPushButton b("Schließen");
  QObject::connect(&b, SIGNAL(clicked(bool)), &a, SLOT(closeAllWindows()));
  b.show();
  return a.exec();
}
