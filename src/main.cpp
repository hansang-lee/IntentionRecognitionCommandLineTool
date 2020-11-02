#include <iostream>
#include "gtest/gtest.h"
#include "IntentRecognizer.h"

int main(int argc, char** argv)
{
    if(argc > 1)
    {
        IntentRecognizer ir;
        ir.PerformIntentRecognition(argc, argv);
    }
}
