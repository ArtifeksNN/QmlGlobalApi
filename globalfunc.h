#pragma once

#include <QObject>

class GlobalFunc : public QObject {
  Q_OBJECT
public:
  explicit GlobalFunc(QObject *parent = nullptr);

  Q_INVOKABLE int dp(int size);

signals:
};
