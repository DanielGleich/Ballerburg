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
  painter.setPen(Qt::DashLine);
  painter.setBrush(QColor(66,134,244,255));
  painter.translate(0,rect().height());
  painter.drawPie( QRect( -35, -35, 70, 70), 0, 90*16 );
  painter.rotate(-currentAngle);
  painter.drawRect(QRect(30, -5, 20, 10));
}
