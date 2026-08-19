// Function: FUN_1404cc1ec
// Addr: 1404cc1ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc1ec(longlong param_1,undefined8 param_2,char param_3)

{
  byte in_AL;
  undefined7 in_register_00000001;
  byte *pbVar1;
  uint *unaff_RDI;
  char in_ZF;
  
  pbVar1 = (byte *)(param_1 + -1);
  if (pbVar1 == (byte *)0x0 || in_ZF != '\0') {
    *pbVar1 = *pbVar1 + param_3;
    *pbVar1 = *pbVar1 | in_AL;
    *(char *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + (char)pbVar1;
    *(byte *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    *unaff_RDI = *unaff_RDI & (uint)pbVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar1 = *pbVar1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

