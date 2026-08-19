// Function: FUN_1404ab2e0
// Addr: 1404ab2e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab2e0(void)

{
  byte in_AL;
  undefined7 in_register_00000001;
  uint *unaff_RBX;
  uint unaff_EBP;
  
  *unaff_RBX = *unaff_RBX & unaff_EBP;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

