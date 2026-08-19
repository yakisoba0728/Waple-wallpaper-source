// Function: FUN_1404c547c
// Addr: 1404c547c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c547c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 in_RAX;
  char *pcVar3;
  longlong unaff_RBX;
  int *unaff_RSI;
  
  cVar2 = cRam2500000001002edc;
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cRam2500000001002edc);
  pcVar1 = (char *)(unaff_RBX + 0x2e + (longlong)unaff_RSI);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)((longlong)unaff_RSI + 0x4237) =
       *(char *)((longlong)unaff_RSI + 0x4237) + (char)((ulonglong)param_1 >> 8);
  *pcVar3 = *pcVar3 + cVar2;
  *param_1 = *param_1 + cVar2;
  *unaff_RSI = *unaff_RSI + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

