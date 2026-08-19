// Function: FUN_1404bcf10
// Addr: 1404bcf10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcf10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *unaff_RBX;
  bool in_SF;
  
  *(char *)(param_3 * 2) = (char)param_1;
  if (in_SF) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

