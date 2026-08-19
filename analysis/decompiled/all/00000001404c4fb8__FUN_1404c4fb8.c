// Function: FUN_1404c4fb8
// Addr: 1404c4fb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4fb8(int param_1,longlong param_2)

{
  char in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       param_1;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)(param_2 + 0xf110000) = *(byte *)(param_2 + 0xf110000) | in_AH;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

