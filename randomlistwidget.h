#ifndef RANDOMLISTWIDGET_H
#define RANDOMLISTWIDGET_H

#include <QListWidget>

class randomListWidget : public QListWidget
{
    Q_OBJECT
public:
    explicit randomListWidget(QWidget *parent = nullptr);
    void markRandom();

};

#endif // RANDOMLISTWIDGET_H
