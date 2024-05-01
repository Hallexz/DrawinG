#include <QWidget>
#include <QPainter>

class DrawWidget : public QWidget
{
public:
    DrawWidget(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);
}
