// Function: FUN_1404d35ec
// Addr: 1404d35ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d35ec(undefined8 param_1)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte in_AL;
  undefined7 in_register_00000001;
  uint unaff_EBP;
  longlong in_FS_OFFSET;
  
  puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + 0xb);
  *puVar1 = *puVar1 & unaff_EBP;
  bVar3 = *(byte *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (byte)param_1;
  pbVar2 = (byte *)(in_FS_OFFSET + CONCAT71(in_register_00000001,in_AL));
  cRam00000001710a3639 =
       cRam00000001710a3639 + (char)((ulonglong)param_1 >> 8) +
       (in_AL < *pbVar2 || (byte)(in_AL - *pbVar2) < CARRY1(bVar3,(byte)param_1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

