#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QSlider>
#include <QApplication>
#include "lcdrange.h"
#include "canonfield.h"

class MyWidget : public QWidget
{
  public:
    MyWidget(QWidget *parent = 0);
};

MyWidget::MyWidget(QWidget *parent)
  : QWidget(parent)
{
  setWindowTitle("Over the wall");
  QPushButton *pbExit = new QPushButton(tr("Beenden"));
  pbExit->setFont(QFont("Times", 18, QFont::Bold));

  LCDRange *lcd = new LCDRange(this);
  CanonField *field = new CanonField();
  QGridLayout *gridLayout = new QGridLayout();
  gridLayout->setColumnStretch(1, 10);

  gridLayout->addWidget(pbExit, 0, 0);
  gridLayout->addWidget(lcd,1,0);
  gridLayout->addWidget(field,1,1,2,1);

  setLayout(gridLayout);

  connect(pbExit, SIGNAL(clicked(bool)), qApp, SLOT(quit()));
  connect(lcd, SIGNAL(valueChanged(int)),field,SLOT(setAngle(int)));
  lcd->setValue(45);
}

int main(int argc, char *argv[])
{
  QApplication app(argc,argv);
  MyWidget widget;
  widget.setGeometry(100,100,500,355);
  widget.show();
  return app.exec();
}
