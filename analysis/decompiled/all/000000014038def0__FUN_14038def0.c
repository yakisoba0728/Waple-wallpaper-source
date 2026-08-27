// Function: FUN_14038def0
// Addr: 14038def0
// Size: 522 bytes


undefined8
FUN_14038def0(longlong param_1,longlong *param_2,uint param_3,undefined4 *param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *_Buf1;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  
  if ((*(char *)(param_1 + 0x10) == '\0') ||
     ((*(uint *)(param_1 + 0x1c) <= (*(uint *)(param_1 + 0x18) >> 1) + *(int *)(param_1 + 0x18) &&
      (cVar5 = FUN_1403a3d90(), cVar5 == '\0')))) {
LAB_14038e0e7:
    uVar8 = 0;
  }
  else {
    uVar15 = 0;
    uVar11 = 0xffffffff;
    uVar13 = (ulonglong)(param_3 & 0x3fffffff) % (ulonglong)*(uint *)(param_1 + 0x20);
    lVar10 = *(longlong *)(param_1 + 0x28);
    uVar1 = *(uint *)(lVar10 + 8 + uVar13 * 0x10);
    while ((uVar1 >> 1 & 1) != 0) {
      uVar1 = *(uint *)(lVar10 + 8 + uVar13 * 0x10);
      if (uVar1 >> 2 == (param_3 & 0x3fffffff)) {
        puVar3 = *(undefined8 **)(lVar10 + uVar13 * 0x10);
        puVar4 = (undefined8 *)*param_2;
        _Buf1 = (void *)*puVar3;
        if (puVar3[1] - (longlong)_Buf1 == puVar4[1] - (longlong)*puVar4) {
          iVar7 = *(int *)((longlong)puVar4 + 0x14);
          iVar2 = *(int *)((longlong)puVar3 + 0x14);
          if ((iVar2 == iVar7) &&
             ((uVar14 = (int)puVar3[1] - (int)_Buf1, uVar14 == 0 ||
              (iVar6 = memcmp(_Buf1,(void *)*puVar4,(ulonglong)uVar14), iVar6 == 0)))) {
            if ((iVar7 * 0xc == iVar2 * 0xc) &&
               (((iVar2 * 3 & 0x3fffffffU) == 0 ||
                (iVar7 = memcmp((void *)puVar3[3],(void *)puVar4[3],(ulonglong)(uint)(iVar2 * 0xc)),
                iVar7 == 0)))) {
              if (param_5 == '\0') goto LAB_14038e0e7;
              lVar10 = *(longlong *)(param_1 + 0x28);
              break;
            }
          }
        }
        lVar10 = *(longlong *)(param_1 + 0x28);
      }
      if (((uVar1 & 1) == 0) && (uVar11 == 0xffffffff)) {
        uVar11 = (uint)uVar13;
      }
      uVar15 = uVar15 + 1;
      uVar13 = (ulonglong)((uint)uVar13 + uVar15 & *(uint *)(param_1 + 0x1c));
      uVar1 = *(uint *)(lVar10 + 8 + uVar13 * 0x10);
    }
    uVar12 = (ulonglong)uVar11;
    if (uVar11 == 0xffffffff) {
      uVar12 = uVar13;
    }
    plVar9 = (longlong *)(uVar12 * 0x10 + lVar10);
    if ((*(uint *)(plVar9 + 1) >> 1 & 1) != 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (*(byte *)(plVar9 + 1) & 1);
    }
    *plVar9 = *param_2;
    *(undefined4 *)((longlong)plVar9 + 0xc) = *param_4;
    *(uint *)(plVar9 + 1) = param_3 * 4 | 3;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if ((*(ushort *)(param_1 + 0x12) < uVar15) &&
       (*(uint *)(param_1 + 0x1c) < (uint)(*(int *)(param_1 + 0x18) * 8))) {
      FUN_1403a3d90(param_1,*(uint *)(param_1 + 0x1c) - 8);
    }
    uVar8 = 1;
  }
  return uVar8;
}

