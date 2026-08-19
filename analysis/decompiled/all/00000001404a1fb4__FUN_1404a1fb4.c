// Function: FUN_1404a1fb4
// Addr: 1404a1fb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1fb4(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar4;
  undefined8 in_RAX;
  undefined7 uVar5;
  uint *puVar3;
  uint uVar6;
  
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (char)in_RAX + 0x60;
  uVar6 = ((uint)param_2 | *(uint *)(param_2 + 0x7005e007)) + *(int *)(CONCAT71(uVar5,bVar2) + 2);
  *param_1 = *param_1 ^ bVar2;
  pbVar1 = (byte *)(CONCAT71(uVar5,bVar2) * 2);
  *pbVar1 = *pbVar1 | bVar2;
  *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 | (byte)(uVar6 >> 8);
  bVar2 = (char)in_RAX - 0x30;
  bVar4 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 ^ bVar4;
  puVar3 = (uint *)CONCAT71(uVar5,(bVar2 | *(byte *)CONCAT71(uVar5,bVar2)) ^ bVar4);
  *puVar3 = *puVar3 | (uint)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

