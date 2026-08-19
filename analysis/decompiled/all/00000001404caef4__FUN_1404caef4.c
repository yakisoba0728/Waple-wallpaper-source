// Function: FUN_1404caef4
// Addr: 1404caef4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404caef4(undefined8 param_1,char param_2)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH - param_2,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH - param_2,in_AL)) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

