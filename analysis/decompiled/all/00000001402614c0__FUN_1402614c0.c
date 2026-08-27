// Function: FUN_1402614c0
// Addr: 1402614c0
// Size: 366 bytes


void FUN_1402614c0(longlong *param_1,char param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (param_2 != '\0') {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *param_1 = 0;
    return;
  }
  iVar10 = *(int *)((longlong)param_1 + 0x14);
  lVar7 = param_1[2];
  if ((int)param_1[3] == 0) {
    iVar1 = iVar10 * 4;
    iVar4 = iVar10 * 6;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)iVar4;
    uVar5 = SUB168(ZEXT816(2) * auVar3,0);
    if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    lVar6 = thunk_FUN_14028af20(uVar5);
    uVar11 = 0;
    iVar10 = iVar1;
    if (0 < iVar4) {
      do {
        iVar10 = (int)uVar11;
        uVar9 = (ushort)(uVar11 * 0xaaaaaaab >> 0x20);
        uVar8 = uVar9 & 0xfffc;
        *(ushort *)(lVar6 + (longlong)iVar10 * 2) = uVar8;
        *(ushort *)(lVar6 + 2 + (longlong)iVar10 * 2) = uVar8 | 1;
        uVar9 = uVar9 & 0xfffc | 2;
        *(ushort *)(lVar6 + 4 + (longlong)iVar10 * 2) = uVar9;
        *(ushort *)(lVar6 + 6 + (longlong)iVar10 * 2) = uVar8;
        *(ushort *)(lVar6 + 8 + (longlong)iVar10 * 2) = uVar9;
        uVar11 = (ulonglong)(iVar10 + 6U);
        *(ushort *)(lVar6 + 10 + (longlong)iVar10 * 2) = uVar8 | 3;
      } while ((int)(iVar10 + 6U) < iVar4);
      lVar7 = (**(code **)(**(longlong **)(param_1[1] + 0x1518) + 0x40))
                        (*(longlong **)(param_1[1] + 0x1518),(int)lVar7,0,iVar1,lVar6,iVar4,0,
                         (int)param_1[3],1);
      goto LAB_14026160a;
    }
  }
  else {
    lVar6 = 0;
  }
  lVar7 = (**(code **)(**(longlong **)(param_1[1] + 0x1518) + 0x48))
                    (*(longlong **)(param_1[1] + 0x1518),(int)lVar7,0,iVar10,
                     CONCAT44(uVar12,(int)param_1[3]),1);
LAB_14026160a:
  *param_1 = lVar7;
  thunk_FUN_14028af80(lVar6);
  return;
}

