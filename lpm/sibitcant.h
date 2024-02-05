#ifndef SIBITCANT_H
#define SIBITCANT_H

#include <QDeclarativeItem>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class sibitCantData;

class sibitCant : public QWidget
{
    Q_OBJECT
public:
    explicit sibitCant(QWidget *parent = nullptr);
    sibitCant(const sibitCant &);
    sibitCant &operator=(const sibitCant &);
    ~sibitCant();

signals:


private:
    QSharedDataPointer<sibitCantData> data;
};

#endif // SIBITCANT_H
