// Function: FUN_1404cf35c
// Addr: 1404cf35c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf35c(char param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  char *unaff_RDI;
  bool in_ZF;
  
  if (in_ZF) {
    *(char *)(unaff_RSI + 0x50003c75) = *(char *)(unaff_RSI + 0x50003c75) + param_1;
    *param_4 = *param_4 + -8;
    *(char *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x75);
    *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

