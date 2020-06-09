#ifndef CANONFIELD_H
#define CANONFIELD_H
#include <QWidget>
#include <QPainter>

class CanonField : public QWidget
{
    Q_OBJECT

  public:
    CanonField(QWidget *parent = 0);
    int angle() const { return currentAngle; }

  public slots:
    void setAngle(int angle);

  protected:
    void paintEvent(QPaintEvent *);

  private:
    int currentAngle;
};

#endif // CANONFIELD_H
