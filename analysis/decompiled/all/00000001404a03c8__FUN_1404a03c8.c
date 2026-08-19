// Function: FUN_1404a03c8
// Addr: 1404a03c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a03c8(undefined8 param_1,int param_2)

{
  longlong in_RAX;
  
  *(int *)(in_RAX + 0x10c21400) = *(int *)(in_RAX + 0x10c21400) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

