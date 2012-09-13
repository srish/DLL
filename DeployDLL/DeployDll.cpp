#include "DeployDll.h"
#include <CreateDll.h>

struct DeployDllData {
   CreateDll* createDll;
};

DeployDll::DeployDll()
{
    d = new DeployDllData;
    d->createDll = new CreateDll;
    d->createDll->creatingDLL();
}

DeployDll::~DeployDll()
{
    delete d;
}
