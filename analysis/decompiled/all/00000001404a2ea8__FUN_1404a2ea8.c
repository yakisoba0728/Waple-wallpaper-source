// Function: FUN_1404a2ea8
// Addr: 1404a2ea8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2ea8(char *param_1)

{
  byte bVar1;
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar1 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar1;
  param_1[-0x7e2cfffb] = param_1[-0x7e2cfffb] ^ bVar1;
  *param_1 = *param_1 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

