// Function: FUN_1404ad654
// Addr: 1404ad654
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad654(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + in_AH;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
  uVar1 = *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  uVar2 = *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       uVar2 + 1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) +
       (uint)(CARRY4(uVar1,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ||
             0xfffffffe < uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

