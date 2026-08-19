// Function: FUN_14049fffc
// Addr: 14049fffc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a0082) */

void FUN_14049fffc(int *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  char cVar7;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined6 uVar11;
  byte unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  longlong unaff_RDI;
  uint *puVar5;
  byte *pbVar6;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  uRam00000001144f0004 = uRam00000001144f0004 & in_EAX;
  uVar3 = in_EAX | 0x314da00;
  puVar5 = (uint *)(ulonglong)uVar3;
  cVar2 = (char)(uVar3 >> 8);
  *(char *)((longlong)param_1 + 0x18000315) = *(char *)((longlong)param_1 + 0x18000315) + cVar2;
  *param_1 = *param_1 + -1;
  *puVar5 = *puVar5 & uVar3;
  bVar1 = (char)in_EAX + (char)*puVar5;
  uVar4 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11(cVar2 + bVar8,bVar1)) | 0x314da00;
  puVar5 = (uint *)(ulonglong)uVar4;
  cVar7 = (char)(uVar4 >> 8);
  *(char *)((longlong)param_1 + 0x18000315) = *(char *)((longlong)param_1 + 0x18000315) + cVar7;
  *param_1 = *param_1 + -1;
  *puVar5 = *puVar5 & uVar4;
  *(byte *)puVar5 = (byte)*puVar5 + bVar1;
  *(char *)((longlong)param_1 + 0x18000315) = *(char *)((longlong)param_1 + 0x18000315) + cVar7;
  *param_1 = *param_1 + -1;
  *puVar5 = *puVar5 & uVar4;
  uVar3 = *puVar5;
  *(byte *)puVar5 = (byte)*puVar5 + bVar1;
  pbVar6 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + (longlong)puVar5);
  *pbVar6 = *pbVar6 << 1 | CARRY1((byte)uVar3,bVar1);
  bVar9 = bVar8 + unaff_BL;
  cVar2 = bVar1 + 3 + CARRY1(bVar8,unaff_BL);
  pbVar6 = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar2);
  *(char *)(unaff_RDI * 9) = *(char *)(unaff_RDI * 9) + cVar2;
  *param_4 = *param_4 + unaff_SPL;
  *pbVar6 = *pbVar6 + cVar2;
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar10;
  bVar1 = cVar2 + '\x03' + CARRY1(bVar1,bVar10);
  cVar2 = bVar1 + bVar9 + '\x03' + CARRY1(bVar1,bVar9);
  *(char *)param_1 = (char)*param_1 + -1;
  *(int *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(int *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + (int)param_1;
  bVar10 = bVar10 | *(byte *)((ulonglong)
                              CONCAT31((int3)(CONCAT22((short)(uVar4 >> 0x10),
                                                       CONCAT11(cVar7 + bVar10,cVar2)) >> 8),cVar2)
                             + (longlong)param_1);
  *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

