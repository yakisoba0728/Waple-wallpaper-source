// Function: FUN_140261590
// Addr: 140261590
// Size: 237 bytes


void FUN_140261590(longlong *param_1,char param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar13;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (param_2 != '\0') {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *param_1 = 0;
    return;
  }
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  lVar9 = param_1[2];
  if ((int)param_1[3] == 0) {
    iVar1 = iVar5 * 4;
    iVar4 = iVar5 * 6;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)iVar4;
    uVar7 = SUB168(ZEXT816(2) * auVar3,0);
    if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar8 = FUN_14028b190(uVar7);
    uVar12 = 0;
    iVar5 = iVar1;
    if (0 < iVar4) {
      do {
        iVar5 = (int)uVar12;
        uVar11 = (ushort)(uVar12 * 0xaaaaaaab >> 0x20);
        uVar10 = uVar11 & 0xfffc;
        *(ushort *)(lVar8 + (longlong)iVar5 * 2) = uVar10;
        *(ushort *)(lVar8 + 2 + (longlong)iVar5 * 2) = uVar10 | 1;
        uVar11 = uVar11 & 0xfffc | 2;
        *(ushort *)(lVar8 + 4 + (longlong)iVar5 * 2) = uVar11;
        *(ushort *)(lVar8 + 6 + (longlong)iVar5 * 2) = uVar10;
        *(ushort *)(lVar8 + 8 + (longlong)iVar5 * 2) = uVar11;
        uVar12 = (ulonglong)(iVar5 + 6U);
        *(ushort *)(lVar8 + 10 + (longlong)iVar5 * 2) = uVar10 | 3;
      } while ((int)(iVar5 + 6U) < iVar4);
      lVar9 = (**(code **)(**(longlong **)(param_1[1] + 0x1518) + 0x40))
                        (*(longlong **)(param_1[1] + 0x1518),(int)lVar9,0,iVar1,lVar8,
                         CONCAT44(uVar13,iVar4),0,(int)param_1[3],1);
      goto code_r0x0001402616da;
    }
  }
  else {
    lVar8 = 0;
  }
  lVar9 = (**(code **)(**(longlong **)(param_1[1] + 0x1518) + 0x48))
                    (*(longlong **)(param_1[1] + 0x1518),(int)lVar9,0,iVar5,
                     CONCAT44(uVar6,(int)param_1[3]),1);
code_r0x0001402616da:
  *param_1 = lVar9;
  if ((lVar8 != 0) && (iVar5 = (*DAT_1404264b8)(DAT_1404e4fa0,0,lVar8), iVar5 == 0)) {
    uVar6 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar6);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

