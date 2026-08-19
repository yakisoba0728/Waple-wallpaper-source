// Function: FUN_1404a11ac
// Addr: 1404a11ac
// Size: 1 bytes


int FUN_1404a11ac(undefined1 *param_1,longlong param_2)

{
  undefined2 uVar1;
  char cVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  byte *pbVar7;
  char cVar8;
  char *unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  longlong in_FS_OFFSET;
  byte in_CF;
  uint *puVar5;
  int *piVar6;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  uVar4 = in_EAX + (int)&stack0x00000000 + (uint)in_CF;
  puVar5 = (uint *)(ulonglong)uVar4;
  *puVar5 = *puVar5 | uVar4;
  *unaff_RBX = *unaff_RBX + (char)param_1;
  uVar4 = uVar4 | *(uint *)(in_FS_OFFSET + (longlong)puVar5);
  bVar3 = (byte)uVar4;
  cVar2 = bVar3 + 0x34;
  uRam0021004a10c80003 = CONCAT31((int3)(uVar4 >> 8),cVar2);
  piVar6 = (int *)(ulonglong)uRam0021004a10c80003;
  *(char *)piVar6 = (char)*piVar6 + cVar2 + (0xcb < bVar3);
  uRam10c80003a36f0003 = uRam0021004a10c80003;
  *param_1 = *param_1;
  *(char *)piVar6 = (char)*piVar6 + cVar2;
  *(char *)((longlong)piVar6 + -0x5d) = *(char *)((longlong)piVar6 + -0x5d) + cVar2;
  uRam0021004a10c80003 = uRam0021004a10c80003 + *piVar6;
  out(*unaff_RSI,(short)param_2);
  bVar3 = (byte)uRam0021004a10c80003 | *(byte *)(ulonglong)uRam0021004a10c80003;
  uVar1 = (undefined2)(uRam0021004a10c80003 >> 0x10);
  cVar2 = (char)(uRam0021004a10c80003 >> 8) + (char)param_2;
  pbVar7 = (byte *)(ulonglong)CONCAT22(uVar1,CONCAT11(cVar2,bVar3));
  *pbVar7 = *pbVar7 | bVar3;
  cVar2 = cVar2 + bVar3;
  uRam0521004a10c80003 = CONCAT22(uVar1,CONCAT11(cVar2,bVar3));
  puVar5 = (uint *)(ulonglong)uRam0521004a10c80003;
  *puVar5 = *puVar5 | uRam0521004a10c80003;
  param_1[param_2] = param_1[param_2] + cVar8;
  unaff_RBX[(longlong)param_1] = unaff_RBX[(longlong)param_1] + cVar2;
  *(char *)((longlong)puVar5 + param_2) = *(char *)((longlong)puVar5 + param_2) + cVar8;
  *(char *)((longlong)puVar5 + -0x5d) = *(char *)((longlong)puVar5 + -0x5d) + bVar3;
  uRam0521004a10c80003 = uRam0521004a10c80003 + *puVar5;
  out(unaff_RSI[1],(short)param_2);
  uVar4 = CONCAT31((int3)(uRam0521004a10c80003 >> 8),
                   (char)uRam0521004a10c80003 + *(char *)(ulonglong)uRam0521004a10c80003) +
          0xa0000674;
  *unaff_RDI = unaff_RSI[2];
  return uVar4 + *(int *)(ulonglong)uVar4;
}

