// Function: FUN_1404a9be0
// Addr: 1404a9be0
// Size: 1 bytes


void FUN_1404a9be0(char *param_1)

{
  uint uVar1;
  uint uVar2;
  char *unaff_RSI;
  
  uVar1 = in(0x26);
  uVar2 = uVar1 | 0x4a9a9400;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

