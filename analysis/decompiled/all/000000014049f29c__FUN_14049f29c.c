// Function: FUN_14049f29c
// Addr: 14049f29c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f29c(undefined8 param_1,undefined2 param_2)

{
  int *piVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  longlong in_FS_OFFSET;
  
  out(param_2,in_EAX);
  piVar1 = (int *)(in_FS_OFFSET + CONCAT44(in_register_00000004,in_EAX));
  *piVar1 = *piVar1 + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

