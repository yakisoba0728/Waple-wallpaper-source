// Function: FUN_1404a3cb8
// Addr: 1404a3cb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3cb8(char param_1,char *param_2)

{
  int in_EAX;
  uint uVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  int *unaff_RSI;
  byte in_CF;
  undefined1 auStack_8 [8];
  
  uVar1 = in_EAX + (int)&stack0x00000000 + (uint)in_CF;
  cRam000000014baa4931 = cRam000000014baa4931 + param_1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *unaff_RSI = *unaff_RSI + (int)auStack_8;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) =
       *(int *)CONCAT71(unaff_00000019,unaff_BL) + (int)auStack_8;
  *param_2 = *param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

