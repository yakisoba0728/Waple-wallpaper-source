// Function: FUN_1404a3c40
// Addr: 1404a3c40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3c40(uint *param_1,char param_2)

{
  byte *in_RAX;
  uint unaff_ESI;
  char *in_R11;
  
  *param_1 = *param_1 & unaff_ESI;
  *in_RAX = *in_RAX | (byte)in_RAX;
  *(uint *)(in_RAX + 0x78220042) = *(uint *)(in_RAX + 0x78220042) ^ (uint)param_1;
  *in_R11 = *in_R11 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

