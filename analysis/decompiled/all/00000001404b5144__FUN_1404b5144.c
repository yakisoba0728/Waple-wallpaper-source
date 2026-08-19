// Function: FUN_1404b5144
// Addr: 1404b5144
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5144(undefined8 param_1,char *param_2)

{
  char unaff_BL;
  int unaff_ESI;
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + 0x34012900) = *(int *)(unaff_RDI + 0x34012900) - unaff_ESI;
  *param_2 = *param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

