#include "randomlistwidget.h"

randomListWidget::randomListWidget(QWidget *parent)
    : QListWidget{parent}
{}

void randomListWidget::markRandom(){
    selectAll();
}
