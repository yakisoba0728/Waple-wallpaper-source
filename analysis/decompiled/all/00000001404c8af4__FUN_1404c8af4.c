// Function: FUN_1404c8af4
// Addr: 1404c8af4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8af4(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  byte bVar2;
  longlong unaff_RDI;
  char in_CF;
  
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + bVar2 + in_CF;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)param_2;
  pbVar1 = (byte *)((CONCAT71(in_register_00000001,in_AL) | 0xf0) + 7);
  *pbVar1 = *pbVar1 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

