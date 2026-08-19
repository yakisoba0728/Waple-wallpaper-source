// Function: FUN_1404c2aa0
// Addr: 1404c2aa0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2aa0(undefined8 param_1,undefined1 *param_2)

{
  byte in_AL;
  byte bVar1;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  bVar1 = in_AL | *(byte *)(CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x4f);
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1));
  *param_2 = *param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

