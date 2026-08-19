// Function: FUN_1404d4de0
// Addr: 1404d4de0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4de0(undefined8 param_1,int param_2)

{
  int *piVar1;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte in_CF;
  
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       (*(int *)CONCAT44(unaff_00000034,unaff_ESI) - unaff_ESI) - (uint)in_CF;
  piVar1 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + 3);
  *piVar1 = *piVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

