// Function: FUN_1404b508c
// Addr: 1404b508c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b508c(void)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBP;
  undefined8 unaff_retaddr;
  
  *(undefined1 *)(unaff_RBP + 0x1a) = *(undefined1 *)(unaff_RBP + 0x1a);
  *(undefined8 *)(unaff_RBP + 0x1a) = unaff_retaddr;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

