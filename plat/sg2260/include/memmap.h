#ifndef __MEMMAP_H__
#define __MEMMAP_H__

#define SYS_CTRL_BASE   0x7030010000
#define TOP_BASE        SYS_CTRL_BASE
#define REG_TOP_CONF_INFO	0x4
#define BOOT_SEL_ADDR	(TOP_BASE + REG_TOP_CONF_INFO)
#define REG_DDR_SIZE    0X54
#define DDR_SIZE_ADDR   (TOP_BASE + REG_DDR_SIZE)
#define BOARD_TYPE_REG		(SYS_CTRL_BASE + 0x23C)
#define MP0_STATUS	0x380
#define MP0_STATUS_ADDR (TOP_BASE + MP0_STATUS)
#define MP0_CONTROL     0X384
#define MP0_CONTROL_ADDR	(TOP_BASE + MP0_CONTROL)

#define SDIO_BASE	0x704002B000
#define SPIFLASH_1_BASE	0X7002180000
#define EFUSE_0_BASE	0x7030000000
#define TOP_RESET_BASE	0x7030013000

#define SD_RESET_INDEX  28

#define CLINT_MHART_ID  0x6844001000

#define UART0_BASE	0x7030000000
#define UART1_BASE	0x7030001000
#define UART_BASE	UART1_BASE
#define UART_REG_WIDTH  32
#if defined(CONFIG_TARGET_EMULATOR)

#define UART_PCLK	153600
#define UART_BAUDRATE	9600

#elif defined(CONFIG_TARGET_PALLADIUM)

#define UART_PCLK	153600
#define UART_BAUDRATE	9600

#elif defined(CONFIG_TARGET_FPGA)

#define UART_PCLK	25000000
#define UART_BAUDRATE	115200

#elif defined(CONFIG_TARGET_ASIC)

#define UART_PCLK	500000000
#define UART_BAUDRATE	115200

#else
#error "no target specified"
#endif


#endif
