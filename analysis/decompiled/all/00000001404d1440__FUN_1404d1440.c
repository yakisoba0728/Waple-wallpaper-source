// Function: FUN_1404d1440
// Addr: 1404d1440
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1440(undefined8 param_1,int *param_2,undefined8 param_3,char *param_4)

{
  ulonglong in_RAX;
  char *pcVar1;
  char *pcVar2;
  char unaff_BH;
  char unaff_SPL;
  char *unaff_RSI;
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
    *param_2 = *param_2 + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(in_RAX ^ 0xe);
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  pcVar1 = (char *)((ulonglong)param_2 & 0xffffffff);
  pcVar2 = (char *)(CONCAT71((int7)(in_RAX >> 8),(char)((ulonglong)param_2 >> 8) + ':') & 0xffffffff
                   );
  *param_4 = *param_4 + unaff_SPL;
  *pcVar2 = *pcVar2 + (char)pcVar1;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  pcVar1 = (char *)((ulonglong)pcVar1 ^ 0xe);
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

