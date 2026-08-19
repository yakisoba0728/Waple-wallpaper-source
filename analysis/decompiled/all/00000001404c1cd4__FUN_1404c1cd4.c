// Function: FUN_1404c1cd4
// Addr: 1404c1cd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1cd4(longlong param_1,int *param_2)

{
  undefined8 in_RAX;
  int *piVar1;
  char *pcVar2;
  char unaff_BH;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  
  piVar1 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x3f);
  *piVar1 = *piVar1 + (int)piVar1;
  *param_2 = *param_2 - (int)piVar1;
  *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + (char)((ulonglong)param_1 >> 8);
  cRam00000001428542ee = cRam00000001428542ee + (char)param_1;
  *(char *)(unaff_RBP + 4) = *(char *)(unaff_RBP + 4) + (char)param_1;
  *(char *)((ulonglong)piVar1 & 0xffffffff) = *(char *)((ulonglong)piVar1 & 0xffffffff) - unaff_BH;
  pcVar2 = (char *)(CONCAT71((int7)((ulonglong)unaff_RSI >> 8),uRam02490003c5263e28) & 0xffffffff);
  *pcVar2 = *pcVar2 - unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

