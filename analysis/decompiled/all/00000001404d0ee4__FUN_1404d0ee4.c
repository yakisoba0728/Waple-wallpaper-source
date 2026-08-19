// Function: FUN_1404d0ee4
// Addr: 1404d0ee4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0ee4(byte param_1,undefined2 param_2,char param_3,char *param_4)

{
  byte *unaff_RBX;
  undefined4 *unaff_RSI;
  char *unaff_RDI;
  bool in_ZF;
  
  if (!in_ZF) {
    out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + param_3;
  *unaff_RDI = *unaff_RDI + param_1;
  *unaff_RBX = *unaff_RBX >> (param_1 & 7) | *unaff_RBX << 8 - (param_1 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

