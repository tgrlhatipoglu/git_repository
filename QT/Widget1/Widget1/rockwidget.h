#ifndef ROCKWIDGET_H
#define ROCKWIDGET_H

#include <QWidget>
#include <QObject>

class RockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RockWidget(QWidget *parent = 0);

signals:

public slots:

private slots:
    void buttonClicked();
private:
    QSize sizeHint() const;

};

#endif // ROCKWIDGET_H
