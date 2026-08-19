// Function: FUN_1404afdec
// Addr: 1404afdec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afdec(void)

{
  int *piVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  piVar1 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) +
                  CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *piVar1 = *piVar1 + unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

