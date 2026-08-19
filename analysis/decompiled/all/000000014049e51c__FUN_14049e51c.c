// Function: FUN_14049e51c
// Addr: 14049e51c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e51c(undefined8 param_1,longlong param_2)

{
  int in_EAX;
  byte in_CF;
  
  *(int *)(param_2 + 0xd) = *(int *)(param_2 + 0xd) + in_EAX + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

