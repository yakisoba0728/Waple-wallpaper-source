// Function: FUN_1404ba2c8
// Addr: 1404ba2c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba2c8(void)

{
  byte in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char unaff_BH;
  char *unaff_RDI;
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & in_AL;
  if (-1 < *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) {
    *unaff_RDI = *unaff_RDI + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

