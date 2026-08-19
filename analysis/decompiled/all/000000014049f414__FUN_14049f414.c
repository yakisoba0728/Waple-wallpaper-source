// Function: FUN_14049f414
// Addr: 14049f414
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f414(uint param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  uint *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX & param_1;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

