#include <QApplication>
#include <QtCore>
#include <QtGui>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include "lcdrange.h"

class MyWidget : public QWidget
{
 public:
  MyWidget(QWidget *parent = 0);
};

MyWidget::MyWidget(QWidget *parent)
  :QWidget(parent)
{
  setWindowTitle("Anzeigeelemente 2");


  QPushButton *pbExit = new QPushButton(tr("Beenden"));
  pbExit->setFont(QFont("Times",18,QFont::Bold));

  connect(pbExit, SIGNAL(clicked(bool)),qApp,SLOT(quit()));

  QGridLayout *grid = new QGridLayout;
  LCDRange *lcd[9];
  for (int i = 0; i < 9; i++){
      lcd[i] = new LCDRange(this);
      grid->addWidget(lcd[i],i/3,i%3);
    }

  QVBoxLayout *layout = new QVBoxLayout();
  layout->addWidget(pbExit);
  layout->addLayout(grid);
  setLayout(layout);
}

int main(int argc, char *argv[])
{
  QApplication app(argc,argv);
  MyWidget widget;
  widget.show();
  return app.exec();
}
