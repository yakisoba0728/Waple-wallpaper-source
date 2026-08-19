// Function: FUN_1404ccb54
// Addr: 1404ccb54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ccb54(char *param_1)

{
  byte *pbVar1;
  undefined4 in_EAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RDI;
  
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x35);
  *pbVar1 = *pbVar1 & (byte)param_1;
  *(char *)(unaff_RDI + 0x4b) = *(char *)(unaff_RDI + 0x4b) + (byte)param_1;
  *param_1 = *param_1 + ((byte)((uint)in_EAX >> 8) ^ 0x50);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

