#include "D:\c++\parameter.h"


parameter::parameter()
{

}

parameter::parameter(char* name, char* value)
{
    parameterName = name;
    parameterValue = value;
}



char* parameter::GetParameterName()
{
    return this -> parameterName;
}

char* parameter::GetParameterValue()
{
    return this -> parameterValue;
}

void parameter::SetParameterName(char* name)
{
    parameterName = name;
}

void parameter::SetParameterValue(char* value)
{
    parameterValue = value;
}