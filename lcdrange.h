#ifndef LCDRANGE_H
#define LCDRANGE_H

#include <QtWidgets>

class LCDRange : public QWidget
{
  Q_OBJECT

private:
    QSlider *slider;

public:
  explicit LCDRange(QWidget *parent = 0);
  int value() const;

public slots:
  void setValue(int value);
  void setRange(int minValue, int maxValue);

signals:
  void valueChanged(int newValue);

protected:


};

#endif // LCDRANGE_H
