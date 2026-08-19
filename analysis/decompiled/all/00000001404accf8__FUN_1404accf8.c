// Function: FUN_1404accf8
// Addr: 1404accf8
// Size: 1 bytes


void FUN_1404accf8(char *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char in_AL;
  undefined1 *unaff_RDI;
  
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  *param_1 = *param_1 + in_AL;
  *param_2 = *param_2;
  *(char *)((ulonglong)&stack0x00000000 & 0xffffffff) =
       *(char *)((ulonglong)&stack0x00000000 & 0xffffffff) + (char)param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

