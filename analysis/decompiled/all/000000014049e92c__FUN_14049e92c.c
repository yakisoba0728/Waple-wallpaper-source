// Function: FUN_14049e92c
// Addr: 14049e92c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e93a) overlaps instruction at (ram,0x00014049e939)
    */
/* WARNING: Removing unreachable block (ram,0x00014049e93a) */

void FUN_14049e92c(byte param_1)

{
  byte *unaff_RBX;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  *unaff_RDI = *unaff_RDI + (param_1 ^ *unaff_RBX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

