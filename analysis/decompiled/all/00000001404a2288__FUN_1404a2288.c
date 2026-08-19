// Function: FUN_1404a2288
// Addr: 1404a2288
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2288(void)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  uint unaff_EDI;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & unaff_EDI;
  cRam00000001604a3289 = cRam00000001604a3289 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

