// Function: FUN_1404cfa94
// Addr: 1404cfa94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404cfb29) */

void FUN_1404cfa94(char *param_1,char *param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BPL;
  char *unaff_RSI;
  char *unaff_RDI;
  char unaff_R13B;
  
  *param_2 = *param_2 + (char)param_1;
  if ((in_AL | 0x50) == 0) {
    *unaff_RDI = *unaff_RDI + (char)param_1;
    *(char *)(CONCAT71(in_register_00000001,in_AL) | 0x50) =
         *(char *)(CONCAT71(in_register_00000001,in_AL) | 0x50) + (char)param_2;
    pcVar1 = (char *)((CONCAT71(in_register_00000001,in_AL) | 0x50) + 0x31);
    *pcVar1 = *pcVar1 + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[0x39c03e02] = param_1[0x39c03e02] + (in_AL | 0x50);
  *unaff_RSI = *unaff_RSI + unaff_BPL;
  *param_1 = *param_1 >> 1;
  *unaff_RSI = *unaff_RSI + unaff_BPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

