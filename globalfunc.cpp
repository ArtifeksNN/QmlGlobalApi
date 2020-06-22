#include "globalfunc.h"

GlobalFunc::GlobalFunc(QObject *parent) : QObject(parent) {}

int GlobalFunc::dp(int size) { return 2 * size; }
