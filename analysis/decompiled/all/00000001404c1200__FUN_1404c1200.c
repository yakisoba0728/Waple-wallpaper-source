// Function: FUN_1404c1200
// Addr: 1404c1200
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1200(void)

{
  int *unaff_RBX;
  int unaff_ESP;
  byte in_CF;
  
  *unaff_RBX = (*unaff_RBX - unaff_ESP) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

