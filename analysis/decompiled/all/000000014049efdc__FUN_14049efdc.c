// Function: FUN_14049efdc
// Addr: 14049efdc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049efdc(undefined8 param_1,int param_2)

{
  longlong in_RAX;
  
  *(int *)(in_RAX + 0xb) = *(int *)(in_RAX + 0xb) + param_2;
  *(char *)(in_RAX + -0xc) = *(char *)(in_RAX + -0xc) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

