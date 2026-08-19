// Function: FUN_14049f670
// Addr: 14049f670
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f670(undefined8 param_1,longlong param_2)

{
  int in_EAX;
  undefined4 in_register_00000004;
  
  *(byte *)(param_2 + -0x6dcbffff) = *(byte *)(param_2 + -0x6dcbffff) & (byte)param_2;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

