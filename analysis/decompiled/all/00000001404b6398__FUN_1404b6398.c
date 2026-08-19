// Function: FUN_1404b6398
// Addr: 1404b6398
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6398(int *param_1)

{
  int *in_RAX;
  
  *param_1 = *param_1 + (int)param_1;
  *(char *)param_1 = (char)*param_1 + (char)((uint)((int)in_RAX + *in_RAX + 0x500460) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

