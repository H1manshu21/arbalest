
#ifndef RT3_DATAROW_H
#define RT3_DATAROW_H


#include <QtWidgets/QLineEdit>
#include <QtWidgets/QLabel>
#include "QHBoxWidget.h"

class DataRow : public QHBoxWidget {
public:
    DataRow(int count, bool hasHeader, QWidget * parent = nullptr);
    void setHeaderTexts(const QStringList &headerTexts);

    const std::vector<QLineEdit *> &getTextBoxes() const;

private:
    QStringList headerTexts = {"x","y","z"};
    int count;
    bool hasHeader;
    std::vector<QLabel*> headerLabels;
    std::vector<QLineEdit*> textBoxes;
};


#endif //RT3_DATAROW_H
