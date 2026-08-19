// Function: FUN_14049e8a4
// Addr: 14049e8a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e8a4(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

