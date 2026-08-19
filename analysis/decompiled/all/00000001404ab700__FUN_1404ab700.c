// Function: FUN_1404ab700
// Addr: 1404ab700
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ab730) */

void FUN_1404ab700(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  byte *pbVar3;
  uint *puVar4;
  undefined1 uVar7;
  undefined6 uVar8;
  byte bVar9;
  char cVar5;
  undefined6 uVar6;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar7 = (undefined1)param_1;
  uVar6 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar1 = (byte)in_RAX;
  cVar5 = (char)((ulonglong)in_RAX >> 8) + bVar9;
  pbVar3 = (byte *)CONCAT62(uVar6,CONCAT11(cVar5,bVar1));
  *pbVar3 = *pbVar3 | bVar1;
  cVar5 = cVar5 + bVar1;
  puVar4 = (uint *)CONCAT62(uVar6,CONCAT11(cVar5,bVar1));
  *puVar4 = *puVar4 | (uint)puVar4;
  cRam000000016595b71d = cRam000000016595b71d + cVar5;
  verr();
  *(char *)CONCAT62(uVar8,CONCAT11(0x4a,uVar7)) =
       *(char *)CONCAT62(uVar8,CONCAT11(0x4a,uVar7)) + cVar5;
  *(byte *)puVar4 = (char)*puVar4 + bVar1;
  *(char *)puVar4 = (char)*puVar4 + (char)param_2;
  uVar2 = (uint)puVar4 & 0x254b000f;
  verr();
  bVar1 = (byte)uVar2;
  *(byte *)CONCAT62(uVar8,CONCAT11(0x4a,uVar7)) =
       *(char *)CONCAT62(uVar8,CONCAT11(0x4a,uVar7)) + bVar1;
  pbVar3 = (byte *)((ulonglong)uVar2 * 2);
  *pbVar3 = *pbVar3 | bVar1;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

