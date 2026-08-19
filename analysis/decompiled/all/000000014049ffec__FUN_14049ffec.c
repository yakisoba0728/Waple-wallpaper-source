// Function: FUN_14049ffec
// Addr: 14049ffec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a0082) */

void FUN_14049ffec(int *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  char cVar7;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  byte *pbVar6;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined6 uVar11;
  byte unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  longlong unaff_RDI;
  uint *puVar5;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2 + unaff_BL;
  cVar1 = (char)(in_EAX + 0xd0000ef4) + (0x2ffff10b < in_EAX) + '\x06' +
          CARRY1((byte)param_2,unaff_BL);
  *(char *)(unaff_RDI * 9) = *(char *)(unaff_RDI * 9) + cVar1;
  *param_4 = *param_4 + unaff_SPL;
  uVar3 = CONCAT31((int3)(in_EAX + 0xd0000ef4 >> 8),cVar1) + 0xd4050002;
  uVar4 = uVar3 | 0x314da00;
  puVar5 = (uint *)(ulonglong)uVar4;
  cVar1 = (char)(uVar4 >> 8);
  *(char *)((longlong)param_1 + 0x18000315) = *(char *)((longlong)param_1 + 0x18000315) + cVar1;
  *param_1 = *param_1 + -1;
  *puVar5 = *puVar5 & uVar4;
  bVar2 = (char)uVar3 + (char)*puVar5;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(cVar1 + bVar8,bVar2)) | 0x314da00;
  puVar5 = (uint *)(ulonglong)uVar4;
  cVar7 = (char)(uVar4 >> 8);
  *(char *)((longlong)param_1 + 0x18000315) = *(char *)((longlong)param_1 + 0x18000315) + cVar7;
  *param_1 = *param_1 + -1;
  *puVar5 = *puVar5 & uVar4;
  *(byte *)puVar5 = (byte)*puVar5 + bVar2;
  *(char *)((longlong)param_1 + 0x18000315) = *(char *)((longlong)param_1 + 0x18000315) + cVar7;
  *param_1 = *param_1 + -1;
  *puVar5 = *puVar5 & uVar4;
  uVar3 = *puVar5;
  *(byte *)puVar5 = (byte)*puVar5 + bVar2;
  pbVar6 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + (longlong)puVar5);
  *pbVar6 = *pbVar6 << 1 | CARRY1((byte)uVar3,bVar2);
  bVar9 = bVar8 + unaff_BL;
  cVar1 = bVar2 + 3 + CARRY1(bVar8,unaff_BL);
  pbVar6 = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar1);
  *(char *)(unaff_RDI * 9) = *(char *)(unaff_RDI * 9) + cVar1;
  *param_4 = *param_4 + unaff_SPL;
  *pbVar6 = *pbVar6 + cVar1;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar10;
  bVar2 = cVar1 + '\x03' + CARRY1(bVar2,bVar10);
  cVar1 = bVar2 + bVar9 + '\x03' + CARRY1(bVar2,bVar9);
  *(char *)param_1 = (char)*param_1 + -1;
  *(int *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(int *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + (int)param_1;
  bVar10 = bVar10 | *(byte *)((ulonglong)
                              CONCAT31((int3)(CONCAT22((short)(uVar4 >> 0x10),
                                                       CONCAT11(cVar7 + bVar10,cVar1)) >> 8),cVar1)
                             + (longlong)param_1);
  *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

