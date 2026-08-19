// Function: FUN_1404a03ec
// Addr: 1404a03ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a03ec(undefined8 param_1,int *param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  undefined2 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint *in_RAX;
  int *piVar8;
  uint *puVar9;
  char cVar10;
  uint uVar11;
  byte bVar13;
  char cVar14;
  byte *unaff_RBX;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  char *pcVar12;
  
  cVar14 = (char)((ulonglong)param_2 >> 8);
  bVar13 = (byte)param_2;
  cVar10 = (char)param_1 + (char)*param_2;
  uRam00000001a45f03fa = uRam00000001a45f03fa & (uint)param_2;
  iVar6 = ((uint)in_RAX | *in_RAX) + 0x72000c54;
  uVar2 = (undefined3)((uint)iVar6 >> 8);
  cVar4 = (char)iVar6 + -3;
  uVar7 = CONCAT31(uVar2,cVar4);
  unaff_RBX[0x800032d] = unaff_RBX[0x800032d] + cVar10;
  uVar11 = (int)CONCAT71((int7)((ulonglong)param_1 >> 8),cVar10) + *param_2;
  pcVar12 = (char *)(ulonglong)uVar11;
  *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 & uVar7;
  uVar7 = CONCAT31(uVar2,cVar4);
  piVar8 = (int *)(ulonglong)uVar7;
  unaff_RBX[(longlong)pcVar12] = unaff_RBX[(longlong)pcVar12] + (char)((uint)iVar6 >> 8);
  pbVar1 = (byte *)(pcVar12 + CONCAT44(unaff_00000024,unaff_ESP));
  bVar5 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar13;
  if (!CARRY1(bVar5,bVar13)) {
    uVar7 = uVar7 + *piVar8;
    piVar8 = (int *)(ulonglong)uVar7;
    *pcVar12 = *pcVar12 + (char)unaff_ESP;
    *(char *)piVar8 = (char)*piVar8 + (char)uVar7;
    *(char *)(param_2 + 0xb) = (char)param_2[0xb] + cVar14;
    uVar7 = uVar7 + *piVar8;
    *pcVar12 = *pcVar12 + (char)unaff_ESP;
    bVar5 = (byte)uVar7;
    *(char *)((ulonglong)uVar7 * 2) = *(char *)((ulonglong)uVar7 * 2) + bVar5;
    uVar3 = (undefined2)(uVar7 >> 0x10);
    cVar4 = (char)(uVar7 >> 8) + bVar13;
    uVar7 = CONCAT22(uVar3,CONCAT11(cVar4,bVar5));
    *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
    uVar7 = CONCAT22(uVar3,CONCAT11(cVar4 + bVar5,bVar5));
    piVar8 = (int *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar5 | *(byte *)(ulonglong)uVar7);
    *unaff_RBX = *unaff_RBX >> 3;
    *(char *)(param_2 + 0xb) = (char)param_2[0xb] + cVar14;
  }
  uVar7 = (int)piVar8 + *piVar8;
  puVar9 = (uint *)(ulonglong)uVar7;
  iVar6 = *param_2;
  *puVar9 = *puVar9 & uVar7;
  *(char *)puVar9 = (char)*puVar9 + (char)uVar7;
  *unaff_RBX = *unaff_RBX >> 3;
  *(char *)(param_2 + 0xb) = (char)param_2[0xb] + cVar14;
  iRam00000000d2570464 =
       iRam00000000d2570464 +
       CONCAT31((int3)(uVar11 >> 8),(char)uVar11 + (char)iVar6 + (char)*param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

