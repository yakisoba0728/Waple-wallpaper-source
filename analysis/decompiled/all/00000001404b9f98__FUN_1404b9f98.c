// Function: FUN_1404b9f98
// Addr: 1404b9f98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9f98(longlong param_1,int param_2)

{
  longlong in_RAX;
  int *unaff_RBX;
  int unaff_ESP;
  uint unaff_EBP;
  
  *(uint *)(in_RAX + 0x26) = *(uint *)(in_RAX + 0x26) ^ unaff_EBP;
  *unaff_RBX = *unaff_RBX + unaff_ESP;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

