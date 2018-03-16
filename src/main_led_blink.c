/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Error.h>


/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

#include <stdio.h>

/* TI-RTOS Header files */
#include <ti/drv/gpio/GPIO.h>
#include <ti/drv/gpio/soc/GPIO_soc.h>

#include "GPIO_log.h"
#include "GPIO_board.h"

#include <ti/board/board.h>

#include <ti/drv/uart/UART.h>
#include <ti/drv/uart/UART_stdio.h>
#include <ADC.h>

/**********************************************************************
 ************************** Macros ************************************
 **********************************************************************/
#define DELAY_VALUE       (0x6FFFFFU)

uint32_t value = 0;

/**********************************************************************
 ************************** Internal functions ************************
 **********************************************************************/

Task_Handle main_task;

#define GPIO_LED_USER0 21
#define GPIO_LED_USER1 22
#define GPIO_LED_USER2 23
#define GPIO_LED_USER3 24


/* Delay function */
void AppDelay(unsigned int delayVal);

/* Callback function */
void AppGpioCallbackFxn(void);
/*
 *  ======== Board_initI2C ========
 */
static void Board_initGPIO(void)
{
    Board_initCfg boardCfg;

    boardCfg = BOARD_INIT_PINMUX_CONFIG |
            BOARD_INIT_MODULE_CLOCK |
            BOARD_INIT_UART_STDIO;

    Board_init(boardCfg);
}

/**********************************************************************
 ************************** Global Variables **************************
 **********************************************************************/
volatile uint32_t gpio_intr_triggered = 0;
uint32_t gpioBaseAddr;
uint32_t gpioPin;

/*
 *  ======== test function ========
 */

void gpioLedUser0(UArg arg0, UArg arg1){
  while(1){
  GPIOPinWrite(GPIO_BASE_ADDR, GPIO_LED_USER0, GPIO_PIN_HIGH);
  AppDelay(2*DELAY_VALUE);
  GPIOPinWrite(GPIO_BASE_ADDR, GPIO_LED_USER0, GPIO_PIN_LOW);
  AppDelay(2*DELAY_VALUE);
  Task_sleep(1);
  }

  Task_exit();
}

void gpioLedUser1(UArg arg0, UArg arg1){
  while(1){
  GPIOPinWrite(GPIO_BASE_ADDR, GPIO_LED_USER1, GPIO_PIN_HIGH);
  AppDelay(3*DELAY_VALUE);
  GPIOPinWrite(GPIO_BASE_ADDR, GPIO_LED_USER1, GPIO_PIN_LOW);
  AppDelay(3*DELAY_VALUE);
  Task_sleep(1);
  }

  Task_exit();
}

void gpioLedUser2(UArg arg0, UArg arg1){
  while(1){
  GPIOPinWrite(GPIO_BASE_ADDR, GPIO_LED_USER2, GPIO_PIN_HIGH);
  AppDelay(4*DELAY_VALUE);
  GPIOPinWrite(GPIO_BASE_ADDR, GPIO_LED_USER2, GPIO_PIN_LOW);
  AppDelay(4*DELAY_VALUE);
  Task_sleep(1);
  }

  Task_exit();
}

void gpioLedUser3(UArg arg0, UArg arg1){
  while(1){
  GPIOPinWrite(GPIO_BASE_ADDR, GPIO_LED_USER3, GPIO_PIN_HIGH);
  AppDelay(5*DELAY_VALUE);
  GPIOPinWrite(GPIO_BASE_ADDR, GPIO_LED_USER3, GPIO_PIN_LOW);
  AppDelay(5*DELAY_VALUE);
  Task_sleep(1);
  }

  Task_exit();
}

void adcRead(UArg arg0, UArg arg1){
  while(1){
    value = TSCADCFIFOADCDataRead(SOC_ADC_TSC_0_REGS, TSCADC_FIFO_0);
    UART_printf("Valor do sensor: %d\n", value);
    AppDelay(DELAY_VALUE);
  }

  Task_exit();
}


/*
 *  ======== main ========
 */


int main(void){

    Task_Params taskParams;

    /* Call board init functions */
    Board_initGPIO();
    ADCConfigure();



    Task_Params_init(&taskParams);
        taskParams.priority = 1;
        taskParams.stackSize = 0x1400;

         main_task = Task_create (adcRead, &taskParams, NULL);

    /* Start BIOS */
    BIOS_start();
    return (0);
}

/*
 *  ======== AppDelay ========
 */
void AppDelay(unsigned int delayVal){
    while(delayVal)
        delayVal--;
}

