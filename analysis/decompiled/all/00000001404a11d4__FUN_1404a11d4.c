// Function: FUN_1404a11d4
// Addr: 1404a11d4
// Size: 1 bytes


int FUN_1404a11d4(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  byte *pbVar3;
  uint *puVar4;
  char cVar7;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char cVar5;
  undefined6 uVar6;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar1 = (byte)in_RAX | (byte)*in_RAX;
  uVar6 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar5 = (char)((ulonglong)in_RAX >> 8) + (char)param_2;
  pbVar3 = (byte *)CONCAT62(uVar6,CONCAT11(cVar5,bVar1));
  *pbVar3 = *pbVar3 | bVar1;
  cVar5 = cVar5 + bVar1;
  puVar4 = (uint *)CONCAT62(uVar6,CONCAT11(cVar5,bVar1));
  *puVar4 = *puVar4 | (uint)puVar4;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar7;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar5;
  *(char *)((longlong)puVar4 + param_2) = *(char *)((longlong)puVar4 + param_2) + cVar7;
  *(char *)((longlong)puVar4 + -0x5d) = *(char *)((longlong)puVar4 + -0x5d) + bVar1;
  uRam0521004a10c80003 = (uint)puVar4 + *puVar4;
  out(*unaff_RSI,(short)param_2);
  uVar2 = CONCAT31((int3)(uRam0521004a10c80003 >> 8),
                   (char)uRam0521004a10c80003 + *(char *)(ulonglong)uRam0521004a10c80003) +
          0xa0000674;
  *unaff_RDI = unaff_RSI[1];
  return uVar2 + *(int *)(ulonglong)uVar2;
}

