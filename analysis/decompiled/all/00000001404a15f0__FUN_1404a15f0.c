// Function: FUN_1404a15f0
// Addr: 1404a15f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a15f0(char param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  char unaff_BH;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  pcVar1 = (char *)in(3);
  pcVar1[0x21004a09] = pcVar1[0x21004a09] + unaff_BH;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *pcVar1 = *pcVar1 + (char)param_2;
  in(3);
  *(char *)(param_2 + -0x1b) = *(char *)(param_2 + -0x1b) + param_1;
  cRam0000000042009412 = cRam0000000042009412 + '\t';
  *(char *)(unaff_RDI + 0x21004a09) =
       *(char *)(unaff_RDI + 0x21004a09) + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + 0x21004a09) = *(char *)(unaff_RSI + 0x21004a09) + 'J';
  lVar2 = in(3);
  *(char *)(lVar2 + 0x1004a09) = *(char *)(lVar2 + 0x1004a09) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

