// Function: FUN_1404acf04
// Addr: 1404acf04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acf04(void)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x30;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

