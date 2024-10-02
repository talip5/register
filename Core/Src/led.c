/*
 * led.c
 *
 *  Created on: Sep 22, 2024
 *      Author: Furka
 */

#include "stm32f4xx_hal.h"

void led_init(void) {
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;

	//led15
	GPIOD->MODER |= 1 << 30;
	GPIOD->MODER &= ~(1 << 31);

	GPIOD->OTYPER &= ~(1 << 15);

	GPIOD->OSPEEDR &= ~(GPIO_OSPEEDR_OSPEED15_0);
	GPIOD->OSPEEDR &= ~(GPIO_OSPEEDR_OSPEED15_1);

	GPIOD->PUPDR &= ~(GPIO_PUPDR_PUPD15_0);
	GPIOD->PUPDR &= ~(GPIO_PUPDR_PUPD15_1);

	// led 14
	GPIOD->MODER |= 1 << 28;
	GPIOD->MODER &= ~(1 << 29);

	GPIOD->OTYPER &= ~(1 << 14);

	GPIOD->OSPEEDR &= ~(GPIO_OSPEEDR_OSPEED14_0);
	GPIOD->OSPEEDR &= ~(GPIO_OSPEEDR_OSPEED14_1);

	GPIOD->PUPDR &= ~(GPIO_PUPDR_PUPD14_0);
	GPIOD->PUPDR &= ~(GPIO_PUPDR_PUPD14_1);

	// led 13
	GPIOD->MODER |= 1 << 26;
	GPIOD->MODER &= ~(1 << 27);

	GPIOD->OTYPER &= ~(1 << 13);

	GPIOD->OSPEEDR &= ~(GPIO_OSPEEDR_OSPEED13_0);
	GPIOD->OSPEEDR &= ~(GPIO_OSPEEDR_OSPEED13_1);

	GPIOD->PUPDR &= ~(GPIO_PUPDR_PUPD13_0);
	GPIOD->PUPDR &= ~(GPIO_PUPDR_PUPD13_1);

	// led 12
	GPIOD->MODER |= 1 << 24;
	GPIOD->MODER &= ~(1 << 25);

	GPIOD->OTYPER &= ~(1 << 12);

	GPIOD->OSPEEDR &= ~(GPIO_OSPEEDR_OSPEED12_0);
	GPIOD->OSPEEDR &= ~(GPIO_OSPEEDR_OSPEED12_1);

	GPIOD->PUPDR &= ~(GPIO_PUPDR_PUPD12_0);
	GPIOD->PUPDR &= ~(GPIO_PUPDR_PUPD12_1);

}

void led_on(char x) {
	if(x=='B'){
	GPIOD->ODR |=GPIO_ODR_ODR_15;
	}
	//GPIOD->ODR |= 1 << pin;
}

/*void led_on(int pin) {
	//GPIOD->ODR |=GPIO_ODR_ODR_15;
	GPIOD->ODR |= 1 << pin;
}*/

/*void led_off(int pin) {
	//GPIOD->ODR =~(GPIO_ODR_ODR_15);
	GPIOD->ODR &= ~(1 << pin);
}*/
