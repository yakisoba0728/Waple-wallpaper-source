// Function: FUN_14049f434
// Addr: 14049f434
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f434(undefined8 param_1,byte param_2)

{
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH | param_2,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH | param_2,in_AL)) - in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

