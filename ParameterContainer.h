#pragma once
#include "D:\c++\parameter.h"

class ParameterContainer
{
    private:

    parameter* Params = nullptr;

    size_t ActualContainerSize = 0;
    size_t ContainerCapacity = 0;
    
    size_t reAlloc( size_t size)
    {
        std::cout << "ReallocStart" << std::endl;
        parameter* newParameters = new parameter[size];

        for(size_t i = 0; i < ActualContainerSize ; i++)
        {
            newParameters[i] = Params[i];
        }

        delete[] Params;
        Params = newParameters;
        ContainerCapacity = size;
        std::cout << "ReallocEnd" << std::endl;
    }

    public:

    ParameterContainer()
    {
        reAlloc(2);
    }

    void pushItem(char* name, char* value)
    {
        if(ActualContainerSize >= ContainerCapacity)
        {
            std::cout << "We need more size" << std::endl;
            reAlloc(ContainerCapacity+2);
        }
        

        this ->Params[ActualContainerSize].SetParameterName(name);
        this ->Params[ActualContainerSize].SetParameterValue(value);
        ActualContainerSize++;

    }

    const char* operator[](size_t index)
    {
        return this -> Params[index].GetParameterName();
    }




};

