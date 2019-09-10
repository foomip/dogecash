// Copyright (c) 2019 The DogeCash developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SNACKBAR_H
#define SNACKBAR_H

#include <QDialog>

class DogeCashGUI;

namespace Ui {
class SnackBar;
}

class SnackBar : public QDialog
{
    Q_OBJECT

public:
    explicit SnackBar(DogeCashGUI* _window = nullptr, QWidget *parent = nullptr);
    ~SnackBar();

    virtual void showEvent(QShowEvent *event) override;
    void sizeTo(QWidget *widget);
    void setText(QString text);
private slots:
    void hideAnim();
    void windowResizeEvent(QResizeEvent *event);
private:
    Ui::SnackBar *ui;
    DogeCashGUI* window = nullptr;
};

#endif // SNACKBAR_H
