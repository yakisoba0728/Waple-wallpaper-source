// Function: FUN_1404a03d8
// Addr: 1404a03d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a03d8(undefined8 param_1,int *param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  undefined2 uVar3;
  char cVar4;
  byte bVar5;
  int in_EAX;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  char cVar10;
  uint uVar11;
  byte bVar13;
  char cVar14;
  byte *unaff_RBX;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  uint *unaff_RDI;
  char *pcVar12;
  
  cVar14 = (char)((ulonglong)param_2 >> 8);
  bVar13 = (byte)param_2;
  *unaff_RDI = *unaff_RDI & (uint)param_1;
  cRam00000001004a0ea9 = cRam00000001004a0ea9 + (char)in_EAX;
  iVar7 = *(int *)unaff_RBX;
  *(char *)(param_2 + 0xb) = (char)param_2[0xb] + cVar14;
  uVar6 = (in_EAX - iVar7) + *(int *)(ulonglong)(uint)(in_EAX - iVar7);
  cVar10 = (char)param_1 + (char)*param_2;
  uRam00000001a45f03fa = uRam00000001a45f03fa & (uint)param_2;
  iVar7 = (uVar6 | *(uint *)(ulonglong)uVar6) + 0x72000c54;
  uVar2 = (undefined3)((uint)iVar7 >> 8);
  cVar4 = (char)iVar7 + -3;
  uVar6 = CONCAT31(uVar2,cVar4);
  unaff_RBX[0x800032d] = unaff_RBX[0x800032d] + cVar10;
  uVar11 = (int)CONCAT71((int7)((ulonglong)param_1 >> 8),cVar10) + *param_2;
  pcVar12 = (char *)(ulonglong)uVar11;
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 & uVar6;
  uVar6 = CONCAT31(uVar2,cVar4);
  piVar8 = (int *)(ulonglong)uVar6;
  unaff_RBX[(longlong)pcVar12] = unaff_RBX[(longlong)pcVar12] + (char)((uint)iVar7 >> 8);
  pbVar1 = (byte *)(pcVar12 + CONCAT44(unaff_00000024,unaff_ESP));
  bVar5 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar13;
  if (!CARRY1(bVar5,bVar13)) {
    uVar6 = uVar6 + *piVar8;
    piVar8 = (int *)(ulonglong)uVar6;
    *pcVar12 = *pcVar12 + (char)unaff_ESP;
    *(char *)piVar8 = (char)*piVar8 + (char)uVar6;
    *(char *)(param_2 + 0xb) = (char)param_2[0xb] + cVar14;
    uVar6 = uVar6 + *piVar8;
    *pcVar12 = *pcVar12 + (char)unaff_ESP;
    bVar5 = (byte)uVar6;
    *(char *)((ulonglong)uVar6 * 2) = *(char *)((ulonglong)uVar6 * 2) + bVar5;
    uVar3 = (undefined2)(uVar6 >> 0x10);
    cVar4 = (char)(uVar6 >> 8) + bVar13;
    uVar6 = CONCAT22(uVar3,CONCAT11(cVar4,bVar5));
    *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
    uVar6 = CONCAT22(uVar3,CONCAT11(cVar4 + bVar5,bVar5));
    piVar8 = (int *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar5 | *(byte *)(ulonglong)uVar6);
    *unaff_RBX = *unaff_RBX >> 3;
    *(char *)(param_2 + 0xb) = (char)param_2[0xb] + cVar14;
  }
  uVar6 = (int)piVar8 + *piVar8;
  puVar9 = (uint *)(ulonglong)uVar6;
  iVar7 = *param_2;
  *puVar9 = *puVar9 & uVar6;
  *(char *)puVar9 = (char)*puVar9 + (char)uVar6;
  *unaff_RBX = *unaff_RBX >> 3;
  *(char *)(param_2 + 0xb) = (char)param_2[0xb] + cVar14;
  iRam00000000d2570464 =
       iRam00000000d2570464 +
       CONCAT31((int3)(uVar11 >> 8),(char)uVar11 + (char)iVar7 + (char)*param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

