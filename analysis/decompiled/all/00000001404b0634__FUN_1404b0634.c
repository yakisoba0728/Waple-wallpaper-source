// Function: FUN_1404b0634
// Addr: 1404b0634
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0634(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x15);
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + -0x6bffea8d) = *(char *)(unaff_RSI + -0x6bffea8d) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

