// Function: FUN_1404d1478
// Addr: 1404d1478
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1478(undefined8 param_1,ulonglong param_2,undefined8 param_3,char *param_4)

{
  uint in_EAX;
  char *pcVar1;
  char unaff_BH;
  char unaff_SPL;
  char *unaff_RSI;
  char unaff_R12B;
  bool in_SF;
  
  if (!in_SF) {
    *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(param_2 & 0xffffffff);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)in_EAX = *(char *)(ulonglong)in_EAX + (char)pcVar1;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  pcVar1 = (char *)((ulonglong)pcVar1 ^ 0xe);
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

