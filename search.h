#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include "bst.h"

extern BST bigdata;

namespace Ui {
class search;
}

class search : public QDialog
{
    Q_OBJECT

public:
    explicit search(QWidget *parent = nullptr);
    ~search();

private slots:
    void on_searchbutton_clicked();

private:
    Ui::search *ui;
};

#endif // SEARCH_H
