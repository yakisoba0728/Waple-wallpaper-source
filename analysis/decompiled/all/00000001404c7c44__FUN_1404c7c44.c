// Function: FUN_1404c7c44
// Addr: 1404c7c44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7c44(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BH;
  char *in_R9;
  
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) - unaff_BH;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
  *in_R9 = *in_R9 + -0x16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

