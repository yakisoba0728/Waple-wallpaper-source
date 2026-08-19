// Function: FUN_1404c64f8
// Addr: 1404c64f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c64f8(longlong param_1,int param_2)

{
  byte *pbVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  byte bVar2;
  longlong unaff_RSI;
  
  bVar2 = (byte)((uint)param_2 >> 8);
  *(int *)CONCAT71(in_register_00000001,in_AL) =
       *(int *)CONCAT71(in_register_00000001,in_AL) + param_2;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + bVar2;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)param_2;
  pbVar1 = (byte *)((CONCAT71(in_register_00000001,in_AL) | 0xe0) + 7);
  *pbVar1 = *pbVar1 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

