// Function: FUN_1404c2eb8
// Addr: 1404c2eb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2eb8(char *param_1)

{
  int in_EAX;
  undefined4 in_register_00000004;
  char unaff_SPL;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) - in_EAX;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

