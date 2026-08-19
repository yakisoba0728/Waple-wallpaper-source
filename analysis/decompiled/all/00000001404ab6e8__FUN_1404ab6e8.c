// Function: FUN_1404ab6e8
// Addr: 1404ab6e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ab730) */

void FUN_1404ab6e8(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  char cVar6;
  undefined8 in_RAX;
  undefined6 uVar7;
  byte *pbVar5;
  undefined1 uVar8;
  undefined6 uVar9;
  byte bVar10;
  uint *puVar4;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar8 = (undefined1)param_1;
  bVar1 = (byte)in_RAX;
  uVar7 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar6 = (char)((ulonglong)in_RAX >> 8) + bVar1;
  puVar4 = (uint *)CONCAT62(uVar7,CONCAT11(cVar6,bVar1));
  *puVar4 = *puVar4 | (uint)puVar4;
  pbVar5 = (byte *)(param_1 + param_2);
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar10;
  cRam000000016595b705 = cRam000000016595b705 + cVar6 + CARRY1(bVar2,bVar10);
  verr();
  *(char *)CONCAT62(uVar9,CONCAT11(0x4a,uVar8)) =
       *(char *)CONCAT62(uVar9,CONCAT11(0x4a,uVar8)) + cVar6;
  *(char *)((longlong)puVar4 * 2) = *(char *)((longlong)puVar4 * 2) + bVar1;
  pbVar5 = (byte *)CONCAT62(uVar7,CONCAT11(cVar6 + bVar10,bVar1));
  *pbVar5 = *pbVar5 | bVar1;
  cVar6 = cVar6 + bVar10 + bVar1;
  puVar4 = (uint *)CONCAT62(uVar7,CONCAT11(cVar6,bVar1));
  *puVar4 = *puVar4 | (uint)puVar4;
  cRam000000016595b71d = cRam000000016595b71d + cVar6;
  verr();
  *(char *)CONCAT62(uVar9,CONCAT11(0x4a,uVar8)) =
       *(char *)CONCAT62(uVar9,CONCAT11(0x4a,uVar8)) + cVar6;
  *(byte *)puVar4 = (char)*puVar4 + bVar1;
  *(char *)puVar4 = (char)*puVar4 + (char)param_2;
  uVar3 = (uint)puVar4 & 0x254b000f;
  verr();
  bVar2 = (byte)uVar3;
  *(byte *)CONCAT62(uVar9,CONCAT11(0x4a,uVar8)) =
       *(char *)CONCAT62(uVar9,CONCAT11(0x4a,uVar8)) + bVar2;
  pbVar5 = (byte *)((ulonglong)uVar3 * 2);
  *pbVar5 = *pbVar5 | bVar2;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

