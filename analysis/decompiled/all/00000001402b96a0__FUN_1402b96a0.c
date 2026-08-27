// Function: FUN_1402b96a0
// Addr: 1402b96a0
// Size: 564 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1402b96a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
             longlong param_5,undefined1 param_6,double param_7)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *****pppppuVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined4 local_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined1 local_b0 [32];
  undefined8 ****local_90 [3];
  ulonglong local_78;
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_128;
  uVar8 = SUB84(param_7,0);
  uVar9 = (uint)((ulonglong)param_7 >> 0x20);
  if (param_7 < 0.0) {
    uVar8 = uVar8 ^ (uint)DAT_140492fe0;
    uVar9 = uVar9 ^ DAT_140492fe0._4_4_;
  }
  local_d8 = param_7 < 0.0;
  dVar1 = (double)CONCAT44(uVar9,uVar8);
  for (uVar6 = 0; (DAT_14042bff0 <= dVar1 && (uVar6 < 5000)); uVar6 = uVar6 + 10) {
    dVar1 = dVar1 / DAT_1404928b0;
  }
  local_d7 = param_4;
  local_b8 = param_1;
  iVar3 = FUN_1400162a0(local_70,0x28,"%.0Lf",dVar1);
  if (iVar3 < 0) {
    uVar4 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar4;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
    lStack_c0 = lVar5;
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar5);
    uVar4 = FUN_140013d40(&local_c8);
    if ((lVar5 != 0) && (lVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar5), lVar5 != 0))
    {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar5,1);
    }
    uVar2 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar4,0x30);
    FUN_140016940(local_90,(longlong)iVar3,0);
    pppppuVar7 = local_90;
    if (0xf < local_78) {
      pppppuVar7 = (undefined8 *****)local_90[0];
    }
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar4,local_70,local_70 + iVar3,pppppuVar7);
    FUN_140016e50(local_90,uVar6,uVar2);
    local_f0 = FUN_140016fc0(local_b0,local_90);
    local_c8 = *(undefined4 *)param_3;
    uStack_c4 = *(undefined4 *)((longlong)param_3 + 4);
    lStack_c0 = param_3[1];
    local_f8 = local_d8;
    local_100 = param_6;
    local_108 = param_5;
    local_e8 = uVar2;
    FUN_1402b6a50(local_b8,param_2,&local_c8,local_d7);
    FUN_140017240(local_90);
  }
  return param_2;
}

