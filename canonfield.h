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
    int force() const { return currentForce; }
    QRect canonRect() const;

  public slots:
    void setAngle(int angle);
    void setForce(int force);

  protected:
    void paintEvent(QPaintEvent *);

  private:
    int currentAngle;
    int currentForce;

  signals:
    void angleChanged(int newValue);
    void forceChanged(int newValue);
};

#endif // CANONFIELD_H
