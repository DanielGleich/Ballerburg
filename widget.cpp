#include "widget.h"
#include <QInputDialog>

Widget::Widget(QWidget *parent) :
  QWidget(parent)
{
  setupUi(this);
  listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
  pbDelete->setDisabled(true);
          connect(listWidget,
          SIGNAL(itemSelectionChanged()),
          this,
          SLOT(updateDeletedEnabled()));
}

void Widget::on_pbAdd_clicked()
{
    QString newText = QInputDialog::getText(this, "Enter text", "Text: ");
    if (!newText.isEmpty() )
      this->listWidget->addItem(newText);
}

void Widget::on_pbDelete_clicked()
{
    while (!listWidget->selectedItems().isEmpty())
      delete listWidget->selectedItems().takeFirst();
}

void Widget::updateDeletedEnabled()
{
  if (listWidget->selectedItems().isEmpty())
    pbDelete->setDisabled(true);
  else if (!listWidget->selectedItems().isEmpty())
    pbDelete->setDisabled(false);
}
