// Function: FUN_1404d277c
// Addr: 1404d277c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d277c(char *param_1,uint param_2)

{
  char in_AL;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  byte in_CF;
  
  *(uint *)(param_1 + unaff_RDI) = *(int *)(param_1 + unaff_RDI) + unaff_ESI + (uint)in_CF;
  *param_1 = *param_1 + (char)param_2;
  *(int *)(param_1 + (ulonglong)(param_2 | 0xb600c70) + 0xee49c00) =
       *(int *)(param_1 + (ulonglong)(param_2 | 0xb600c70) + 0xee49c00) + unaff_EBX;
  *param_1 = *param_1 + in_AL;
  *param_1 = *param_1 + in_AL;
  *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

