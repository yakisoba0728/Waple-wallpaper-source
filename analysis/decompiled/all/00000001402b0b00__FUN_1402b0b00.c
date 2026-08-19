// Function: FUN_1402b0b00
// Addr: 1402b0b00
// Size: 419 bytes


void FUN_1402b0b00(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined1 param_4,
                  longlong param_5,undefined8 param_6,double param_7)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *****pppppuVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_128 [80];
  undefined1 local_d8;
  undefined1 local_d7;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [32];
  undefined8 ****local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_128;
  uVar12 = SUB84(param_7,0);
  uVar13 = (uint)((ulonglong)param_7 >> 0x20);
  if (param_7 < 0.0) {
    uVar12 = uVar12 ^ (uint)DAT_1404930b0;
    uVar13 = uVar13 ^ DAT_1404930b0._4_4_;
  }
  local_d8 = param_7 < 0.0;
  dVar2 = (double)CONCAT44(uVar13,uVar12);
  for (uVar10 = 0; (DAT_14042c0c0 <= dVar2 && (uVar10 < 5000)); uVar10 = uVar10 + 10) {
    dVar2 = dVar2 / DAT_140492980;
  }
  local_d7 = param_4;
  local_b8 = param_1;
  iVar7 = FUN_140016370(local_70,0x28,"%.0Lf",dVar2);
  if (iVar7 < 0) {
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *param_2 = *param_3;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_128);
    return;
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_5 + 0x40) + 8);
  local_c0 = uVar1;
  (*(code *)PTR_FUN_140426bb8)(uVar1);
  uVar8 = FUN_14000f520(&local_c8);
  local_c8 = uVar8;
  lVar9 = (*(code *)PTR_FUN_140426bb8)(uVar1);
  if (lVar9 != 0) {
    (*(code *)PTR_FUN_140426bb8)(lVar9,1);
  }
  uVar6 = (*(code *)PTR_FUN_140426bb8)(uVar8,0x30);
  local_90 = (undefined8 *****)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_1400168b0(&local_90,0,(longlong)iVar7);
  pppppuVar11 = &local_90;
  if (7 < local_78) {
    pppppuVar11 = (undefined8 *****)local_90;
  }
  (*(code *)PTR_FUN_140426bb8)(local_c8,local_70,local_70 + iVar7,pppppuVar11);
  FUN_140015900(&local_90,uVar10,uVar6);
                    /* WARNING: Subroutine does not return */
  FUN_1400166d0(local_b0,&local_90);
}

