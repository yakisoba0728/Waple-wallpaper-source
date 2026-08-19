// Function: FUN_1404a1da0
// Addr: 1404a1da0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1da0(char *param_1,ulonglong param_2)

{
  undefined4 in_EAX;
  char *pcVar1;
  char cVar2;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  param_2 = param_2 & 0xffffffff;
  *unaff_RDI = *unaff_RSI;
  cVar2 = (char)param_2 + -0x4a;
  pcVar1 = (char *)CONCAT71((int7)(param_2 >> 8),cVar2);
  *param_1 = *param_1 + (char)(param_2 >> 8);
  *pcVar1 = *pcVar1 + cVar2;
  cVar2 = (char)((uint)in_EAX >> 8);
  *pcVar1 = *pcVar1 + cVar2;
  *param_1 = *param_1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

