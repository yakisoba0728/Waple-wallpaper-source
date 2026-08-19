// Function: FUN_1404cc6b8
// Addr: 1404cc6b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc6b8(char *param_1,int param_2)

{
  undefined4 in_EAX;
  char *pcVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  byte *unaff_RSI;
  
  *param_1 = *param_1 + unaff_BL;
  pcVar1 = (char *)(ulonglong)
                   (CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX & *unaff_RSI) ^ 0x4cc5b000);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) = *(int *)CONCAT71(unaff_00000019,unaff_BL) + param_2;
  *param_1 = *param_1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

