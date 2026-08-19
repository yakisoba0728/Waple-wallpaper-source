// Function: FUN_1404a3a94
// Addr: 1404a3a94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3a94(uint param_1)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

