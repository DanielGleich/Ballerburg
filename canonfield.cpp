#include "canonfield.h"


CanonField::CanonField(QWidget *parent)
  :QWidget(parent)
{
  currentAngle = 45;
  setPalette(QPalette(QColor(250,250,200)));
  setAutoFillBackground(true);
}

void CanonField::setAngle(int angle)
{
  if (angle < 5) angle = 5;
  if (angle > 70) angle = 70;
  if (currentAngle == angle) return;
  currentAngle = angle;
  update();
}

void CanonField::paintEvent(QPaintEvent*)
{
  QPainter painter(this);
  painter.drawText(200,200,"Winkel =" + QString::number (currentAngle));
}
