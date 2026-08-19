// Function: FUN_1404aebe8
// Addr: 1404aebe8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aebe8(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  byte unaff_BL;
  char unaff_SPL;
  char *unaff_RSI;
  char in_CF;
  char *pcVar4;
  
  uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x1c + in_CF) + 0x7740500;
  pcVar4 = (char *)(ulonglong)uVar3;
  pbVar1 = (byte *)(pcVar4 + -0x6ffec8a);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  if (!CARRY1(bVar2,unaff_BL) && *pbVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *pcVar4 = *pcVar4 + (char)uVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

