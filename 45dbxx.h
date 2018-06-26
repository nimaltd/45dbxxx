#ifndef _45DBXX_H
#define _45DBXX_H

#include <stdint.h>
#include <stdbool.h>

typedef struct
{
	uint8_t		FlashSize_MBit;	
	uint16_t	PageSize;
	uint16_t	Pages;
	uint8_t		Shift;
}AT45dbxx_t;


extern AT45dbxx_t	AT45dbxx;


bool		AT45dbxx_Init(void);
void 		AT45dbxx_EraseChip(void);
void 		AT45dbxx_ErasePage(uint16_t page);
void		AT45dbxx_WritePage(uint8_t	*Data,uint16_t len,uint16_t	page);
void	  AT45dbxx_ReadPage(uint8_t* Data,uint16_t len,uint16_t page);

#endif
