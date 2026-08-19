// Function: FUN_1404b39b4
// Addr: 1404b39b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b39b4(void)

{
  char *pcVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BH;
  
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x57fffff8);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

