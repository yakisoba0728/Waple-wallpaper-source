// Function: FUN_1404a7b64
// Addr: 1404a7b64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a7bfc) */

void FUN_1404a7b64(byte *param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  uint uVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar6;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar9 = (undefined1)((ulonglong)param_2 >> 8);
  uVar7 = (uint)param_1;
  uVar5 = in_EAX + 0x800002d4;
  bVar4 = (byte)uVar5 | *(byte *)(ulonglong)uVar5;
  pbVar6 = (byte *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar4);
  LOCK();
  bVar8 = pbVar6[0x7a70000a];
  pbVar6[0x7a70000a] = (byte)param_2;
  UNLOCK();
  *param_1 = *param_1;
  *pbVar6 = *pbVar6 + bVar4;
  pbVar6[-0x79fff570] = pbVar6[-0x79fff570] + bVar4;
  bVar3 = *pbVar6;
  bVar2 = *param_1;
  *param_1 = *param_1 + (bVar4 | bVar3);
  *(uint *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(uVar9,bVar8))) =
       (*(int *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(uVar9,bVar8))) - uVar7) -
       (uint)CARRY1(bVar2,bVar4 | bVar3);
  *param_1 = *param_1 + unaff_BL;
  *param_1 = *param_1 + unaff_BL;
  bVar8 = bVar8 ^ bRam00000001522a8f83;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(uint *)param_1 = *(int *)param_1 + uVar7;
  puVar1 = (uint *)(CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(uVar9,bVar8))) + 5);
  *puVar1 = *puVar1 | CONCAT22(uVar10,CONCAT11(uVar9,bVar8));
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) << 1 |
       *(char *)CONCAT71(unaff_00000019,unaff_BL) < '\0';
  *(uint *)(unaff_RSI + 10) = *(uint *)(unaff_RSI + 10) & uVar7;
  *(char *)(unaff_RSI + 0x74) = *(char *)(unaff_RSI + 0x74) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

