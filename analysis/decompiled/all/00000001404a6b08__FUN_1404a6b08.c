// Function: FUN_1404a6b08
// Addr: 1404a6b08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6b08(uint *param_1,uint param_2)

{
  longlong in_RAX;
  
  *(uint *)(in_RAX + 8) = *(uint *)(in_RAX + 8) | (uint)&stack0x00000000;
  *param_1 = *param_1 & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

