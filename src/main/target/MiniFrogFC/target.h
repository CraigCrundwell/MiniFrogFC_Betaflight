/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "MFRG"


#define LED0_PIN                PC14
#define LED1_PIN                PA13

#define USE_EXTI
#define USE_GYRO_EXTI
#define GYRO_1_EXTI_PIN         PC13
#define USE_MPU_DATA_READY_SIGNAL
#define ENSURE_MPU_DATA_READY_IS_LOW

#define USE_GYRO
#define USE_GYRO_SPI_MPU6050
#define GYRO_1_ALIGN            CW180_DEG_FLIP //adjust for final PCB

#define USE_ACC
#define USE_ACC_SPI_MPU6050
#define ACC_1_ALIGN             CW180_DEG_FLIP //adjust for final PCB


#define SERIAL_PORT_COUNT 5

#define PPM_PORT               SERIAL_PORT_USART2


#define USE_UART1
#define USE_UART2
#define USE_UART3
#define USE_SOFTSERIAL1
#define USE_SOFTSERIAL2

//#define UART1_TX_PIN            PB6
//#define UART1_RX_PIN            PB7

#define UART2_TX_PIN            PA14
#define UART2_RX_PIN            PA15

//#define UART3_TX_PIN            PB10
//#define UART3_RX_PIN            PB11

//For the MPU-6050 gyro and acc
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C_DEVICE              (I2CDEV_1)

#define DEFAULT_RX_FEATURE      FEATURE_RX_PPM
#define USE_TARGET_CONFIG

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         (BIT(13)|BIT(14)|BIT(15))
#define TARGET_IO_PORTF         (BIT(0)|BIT(1)|BIT(4))

#define USABLE_TIMER_CHANNEL_COUNT 5
#define USED_TIMERS             (TIM_N(1) | TIM_N(2) | TIM_N(4) | TIM_N(8))
