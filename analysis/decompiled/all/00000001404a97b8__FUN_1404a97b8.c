// Function: FUN_1404a97b8
// Addr: 1404a97b8
// Size: 1 bytes


void FUN_1404a97b8(char *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char unaff_SPL;
  char *unaff_RSI;
  
  uVar1 = in(0xda);
  pcVar2 = (char *)(ulonglong)CONCAT22((short)((uint)uVar1 >> 0x10),CONCAT11(0x24,(char)uVar1));
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

