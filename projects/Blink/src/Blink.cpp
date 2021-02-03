/*******************************************************************************
****版本：V1.0.0
****平台：P12
****日期：2021-02-03
****作者：Qitas
****版权：OS-Q
*******************************************************************************/
#include <Arduino.h>

void setup()
{
    // initialize LED digital pin as an output.
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    // turn the LED on (HIGH is the voltage level)
    digitalWrite(LED_BUILTIN, HIGH);
    // wait for a second
    delay(1000);
    // turn the LED off by making the voltage LOW
    digitalWrite(LED_BUILTIN, LOW);
    // wait for a second
    delay(1000);
}

/*---------------------------(C) COPYRIGHT 2021 OS-Q -------------------------*/
