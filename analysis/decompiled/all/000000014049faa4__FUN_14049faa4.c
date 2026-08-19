// Function: FUN_14049faa4
// Addr: 14049faa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049faa4(void)

{
  int in_EAX;
  undefined4 in_register_00000004;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

