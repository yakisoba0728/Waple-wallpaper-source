// Function: FUN_1404d53bc
// Addr: 1404d53bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d53bc(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  char unaff_R12B;
  
  *(char *)(param_1 + 0x43) = *(char *)(param_1 + 0x43) + unaff_BL;
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH + in_AL,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH + in_AL,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

