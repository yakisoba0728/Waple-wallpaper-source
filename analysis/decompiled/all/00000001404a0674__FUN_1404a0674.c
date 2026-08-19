// Function: FUN_1404a0674
// Addr: 1404a0674
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0674(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  uint *puVar5;
  longlong unaff_RBX;
  undefined2 in_ES;
  byte *pbVar6;
  
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x2c);
  uVar4 = ((uint)puVar5 | *puVar5) + 0xc0000a54;
  pbVar6 = (byte *)(ulonglong)uVar4;
  bVar3 = (byte)uVar4;
  uRam00000001406b06d8 = in_ES;
  *pbVar6 = *pbVar6 + bVar3;
  pbVar1 = pbVar6 + unaff_RBX;
  *pbVar1 = *pbVar1 >> 5 | *pbVar1 << 3;
  uRam00000001406b06e8 = in_ES;
  *pbVar6 = *pbVar6 | bVar3;
  uVar2 = CONCAT22((short)(uVar4 >> 0x10),
                   CONCAT11(((char)(uVar4 >> 8) + (char)((ulonglong)param_2 >> 8)) * '\x02' +
                            (char)param_2,bVar3));
  uVar4 = *(uint *)(ulonglong)uVar2;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
  pbVar1 = (byte *)(unaff_RBX + (ulonglong)(uVar2 | uVar4));
  *pbVar1 = *pbVar1 >> 5 | *pbVar1 << 3;
  uRam00000001504b0708 = in_ES;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

