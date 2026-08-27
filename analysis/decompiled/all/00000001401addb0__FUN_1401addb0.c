// Function: FUN_1401addb0
// Addr: 1401addb0
// Size: 371 bytes


undefined8
FUN_1401addb0(longlong param_1,int param_2,longlong param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  uint local_res10 [2];
  undefined1 local_28 [16];
  
  local_res10[0] = param_2 << 0x18 | param_4;
  lVar6 = *(longlong *)(param_1 + 0x28);
  uVar10 = *(ulonglong *)(param_1 + 0x50) &
           (((((ulonglong)(param_4 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)((param_4 & 0xff00) >> 8)) * 0x100000001b3 ^
            (ulonglong)((param_4 & 0xff0000) >> 0x10)) * 0x100000001b3 ^
           (ulonglong)(local_res10[0] >> 0x18)) * 0x100000001b3;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + uVar10 * 0x10);
  if (lVar8 != lVar6) {
    uVar1 = *(uint *)(lVar8 + 0x10);
    while (local_res10[0] != uVar1) {
      if (lVar8 == *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar10 * 0x10)) goto LAB_1401ade82;
      lVar8 = *(longlong *)(lVar8 + 8);
      uVar1 = *(uint *)(lVar8 + 0x10);
    }
    if (lVar8 == 0) {
      lVar8 = lVar6;
    }
    if (lVar8 != lVar6) {
      *param_5 = *(undefined4 *)(lVar8 + 0x14);
      param_5[1] = *(undefined4 *)(lVar8 + 0x18);
      param_5[2] = *(undefined4 *)(lVar8 + 0x1c);
      param_5[3] = *(undefined4 *)(lVar8 + 0x20);
      return 0;
    }
  }
LAB_1401ade82:
  iVar7 = FUN_1402f12d0(param_3,param_4,8);
  if ((iVar7 == 0) &&
     (iVar7 = FUN_1402ee9d0(*(undefined8 *)(param_3 + 0x78),&local_res8), iVar7 == 0)) {
    FUN_1402eeb40(local_res8,3,param_5);
    FUN_1402ee990(local_res8);
    uVar2 = *param_5;
    uVar3 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    plVar9 = (longlong *)FUN_1401b58f0(param_1 + 0x20,local_28,local_res10);
    lVar6 = *plVar9;
    *(undefined4 *)(lVar6 + 0x14) = uVar2;
    *(undefined4 *)(lVar6 + 0x18) = uVar3;
    *(undefined4 *)(lVar6 + 0x1c) = uVar4;
    *(undefined4 *)(lVar6 + 0x20) = uVar5;
    return 0;
  }
  return 1;
}

