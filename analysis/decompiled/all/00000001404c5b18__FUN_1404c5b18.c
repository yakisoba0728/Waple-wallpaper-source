// Function: FUN_1404c5b18
// Addr: 1404c5b18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5b18(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  byte bVar3;
  longlong unaff_RDI;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) & (uint)param_1;
  pbVar2 = (byte *)(CONCAT71(in_register_00000001,in_AL) + param_1);
  *pbVar2 = *pbVar2 | bVar3;
  pcVar1 = (char *)(unaff_RDI + CONCAT71(in_register_00000001,in_AL));
  *pcVar1 = *pcVar1 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

