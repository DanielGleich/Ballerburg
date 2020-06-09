#include "lcdrange.h"

LCDRange::LCDRange(QWidget *parent)
  :QWidget(parent)
{
  QLCDNumber *lcd = new QLCDNumber(2);
  lcd->setSegmentStyle(QLCDNumber::Filled);
  slider = new QSlider(Qt::Horizontal);
  slider->setRange(0,99);
  slider->setValue(0);

  connect( slider,SIGNAL( valueChanged(int) ),lcd,SLOT(display(int) ) );
  connect(slider, SIGNAL(valueChanged(int)),SIGNAL(valueChanged(int)));

  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(lcd);
  layout->addWidget(slider);
  setLayout(layout);

  setFocusProxy(slider);
}

int LCDRange::value() const
{
 return slider->value();
}

void LCDRange::setValue(int value)
{
  if (value != slider->value())
    emit valueChanged(value);
  slider->setValue(value);
}

void LCDRange::setRange(int minValue, int maxValue)
{
  qWarning("LCDRange::setRange(%d, %d) \n)"
      "\tBereich muss zwischen 0..99 liegen \n"
      "\tund minValue darf nicht größer als maxValue sein!", minValue, maxValue);
}
