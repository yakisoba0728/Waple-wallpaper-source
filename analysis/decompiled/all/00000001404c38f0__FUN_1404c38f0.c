// Function: FUN_1404c38f0
// Addr: 1404c38f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c38f0(void)

{
  byte in_AL;
  undefined7 in_register_00000001;
  int *unaff_RBX;
  int unaff_ESP;
  byte in_CF;
  
  *unaff_RBX = (*unaff_RBX - unaff_ESP) - (uint)in_CF;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

