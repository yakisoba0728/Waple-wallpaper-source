// Function: FUN_14049f7a4
// Addr: 14049f7a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f7a4(undefined8 param_1,byte param_2)

{
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH & param_2,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH & param_2,in_AL)) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

