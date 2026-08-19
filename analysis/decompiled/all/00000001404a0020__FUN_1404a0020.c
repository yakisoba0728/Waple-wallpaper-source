// Function: FUN_1404a0020
// Addr: 1404a0020
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a0082) */

void FUN_1404a0020(int *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char cVar6;
  char *in_RAX;
  undefined7 uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined6 uVar11;
  byte unaff_BL;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RDI;
  char in_CF;
  uint *puVar4;
  byte *pbVar5;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar8 = (byte)param_2 + unaff_BL;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (char)in_RAX + '\x03' + CARRY1((byte)param_2,unaff_BL);
  puVar4 = (uint *)CONCAT71(uVar7,bVar2);
  cVar6 = (char)((ulonglong)in_RAX >> 8);
  *(char *)((longlong)param_1 + 0x18000315) = *(char *)((longlong)param_1 + 0x18000315) + cVar6;
  *param_1 = *param_1 + -1;
  *puVar4 = *puVar4 & (uint)puVar4;
  uVar1 = *puVar4;
  *(byte *)puVar4 = (byte)*puVar4 + bVar2;
  pbVar5 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(-in_CF,unaff_BL)) + (longlong)puVar4);
  *pbVar5 = *pbVar5 << 1 | CARRY1((byte)uVar1,bVar2);
  bVar9 = bVar8 + unaff_BL;
  cVar3 = bVar2 + 3 + CARRY1(bVar8,unaff_BL);
  pbVar5 = (byte *)CONCAT71(uVar7,cVar3);
  *(char *)(unaff_RDI * 9) = *(char *)(unaff_RDI * 9) + cVar3;
  *param_4 = *param_4 + unaff_SPL;
  *pbVar5 = *pbVar5 + cVar3;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar10;
  bVar2 = cVar3 + '\x03' + CARRY1(bVar2,bVar10);
  cVar3 = bVar2 + bVar9 + '\x03' + CARRY1(bVar2,bVar9);
  *(char *)param_1 = (char)*param_1 + -1;
  *(int *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(int *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + (int)param_1;
  bVar10 = bVar10 | *(byte *)(CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                                       CONCAT11(cVar6 + bVar10,cVar3)) >> 8),cVar3)
                             + (longlong)param_1);
  *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

