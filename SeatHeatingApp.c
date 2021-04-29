#include <avr/io.h>
#include <util/delay.h>
#include"inc/activity1.h"
#include"inc/activity2.h"
#include"inc/activity3.h"
#include"inc/activity4.h"
int main(void)
{

    activity1();
    activity2();
    activity3();
    return 0;
}
