// Function: FUN_1404d66d0
// Addr: 1404d66d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d66d0(char *param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) >> 1;
  *(char *)(param_2 + -0x2f) = *(char *)(param_2 + -0x2f) + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_AH;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + in_AL;
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)CONCAT62(in_register_00000002,CONCAT11(in_AH + (char)param_2,in_AL)) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

