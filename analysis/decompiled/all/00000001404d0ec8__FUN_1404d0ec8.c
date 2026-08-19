// Function: FUN_1404d0ec8
// Addr: 1404d0ec8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0ec8(byte param_1,undefined8 param_2,char param_3,char *param_4)

{
  byte *unaff_RBX;
  char *unaff_RDI;
  
  *param_4 = *param_4 + param_3;
  *unaff_RDI = *unaff_RDI + param_1;
  *unaff_RBX = *unaff_RBX >> (param_1 & 7) | *unaff_RBX << 8 - (param_1 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

