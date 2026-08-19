// Function: FUN_1404c65cc
// Addr: 1404c65cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c65cc(longlong param_1)

{
  char in_AH;
  char *unaff_RBX;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBX = *unaff_RBX + in_AH;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

