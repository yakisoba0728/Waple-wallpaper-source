// Function: FUN_14049f8c4
// Addr: 14049f8c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f8c4(void)

{
  int in_EAX;
  undefined4 in_register_00000004;
  char unaff_SPL;
  char *in_R9;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  *in_R9 = *in_R9 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

