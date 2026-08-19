// Function: FUN_1404cfe54
// Addr: 1404cfe54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfe54(uint param_1,uint *param_2)

{
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *param_2 = *param_2 & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

