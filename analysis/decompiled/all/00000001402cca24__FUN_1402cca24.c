// Function: FUN_1402cca24
// Addr: 1402cca24
// Size: 485 bytes


ulonglong FUN_1402cca24(undefined1 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                       longlong *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  
  plVar3 = param_5;
  if ((param_3 == 0) || (param_4 == 0)) {
    param_4 = 0;
  }
  else {
    uVar8 = param_2;
    if (param_1 == (undefined1 *)0x0) {
LAB_1402cca5d:
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004(param_1,uVar8);
    }
    if ((param_5 == (longlong *)0x0) ||
       (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
       auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff), uVar8 = SUB168(auVar2 % auVar1,0),
       SUB168(auVar2 / auVar1,0) < param_4)) {
      if (param_2 != 0xffffffffffffffff) {
        uVar8 = func_0x000140421870(param_1,0,param_2);
        return uVar8;
      }
      if ((param_5 == (longlong *)0x0) ||
         (auVar2._8_8_ = 0, auVar2._0_8_ = param_3,
         auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff),
         uVar8 = SUB168(auVar1 % auVar2,0), SUB168(auVar1 / auVar2,0) < param_4))
      goto LAB_1402cca5d;
    }
    if ((*(uint *)((longlong)param_5 + 0x14) & 0x4c0) == 0) {
      uVar8 = 0x1000;
    }
    else {
      uVar8 = (ulonglong)*(uint *)(param_5 + 4);
    }
    param_5._0_4_ = (uint)uVar8;
    uVar9 = param_3 * param_4;
    uVar7 = param_2;
    puVar10 = param_1;
    while (uVar9 != 0) {
      if ((*(uint *)((longlong)plVar3 + 0x14) & 0x4c0) == 0) {
LAB_1402ccb9d:
        if (uVar8 <= uVar9) {
          uVar12 = uVar9 & 0xffffffff;
          if (0x7fffffff < uVar9) {
            uVar12 = 0x7fffffff;
          }
          if ((int)uVar8 != 0) {
            uVar12 = (ulonglong)(uint)((int)uVar12 - (int)(uVar12 % uVar8));
          }
          if (uVar7 < uVar12) {
LAB_1402ccc4f:
            if (param_2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_1402cb004();
            }
            uVar8 = func_0x000140421870(param_1,0,param_2);
            return uVar8;
          }
          *(undefined4 *)(plVar3 + 2) = 0;
          *plVar3 = plVar3[1];
          uVar4 = FUN_1402db68c(plVar3);
          iVar5 = func_0x0001402e1004(uVar4,puVar10,uVar12);
          if (iVar5 == 0) {
            LOCK();
            *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 8;
            UNLOCK();
            goto LAB_1402ccc7e;
          }
          if (iVar5 < 0) goto LAB_1402ccc72;
          lVar6 = (longlong)iVar5;
          goto code_r0x0001402ccb8d;
        }
        iVar5 = FUN_1402e1464(plVar3);
        if (iVar5 == -1) goto LAB_1402ccc7e;
        if (uVar7 == 0) goto LAB_1402ccc4f;
        *puVar10 = (char)iVar5;
        uVar9 = uVar9 - 1;
        param_5._0_4_ = *(uint *)(plVar3 + 4);
        puVar10 = puVar10 + 1;
        uVar7 = uVar7 - 1;
      }
      else {
        uVar11 = *(uint *)(plVar3 + 2);
        if (uVar11 == 0) goto LAB_1402ccb9d;
        if ((int)uVar11 < 0) {
LAB_1402ccc72:
          LOCK();
          *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x10;
          UNLOCK();
LAB_1402ccc7e:
          return (param_3 * param_4 - uVar9) / param_3;
        }
        if (uVar9 < (ulonglong)(longlong)(int)uVar11) {
          uVar11 = (uint)uVar9;
        }
        if (uVar7 < uVar11) goto LAB_1402ccc4f;
        if (uVar11 != 0) {
          if (puVar10 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_1402cb004();
          }
          if (*plVar3 == 0) {
            uVar8 = func_0x000140421870(puVar10,0,uVar7);
            return uVar8;
          }
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(puVar10);
        }
        *(int *)(plVar3 + 2) = (int)plVar3[2];
        lVar6 = 0;
        *plVar3 = *plVar3;
code_r0x0001402ccb8d:
        uVar9 = uVar9 - lVar6;
        puVar10 = puVar10 + lVar6;
        uVar7 = uVar7 - lVar6;
      }
      uVar8 = (ulonglong)(uint)param_5;
    }
  }
  return param_4;
}

