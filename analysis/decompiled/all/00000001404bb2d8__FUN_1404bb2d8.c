// Function: FUN_1404bb2d8
// Addr: 1404bb2d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb2d8(void)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  uint unaff_EBP;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

