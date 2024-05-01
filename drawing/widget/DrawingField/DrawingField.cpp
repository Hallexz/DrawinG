#include "DrawWidget.h"

DrawWidget::DrawWidget(QWidget *parent) : QWidget(parent) {}

void DrawWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.setFont(QFont("Arial", 30));
    painter.drawText(rect(), Qt::AlignCenter, "Qt");
    painter.setPen(QPen(Qt::green, 3));
    painter.drawLine(0, 0, width(), height());
}
