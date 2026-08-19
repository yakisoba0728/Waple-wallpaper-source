// Function: FUN_1404c8ab8
// Addr: 1404c8ab8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8ab8(void)

{
  byte in_AL;
  undefined7 in_register_00000001;
  int *unaff_RBX;
  int unaff_EDI;
  
  *unaff_RBX = *unaff_RBX + unaff_EDI;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

