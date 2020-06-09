#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QVBoxLayout>

class MyWidget : public QWidget
{
public:
  MyWidget(QWidget *parent = 0);
};

MyWidget::MyWidget(QWidget *parent)
  : QWidget(parent)
{
  this->setFixedSize(300,120);

  QPushButton *pbExit = new QPushButton(tr("Beenden"), this);
  pbExit->setFont(QFont("Times",18,QFont::Bold));
  connect(pbExit,SIGNAL(clicked(bool)), qApp,SLOT(quit()));

  QLCDNumber *lcd = new QLCDNumber(2,this);
  lcd->setSegmentStyle(QLCDNumber::Filled);

  QSlider *slider = new QSlider(Qt::Horizontal,this);
  slider->setRange(0,99);
  slider->setValue(0);

  connect(slider,SIGNAL(valueChanged(int)),lcd,SLOT(display(int)) );

  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(pbExit);
  layout->addWidget(lcd);
  layout->addWidget(slider);
  setLayout(layout);
}

int main(int argc, char *argv[])
{
  QApplication app(argc,argv);
  MyWidget w;
  w.show();
  return app.exec();
}
