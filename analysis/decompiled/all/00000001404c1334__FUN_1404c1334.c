// Function: FUN_1404c1334
// Addr: 1404c1334
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1334(char *param_1,longlong param_2)

{
  undefined3 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar9;
  undefined8 in_RAX;
  uint *puVar7;
  byte bVar10;
  char cVar11;
  undefined6 uVar12;
  int unaff_EBP;
  char unaff_R12B;
  bool bVar13;
  int *piVar8;
  
  uVar12 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar11 = (char)((ulonglong)param_1 >> 8);
  bVar10 = (byte)param_1;
  puVar7 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 0x1c);
  uVar6 = (uint)((byte)in_RAX < 0xe4);
  uVar5 = (uint)puVar7 + *puVar7;
  bVar13 = CARRY4((uint)puVar7,*puVar7) || CARRY4(uVar5,uVar6);
  iVar4 = uVar5 + uVar6;
  bVar9 = (byte)((uint)iVar4 >> 8);
  bVar3 = (byte)iVar4 - bVar9;
  uVar1 = (undefined3)((uint)iVar4 >> 8);
  cVar2 = bVar3 - bVar13;
  uVar6 = CONCAT31(uVar1,cVar2 + *(char *)(ulonglong)CONCAT31(uVar1,cVar2) +
                         ((byte)iVar4 < bVar9 || bVar3 < bVar13));
  *(byte *)((ulonglong)uVar6 + param_2) = *(byte *)((ulonglong)uVar6 + param_2) | (byte)param_2;
  uVar5 = uVar6 | 0x27002910;
  piVar8 = (int *)(ulonglong)uVar5;
  *param_1 = *param_1 + cVar11;
  *(char *)((longlong)piVar8 + 0x12) = *(char *)((longlong)piVar8 + 0x12) + bVar10;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)piVar8 = (char)*piVar8 + (char)uVar5;
  bVar13 = CARRY1(bRam00000001674c3c65,bVar10);
  bRam00000001674c3c65 = bRam00000001674c3c65 + bVar10;
  *param_1 = *param_1 + cVar11 + bVar13;
  *(char *)((longlong)piVar8 + 0x12) = *(char *)((longlong)piVar8 + 0x12) + bVar10;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)piVar8 = (char)*piVar8 + (char)uVar5;
  *(char *)((longlong)piVar8 + 0xf) = *(char *)((longlong)piVar8 + 0xf) + (char)(uVar5 >> 8);
  *piVar8 = *piVar8 - uVar5;
  uVar6 = uVar6 | 0x37002910;
  cVar2 = bVar10 + *(char *)((ulonglong)uVar6 * 2 + 0x21);
  bVar3 = (byte)uVar6 | *(byte *)((ulonglong)uVar6 * 2);
  *(uint *)CONCAT62(uVar12,CONCAT11(cVar11,cVar2)) =
       *(int *)CONCAT62(uVar12,CONCAT11(cVar11,cVar2)) + unaff_EBP +
       (uint)(0x2ffff7cb < CONCAT31((int3)(uVar6 >> 8),bVar3));
  cRam00000000cc4c3c93 = cRam00000000cc4c3c93 + bVar3 + 0x34;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

