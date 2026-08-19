// Function: FUN_1404adf58
// Addr: 1404adf58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adf58(char *param_1)

{
  char in_AL;
  byte bVar1;
  char in_AH;
  undefined6 in_register_00000002;
  
  bVar1 = in_AL + 0x70;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) ^ bVar1;
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

