// Function: FUN_1404cc294
// Addr: 1404cc294
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc294(char *param_1,char param_2)

{
  int unaff_ESI;
  undefined4 unaff_00000034;
  undefined1 *unaff_RDI;
  
  *(int *)(param_1 + CONCAT44(unaff_00000034,unaff_ESI)) =
       *(int *)(param_1 + CONCAT44(unaff_00000034,unaff_ESI)) + unaff_ESI;
  *param_1 = *param_1 + param_2;
  *unaff_RDI = *unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

