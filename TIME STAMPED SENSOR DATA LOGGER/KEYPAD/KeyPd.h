/*------------------------------------------------------------
File: KeyPd.h
Purpose:
Header file for 4x4 matrix keypad interface for LPC21xx
microcontroller.

This file provides:
- Keypad initialization
- Column status check
- Key value reading using row-column scanning
------------------------------------------------------------*/

#include "types.h"   // User-defined data types

//------------------------------------------------------------
// Function Prototypes
//------------------------------------------------------------

//------------------------------------------------------------
// Function: KeyPdInit
// Purpose : Initialize keypad interface
// Operation:
// - Configure row pins as output
// - Initialize rows to logic LOW
//------------------------------------------------------------
void KeyPdInit(void);

//------------------------------------------------------------
// Function: ColStat
// Purpose : Check the status of keypad columns
// Return:
// 1 -> No key pressed (all columns HIGH)
// 0 -> Key pressed (any column LOW)
//------------------------------------------------------------
u8 ColStat(void);

//------------------------------------------------------------
// Function: KeyVal
// Purpose : Scan keypad and return the key value
// Operation:
// - Sequentially activate each row
// - Read column inputs
// - Use lookup table to map row-column to key
//------------------------------------------------------------
u8 KeyVal(void);
