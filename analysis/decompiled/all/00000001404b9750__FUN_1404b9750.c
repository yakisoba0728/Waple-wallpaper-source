// Function: FUN_1404b9750
// Addr: 1404b9750
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9750(uint param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  
  *(uint *)(param_2 + 0x1f) = *(uint *)(param_2 + 0x1f) ^ param_1;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0xd);
  *pcVar1 = *pcVar1 + in_AH;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

