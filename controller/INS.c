//
// Created by Aron on 24-10-29.
//

#include "INS.h"
#include "cmsis_os.h"
#include "main.h"
#include "ins_task.h"
void StartINSTask(void const * argument)
{

    INS_Init();
    /* Infinite loop */
    for (;;)
    {
        INS_Task();
        osDelay(1);
    }

}