// Function: FUN_1404cee68
// Addr: 1404cee68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ceec5) */
/* WARNING: Removing unreachable block (ram,0x0001404ceed1) */
/* WARNING: Removing unreachable block (ram,0x0001404ceed5) */

void FUN_1404cee68(undefined8 param_1)

{
  char *pcVar1;
  longlong unaff_RBP;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + (char)param_1;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  pcVar1 = (char *)(unaff_RBP * 9 + 0x3168004c);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

