// Function: FUN_1404b7a00
// Addr: 1404b7a00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7a00(char *param_1,longlong param_2)

{
  uint *in_RAX;
  byte unaff_BL;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(byte *)(param_2 + -0x65b6ffe3) = *(byte *)(param_2 + -0x65b6ffe3) ^ unaff_BL;
  *param_1 = *param_1 + (char)((uint)in_RAX + 0xb619cc00 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

