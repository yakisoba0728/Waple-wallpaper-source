// Function: FUN_140261250
// Addr: 140261250
// Size: 557 bytes


undefined8 *
FUN_140261250(undefined8 *param_1,undefined4 param_2,int param_3,int param_4,longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar12;
  undefined **local_a8;
  code *local_a0;
  undefined8 *local_90;
  undefined ***local_70;
  undefined1 local_68 [56];
  undefined8 local_30;
  
  lVar2 = param_5;
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar11 = 0;
  param_1[1] = param_5;
  *param_1 = 0;
  *(int *)(param_1 + 3) = param_4;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(int *)((longlong)param_1 + 0x14) = param_3;
  uVar6 = uVar11;
  if (param_4 == 0) {
    iVar4 = param_3 * 6;
    param_3 = param_3 * 4;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)iVar4;
    uVar5 = SUB168(ZEXT816(2) * auVar3,0);
    if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    uVar6 = thunk_FUN_14028af20(uVar5);
    if (0 < iVar4) {
      do {
        iVar10 = (int)uVar11;
        uVar9 = (ushort)(uVar11 * 0xaaaaaaab >> 0x20);
        uVar8 = uVar9 & 0xfffc;
        *(ushort *)(uVar6 + (longlong)iVar10 * 2) = uVar8;
        *(ushort *)(uVar6 + 2 + (longlong)iVar10 * 2) = uVar8 | 1;
        uVar9 = uVar9 & 0xfffc | 2;
        *(ushort *)(uVar6 + 4 + (longlong)iVar10 * 2) = uVar9;
        *(ushort *)(uVar6 + 6 + (longlong)iVar10 * 2) = uVar8;
        *(ushort *)(uVar6 + 8 + (longlong)iVar10 * 2) = uVar9;
        uVar11 = (ulonglong)(iVar10 + 6U);
        *(ushort *)(uVar6 + 10 + (longlong)iVar10 * 2) = uVar8 | 3;
      } while ((int)(iVar10 + 6U) < iVar4);
      uVar5 = (**(code **)(**(longlong **)(param_1[1] + 0x1518) + 0x40))
                        (*(longlong **)(param_1[1] + 0x1518),param_2,0,param_3,uVar6,iVar4,0,
                         *(undefined4 *)(param_1 + 3),1);
      goto LAB_140261399;
    }
  }
  uVar5 = (**(code **)(**(longlong **)(param_1[1] + 0x1518) + 0x48))
                    (*(longlong **)(param_1[1] + 0x1518),param_2,0,param_3,
                     CONCAT44(uVar12,*(undefined4 *)(param_1 + 3)),1);
LAB_140261399:
  *param_1 = uVar5;
  thunk_FUN_14028af80(uVar6);
  plVar1 = *(longlong **)(lVar2 + 0x1518);
  local_a8 = &PTR_FUN_1404920c0;
  local_a0 = FUN_1402614c0;
  local_70 = &local_a8;
  lVar2 = *plVar1;
  local_30 = 0;
  local_90 = param_1;
  local_30 = FUN_140261650(&local_a8,local_68);
  puVar7 = (undefined8 *)(**(code **)(lVar2 + 0x20))(plVar1,&param_5,local_68);
  param_1[4] = *puVar7;
  if (local_70 != (undefined ***)0x0) {
    (*(code *)(*local_70)[4])
              (local_70,CONCAT71((int7)((ulonglong)&local_a8 >> 8),local_70 != &local_a8));
  }
  return param_1;
}

