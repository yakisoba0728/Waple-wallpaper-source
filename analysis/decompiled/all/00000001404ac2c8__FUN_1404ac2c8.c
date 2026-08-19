// Function: FUN_1404ac2c8
// Addr: 1404ac2c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac2c8(char *param_1,longlong param_2)

{
  uint *puVar1;
  undefined1 in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  uint unaff_ESI;
  
  puVar1 = (uint *)(param_2 + (longlong)param_1 * 2);
  *puVar1 = *puVar1 & unaff_ESI;
  *param_1 = *param_1 + in_AH;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

