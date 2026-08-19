// Function: FUN_14049f8d8
// Addr: 14049f8d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f8d8(void)

{
  undefined1 in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX * 2) = *(byte *)(unaff_RBX * 2) | in_AH;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

