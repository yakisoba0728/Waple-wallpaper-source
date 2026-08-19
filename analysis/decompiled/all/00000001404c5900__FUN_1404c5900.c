// Function: FUN_1404c5900
// Addr: 1404c5900
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5900(uint *param_1)

{
  int *piVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  int unaff_ESI;
  
  *param_1 = *param_1 & unaff_EBP;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  piVar1 = (int *)(CONCAT44(unaff_0000002c,unaff_EBP) + CONCAT71(in_register_00000001,in_AL) * 4);
  *piVar1 = *piVar1 - unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

