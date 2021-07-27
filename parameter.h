#pragma once
#include <iostream>


class parameter
{
    private:

    char* parameterName;
    char* parameterValue;
 
    public:

    parameter();
    parameter(char* name, char* value);
    
    
    void SetParameterName(char* name);
    void SetParameterValue(char* value);

    char* GetParameterName();
    char* GetParameterValue();
   
};

