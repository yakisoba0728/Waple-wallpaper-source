// Function: FUN_14049ff04
// Addr: 14049ff04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ff04(byte param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char unaff_SPL;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI >> (param_1 & 0x1f) | *unaff_RDI << 0x20 - (param_1 & 0x1f);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

