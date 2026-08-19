// Function: FUN_1404c22a8
// Addr: 1404c22a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c22a8(uint param_1)

{
  uint *puVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  puVar1 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(in_AH * '\x02',in_AL)) + 2 +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH * '\x02',in_AL)));
  *puVar1 = *puVar1 & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

