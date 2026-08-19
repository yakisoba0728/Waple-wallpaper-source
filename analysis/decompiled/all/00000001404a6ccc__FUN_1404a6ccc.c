// Function: FUN_1404a6ccc
// Addr: 1404a6ccc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6ccc(char *param_1)

{
  int in_EAX;
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + (int)param_1;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)param_1;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)param_1;
  *param_1 = *param_1 + (char)((uint)(in_EAX + 0x5640b00) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

