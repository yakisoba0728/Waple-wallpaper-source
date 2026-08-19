// Function: FUN_1404b4eb0
// Addr: 1404b4eb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4eb0(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  int in_EAX;
  int iVar2;
  byte unaff_BL;
  char unaff_BH;
  longlong unaff_RSI;
  byte in_CF;
  
  iVar2 = in_EAX + 0x1421004a + (uint)in_CF;
  *param_2 = *param_2 ^ unaff_BL;
  pcVar1 = (char *)((ulonglong)(CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + -0xc) + 0x2f000a54)
                    + 0x1a + unaff_RSI);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

