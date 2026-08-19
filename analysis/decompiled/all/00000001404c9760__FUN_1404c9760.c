// Function: FUN_1404c9760
// Addr: 1404c9760
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c9763) overlaps instruction at (ram,0x0001404c9762)
    */

void FUN_1404c9760(char *param_1,char param_2,char param_3)

{
  uint uVar1;
  uint *in_RAX;
  
  uVar1 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar1;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  while (*in_RAX = *in_RAX ^ uVar1, *in_RAX == 0) {
    *(char *)((longlong)in_RAX + -7) = *(char *)((longlong)in_RAX + -7) + param_2;
  }
  *in_RAX = *in_RAX ^ uVar1;
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

