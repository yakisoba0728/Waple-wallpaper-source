// Function: FUN_1404bdc38
// Addr: 1404bdc38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdc38(undefined8 param_1,longlong param_2)

{
  char in_AH;
  char unaff_BL;
  char *unaff_RDI;
  
  *(char *)(param_2 + 0x25) = *(char *)(param_2 + 0x25) + in_AH * '\x02';
  *unaff_RDI = *unaff_RDI + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

