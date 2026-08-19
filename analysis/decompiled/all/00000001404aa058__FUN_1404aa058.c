// Function: FUN_1404aa058
// Addr: 1404aa058
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa058(char param_1)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + 0x7800000d) = *(char *)(in_RAX + 0x7800000d) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

