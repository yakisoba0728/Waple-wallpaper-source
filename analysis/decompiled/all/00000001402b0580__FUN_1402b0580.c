// Function: FUN_1402b0580
// Addr: 1402b0580
// Size: 452 bytes


void FUN_1402b0580(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined1 param_4,
                  longlong param_5,undefined2 param_6,double param_7)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *****pppppuVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  longlong lStack_108;
  undefined2 uStack_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0 [32];
  undefined8 ****local_90;
  undefined8 uStack_88;
  longlong local_80;
  ulonglong local_78;
  undefined1 local_70 [40];
  ulonglong local_48;
  
  puVar14 = auStack_128;
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_128;
  uVar17 = SUB84(param_7,0);
  uVar18 = (uint)((ulonglong)param_7 >> 0x20);
  if (param_7 < 0.0) {
    uVar17 = uVar17 ^ (uint)DAT_1404930b0;
    uVar18 = uVar18 ^ DAT_1404930b0._4_4_;
  }
  local_d8 = param_7 < 0.0;
  dVar4 = (double)CONCAT44(uVar18,uVar17);
  for (uVar15 = 0; (DAT_14042c0c0 <= dVar4 && (uVar15 < 5000)); uVar15 = uVar15 + 10) {
    dVar4 = dVar4 / DAT_140492980;
  }
  local_d7 = param_4;
  local_b8 = param_1;
  iVar9 = FUN_140016370(local_70,0x28,"%.0Lf",dVar4);
  if (iVar9 < 0) {
    uVar5 = *(undefined4 *)((longlong)param_3 + 4);
    uVar6 = *(undefined4 *)(param_3 + 1);
    uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
    *param_2 = *(undefined4 *)param_3;
    param_2[1] = uVar5;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
    puVar14 = auStack_128;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_5 + 0x40) + 8);
    uStack_c0 = uVar2;
    (*(code *)PTR_FUN_140426bb8)(uVar2);
    uVar10 = FUN_14029d260(&local_c8);
    local_c8 = uVar10;
    lVar11 = (*(code *)PTR_FUN_140426bb8)(uVar2);
    if (lVar11 != 0) {
      (*(code *)PTR_FUN_140426bb8)(lVar11,1);
    }
    uVar8 = (*(code *)PTR_FUN_140426bb8)(uVar10,0x30);
    local_90 = (undefined8 *****)0x0;
    uStack_88 = 0;
    local_80 = 0;
    local_78 = 0;
    FUN_140294f90(&local_90,0,(longlong)iVar9);
    pppppuVar12 = &local_90;
    if (7 < local_78) {
      pppppuVar12 = (undefined8 *****)local_90;
    }
    (*(code *)PTR_FUN_140426bb8)(local_c8,local_70,local_70 + iVar9,pppppuVar12);
    FUN_1402a9dc0(&local_90,uVar15,uVar8);
    local_f0 = FUN_14029d920(local_b0,&local_90);
    local_c8 = *param_3;
    uStack_c0 = param_3[1];
    local_f8 = local_d8;
    uStack_100 = param_6;
    lStack_108 = param_5;
    local_e8 = uVar8;
    func_0x0001402a7fa0(local_b8,param_2,&local_c8,local_d7);
    if (7 < local_78) {
      if (DAT_140472300 != '\0') {
        uVar15 = (longlong)local_90 + (local_78 + 1) * 2;
        uVar1 = (longlong)local_90 + (local_80 + 1) * 2;
        uVar13 = uVar15 + 7 & 0xfffffffffffffff8;
        uVar16 = uVar13;
        if (uVar1 <= uVar13) {
          uVar16 = uVar1;
        }
        if (uVar13 < uVar15) {
          uVar15 = uVar13;
        }
        func_0x00014000ed00(local_90,uVar13,uVar16,uVar15);
      }
      pppppuVar12 = (undefined8 *****)local_90;
      puVar14 = auStack_128;
      if ((0xfff < local_78 * 2 + 2) &&
         (pppppuVar12 = (undefined8 *****)local_90[-1], puVar14 = auStack_128,
         0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pppppuVar12)))) {
        pcVar3 = (code *)swi(0x29);
        pppppuVar12 = (undefined8 *****)(*pcVar3)(5);
        puVar14 = auStack_120;
      }
      *(undefined8 *)(puVar14 + -8) = 0x1402b07dd;
      func_0x00014028b040(pppppuVar12);
    }
  }
  *(undefined **)(puVar14 + -8) = &UNK_1402b07ec;
  func_0x0001402ed2f0(local_48 ^ (ulonglong)puVar14);
  return;
}

