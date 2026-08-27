// Function: FUN_140334a80
// Addr: 140334a80
// Size: 554 bytes


void FUN_140334a80(longlong param_1,longlong param_2,longlong param_3,int *param_4,char *param_5,
                  int param_6)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  undefined8 local_2c;
  
  piVar1 = *(int **)(param_2 + 0x10);
  iVar10 = 0;
  uVar12 = *(longlong *)(param_2 + 0x18) - (longlong)piVar1 >> 3;
  bVar9 = (byte)uVar12 & 1;
  iVar11 = 0;
  if (((*(char *)(param_1 + 0xc) == '\0') && ((uVar12 & 1) != 0)) && (*param_5 == '\0')) {
    if ((uint)uVar12 == 0) {
      piVar1 = *(int **)(param_2 + 8);
      iVar5 = iVar11;
      if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
        *piVar1 = 0x82;
      }
    }
    else {
      iVar5 = *piVar1;
      if (piVar1[1] == 1) {
        iVar5 = iVar5 + (iVar5 >> 0x1f) + 0x2000 >> 0xe;
      }
      else if (piVar1[1] == 2) {
        iVar5 = iVar5 << 0x10;
      }
    }
    *param_4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x328) + 0x21c) * 0x10000 +
               iVar5;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xf0) + 0x340) == '\0') {
    uVar8 = (ulonglong)bVar9;
    uVar7 = (uint)bVar9;
    while (uVar7 < (uint)uVar12) {
      lVar4 = *(longlong *)(param_2 + 0x18);
      lVar6 = *(longlong *)(param_2 + 0x10);
      uVar7 = (uint)uVar8;
      if (uVar7 < (uint)(lVar4 - lVar6 >> 3)) {
        iVar5 = *(int *)(lVar6 + 4 + uVar8 * 8);
        piVar1 = (int *)(lVar6 + uVar8 * 8);
        if (iVar5 == 1) {
          iVar5 = *piVar1;
          local_34 = iVar5 + (iVar5 >> 0x1f) + 0x2000 >> 0xe;
        }
        else {
          local_34 = *piVar1;
          if (iVar5 == 2) {
            local_34 = local_34 << 0x10;
          }
        }
      }
      else {
        piVar1 = *(int **)(param_2 + 8);
        local_34 = iVar10;
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
          *piVar1 = 0x82;
          lVar6 = *(longlong *)(param_2 + 0x10);
          lVar4 = *(longlong *)(param_2 + 0x18);
        }
      }
      uVar3 = uVar7 + 1;
      local_34 = local_34 + param_6;
      if (uVar3 < (uint)(lVar4 - lVar6 >> 3)) {
        iVar5 = *(int *)(lVar6 + 4 + (ulonglong)uVar3 * 8);
        param_6 = *(int *)(lVar6 + (ulonglong)uVar3 * 8);
        if (iVar5 == 1) {
          param_6 = param_6 + (param_6 >> 0x1f) + 0x2000 >> 0xe;
        }
        else if (iVar5 == 2) {
          param_6 = param_6 << 0x10;
        }
      }
      else {
        piVar1 = *(int **)(param_2 + 8);
        param_6 = iVar11;
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
          *piVar1 = 0x82;
        }
      }
      param_6 = local_34 + param_6;
      local_38[0] = 0;
      local_2c = 0;
      local_30 = param_6;
      if ((*(longlong *)(param_3 + 0x20) != *(longlong *)(param_3 + 0x18)) ||
         (cVar2 = FUN_140333ae0(param_3,*(longlong *)(param_3 + 0x18) * 2 + 0x10), cVar2 != '\0')) {
        FUN_1404210f0(*(longlong *)(param_3 + 0x10) * *(longlong *)(param_3 + 0x20) +
                      *(longlong *)(param_3 + 0x30),local_38);
        *(longlong *)(param_3 + 0x20) = *(longlong *)(param_3 + 0x20) + 1;
      }
      uVar7 = uVar7 + 2;
      uVar8 = (ulonglong)uVar7;
    }
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  }
  *param_5 = '\x01';
  return;
}

