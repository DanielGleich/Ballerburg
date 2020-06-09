#ifndef LCDRANGE_H
#define LCDRANGE_H

#include <QWidget>
#include <QLCDNumber>
#include <QSlider>
#include <QVBoxLayout>

class LCDRange : public QWidget
{
  Q_OBJECT
public:
  explicit LCDRange(QWidget *parent = 0);

signals:

public slots:
};

#endif // LCDRANGE_H
