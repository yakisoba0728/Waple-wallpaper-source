// Function: FUN_14039c960
// Addr: 14039c960
// Size: 453 bytes


ulonglong FUN_14039c960(undefined8 param_1,uint param_2,uint *param_3,undefined4 *param_4,
                       longlong param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar15 = *(uint *)(param_5 + 0x14);
  if (param_3 != (uint *)0x0) {
    uVar6 = 0;
    if (param_2 < uVar15) {
      puVar4 = (undefined8 *)FUN_1403e6d10(param_5,&local_b8,param_3,param_4,uVar15,0,0);
      local_b8 = *puVar4;
      uStack_b0 = puVar4[1];
      local_a8 = puVar4[2];
      uStack_98 = *(undefined4 *)(puVar4 + 4);
      uStack_94 = *(undefined4 *)((longlong)puVar4 + 0x24);
      uStack_90 = *(undefined4 *)(puVar4 + 5);
      local_8c = *(undefined4 *)((longlong)puVar4 + 0x2c);
      local_a0 = *(int *)(puVar4 + 3);
      uStack_60._4_4_ = (undefined4)((ulonglong)puVar4[3] >> 0x20);
      local_9c = uStack_60._4_4_;
      local_88 = FUN_1403cbe80;
      local_80 = &DAT_14047061d;
      uVar12 = uVar6;
      uVar13 = uVar6;
      uVar14 = uVar6;
      local_68 = local_a8;
      uStack_60 = puVar4[3];
      local_58 = uStack_98;
      uStack_54 = uStack_94;
      uStack_50 = uStack_90;
      uStack_4c = local_8c;
      while( true ) {
        uVar2 = (uint)uVar13;
        uVar8 = (uint)uVar14;
        if (local_a0 == 0) break;
        puVar5 = (uint *)(*local_88)(local_a8);
        uVar3 = *puVar5;
        uVar7 = uVar12;
        param_5._0_4_ = uVar3;
        if ((int)uVar8 < (int)uVar2) {
UNWIND_INFO_14039cb0b_UnwindCodes_3__UnwindOpCode:
          *(uint *)(uVar7 + uVar14 * 4) = uVar3;
          uVar12 = uVar7;
          uVar14 = (ulonglong)(uVar8 + 1);
        }
        else {
          if (uVar13 >> 0x1f == 0) {
            uVar11 = uVar13;
            if (uVar2 < uVar8 + 1) {
              do {
                uVar10 = (int)uVar11 + 8 + (int)(uVar11 >> 1);
                uVar11 = (ulonglong)uVar10;
              } while (uVar10 < uVar8 + 1);
              if (0x3ffffffe < uVar10) {
LAB_14039caf7:
                uVar13 = (ulonglong)~uVar2;
                goto LAB_14039cafc;
              }
              if (uVar10 == 0) {
                if (1 < uVar2 + 1) {
                  uVar6 = func_0x0001402bf8e0(uVar12);
                  return uVar6;
                }
                uVar13 = 0;
                uVar7 = uVar6;
              }
              else if ((uVar2 == 0) && (uVar12 != 0)) {
                uVar7 = thunk_FUN_1402da070((ulonglong)uVar10 << 2);
                uVar3 = (uint)param_5;
                uVar2 = 0;
                if (uVar7 == 0) {
LAB_14039caf1:
                  uVar7 = uVar12;
                  if (uVar2 < uVar10) goto LAB_14039caf7;
                }
                else {
                  if (uVar14 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(uVar7,uVar12);
                  }
                  uVar13 = (ulonglong)uVar10;
                }
              }
              else {
                uVar7 = func_0x0001402cb2b0(uVar12,(ulonglong)uVar10 << 2);
                if (uVar7 == 0) goto LAB_14039caf1;
                uVar13 = (ulonglong)uVar10;
              }
            }
            goto UNWIND_INFO_14039cb0b_UnwindCodes_3__UnwindOpCode;
          }
LAB_14039cafc:
          DAT_1404e4ff0._0_4_ = (undefined4)DAT_14045dde0;
        }
        func_0x000140398e50(&local_b8);
      }
      param_5._0_4_ = (uint)param_5 & 0xffffff00;
      if (uVar8 != 0) {
        func_0x000140368ac0(uVar12,uVar12 + uVar14 * 4,uVar14,&param_5);
      }
      uVar3 = uVar8 - param_2;
      if (uVar8 < param_2) {
        uVar3 = 0;
      }
      uVar8 = *param_3;
      if (uVar3 <= *param_3) {
        uVar8 = uVar3;
      }
      *param_3 = uVar8;
      puVar9 = (undefined4 *)(uVar12 + (ulonglong)param_2 * 4);
      uVar3 = uVar8;
      while (uVar3 != 0) {
        uVar1 = *puVar9;
        if (uVar8 == 0) {
          uVar3 = uVar3 - 1;
          puVar9 = puVar9 + 1;
          DAT_1404e4ff0._0_4_ = uVar1;
        }
        else {
          *param_4 = uVar1;
          uVar8 = uVar8 - 1;
          param_4 = param_4 + 1;
          uVar3 = uVar3 - 1;
          puVar9 = puVar9 + 1;
        }
      }
      if (1 < uVar2 + 1) {
        func_0x0001402bf8e0(uVar12);
      }
    }
    else {
      *param_3 = 0;
    }
  }
  return (ulonglong)uVar15;
}

