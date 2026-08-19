// Function: FUN_1404a5f74
// Addr: 1404a5f74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5f74(void)

{
  code *pcVar1;
  char cVar2;
  char *unaff_RBX;
  
  pcVar1 = (code *)swi(8);
  cVar2 = (*pcVar1)();
  *unaff_RBX = *unaff_RBX + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

