// Function: FUN_1404b3d7c
// Addr: 1404b3d7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3d7c(char *param_1,int *param_2)

{
  int *piVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_ESP;
  
  piVar1 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0xe781400);
  *piVar1 = *piVar1 + (int)param_2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_2;
  *param_2 = *param_2 + unaff_ESP;
  *param_1 = *param_1 + (char)param_1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ in_AL;
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

