// Function: FUN_14049ead0
// Addr: 14049ead0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ead0(void)

{
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,0xff) = *(char *)CONCAT71(in_register_00000001,0xff) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

