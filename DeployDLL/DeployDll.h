#ifndef DEPLOYDLL_H
#define DEPLOYDLL_H

#include <QObject>

//Instantiate class from CreateDll project

class CreateDll;

struct DeployDllData;

class DeployDll : public QObject
{
    Q_OBJECT

public:
    DeployDll();
    ~DeployDll();

private:
    DeployDllData* d;
};

#endif // DEPLOYDLL_H
