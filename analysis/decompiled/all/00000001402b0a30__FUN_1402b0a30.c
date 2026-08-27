// Function: FUN_1402b0a30
// Addr: 1402b0a30
// Size: 647 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1402b0a30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
             longlong param_5,undefined2 param_6,double param_7)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  undefined2 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *****pppppuVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  longlong local_108;
  undefined2 local_100;
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
  
  puVar11 = auStack_128;
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_128;
  uVar14 = SUB84(param_7,0);
  uVar15 = (uint)((ulonglong)param_7 >> 0x20);
  if (param_7 < 0.0) {
    uVar14 = uVar14 ^ (uint)DAT_140492fe0;
    uVar15 = uVar15 ^ DAT_140492fe0._4_4_;
  }
  local_d8 = param_7 < 0.0;
  dVar4 = (double)CONCAT44(uVar15,uVar14);
  for (uVar12 = 0; (DAT_14042bff0 <= dVar4 && (uVar12 < 5000)); uVar12 = uVar12 + 10) {
    dVar4 = dVar4 / DAT_1404928b0;
  }
  local_d7 = param_4;
  local_b8 = param_1;
  iVar6 = FUN_1400162a0(local_70,0x28,"%.0Lf",dVar4);
  if (iVar6 < 0) {
    uVar2 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar2;
    puVar11 = auStack_128;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_5 + 0x40) + 8);
    uStack_c0 = uVar2;
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar2);
    uVar7 = FUN_14000f450(&local_c8);
    local_c8 = uVar7;
    lVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar2);
    if (lVar8 != 0) {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar8,1);
    }
    uVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar7,0x30);
    local_90 = (undefined8 *****)0x0;
    uStack_88 = 0;
    local_80 = 0;
    local_78 = 0;
    FUN_1400167e0(&local_90,0,(longlong)iVar6);
    pppppuVar9 = &local_90;
    if (7 < local_78) {
      pppppuVar9 = (undefined8 *****)local_90;
    }
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(local_c8,local_70,local_70 + iVar6,pppppuVar9);
    FUN_140015830(&local_90,uVar12,uVar5);
    local_f0 = FUN_140016600(local_b0,&local_90);
    local_c8 = *param_3;
    uStack_c0 = param_3[1];
    local_f8 = local_d8;
    local_100 = param_6;
    local_108 = param_5;
    local_e8 = uVar5;
    FUN_1402a8ca0(local_b8,param_2,&local_c8,local_d7);
    if (7 < local_78) {
      if (DAT_140472230 != '\0') {
        uVar12 = (longlong)local_90 + (local_78 + 1) * 2;
        uVar1 = (longlong)local_90 + (local_80 + 1) * 2;
        uVar10 = uVar12 + 7 & 0xfffffffffffffff8;
        uVar13 = uVar10;
        if (uVar1 <= uVar10) {
          uVar13 = uVar1;
        }
        if (uVar10 < uVar12) {
          uVar12 = uVar10;
        }
        _guard_check_icall(local_90,uVar10,uVar13,uVar12);
      }
      pppppuVar9 = (undefined8 *****)local_90;
      puVar11 = auStack_128;
      if ((0xfff < local_78 * 2 + 2) &&
         (pppppuVar9 = (undefined8 *****)local_90[-1], puVar11 = auStack_128,
         0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pppppuVar9)))) {
        pcVar3 = (code *)swi(0x29);
        pppppuVar9 = (undefined8 *****)(*pcVar3)(5);
        puVar11 = auStack_120;
      }
      *(undefined8 *)(puVar11 + -8) = 0x1402b0c8d;
      thunk_FUN_14028af80(pppppuVar9);
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x1402b0c9c;
  return param_2;
}

