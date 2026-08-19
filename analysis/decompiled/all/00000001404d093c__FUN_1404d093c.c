// Function: FUN_1404d093c
// Addr: 1404d093c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d0946) overlaps instruction at (ram,0x0001404d0943)
    */

void FUN_1404d093c(byte param_1,undefined8 param_2,char *param_3,char param_4)

{
  byte *unaff_RBP;
  byte *unaff_RSI;
  longlong in_R11;
  char unaff_R13B;
  bool in_OF;
  
  if (in_OF) {
    *unaff_RBP = *unaff_RBP | param_1;
    *unaff_RSI = *unaff_RSI | param_1;
  }
  else {
    *param_3 = *param_3 + unaff_R13B;
    if (*param_3 < '\0') {
      *(char *)(in_R11 + 0x8004d08) = *(char *)(in_R11 + 0x8004d08) + param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

