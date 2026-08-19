// Function: FUN_1402ac880
// Addr: 1402ac880
// Size: 341 bytes


void FUN_1402ac880(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,uint *param_6,undefined1 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 auStack_e8 [32];
  undefined4 **local_c8;
  undefined2 local_b8;
  int iStack_b4;
  undefined4 *local_b0;
  longlong local_a8;
  uint local_a0 [8];
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 local_60 [8];
  ulonglong local_40;
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_e8;
  local_b0 = param_2;
  if ((*(uint *)(param_5 + 0x18) & 0x4000) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_5 + 0x40) + 8);
    local_78 = uVar1;
    (*(code *)PTR_FUN_140426bb8)(uVar1);
    uVar6 = FUN_1400119c0(local_80);
    lVar7 = (*(code *)PTR_FUN_140426bb8)(uVar1);
    if (lVar7 != 0) {
      (*(code *)PTR_FUN_140426bb8)(lVar7,1);
    }
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_a0[2] = 0;
    local_a0[3] = 0;
    local_a0[4] = 1;
    local_a0[5] = 0;
    local_a0[6] = 7;
    local_a0[7] = 0;
    puVar8 = local_a0;
    lVar7 = 1;
    do {
      *(undefined2 *)puVar8 = 0;
      puVar8 = (uint *)((longlong)puVar8 + 2);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    local_a0[0] = (uint)(ushort)local_a0[0];
    (*(code *)PTR_FUN_140426bb8)(uVar6,local_80);
    FUN_140080360(local_a0,local_80);
                    /* WARNING: Subroutine does not return */
    FUN_140016840(local_80);
  }
  local_a8 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR_FUN_140426bb8)();
  local_c8 = &local_b0;
  uVar4 = FUN_14029bb20(local_60,param_3,param_4,*(undefined4 *)(param_5 + 0x18));
  local_b8 = uVar4;
  if ((local_a8 != 0) && (lVar7 = (*(code *)PTR_FUN_140426bb8)(), lVar7 != 0)) {
    (*(code *)PTR_FUN_140426bb8)(lVar7,1);
  }
  if ((char)uVar4 < '\0') {
    *param_7 = 0;
code_r0x0001402acbc8:
    *param_6 = 2;
  }
  else {
    uVar5 = FUN_140292840(local_60,&local_b0,(int)(char)uVar4,&iStack_b4);
    *param_7 = uVar5 != 0;
    if ((((local_b0 == local_60) || (iStack_b4 != 0)) || (local_b8._1_1_ != '\0')) || (1 < uVar5))
    goto code_r0x0001402acbc8;
  }
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
  }
  if ((char)param_4[1] == '\0') {
    func_0x0001402a7f30(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1402acc03;
  }
  else if (*param_4 == 0) goto LAB_1402acc03;
  *param_6 = *param_6 | 1;
LAB_1402acc03:
  uVar2 = *(undefined4 *)((longlong)param_3 + 4);
  lVar7 = param_3[1];
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar2;
  param_2[2] = (int)lVar7;
  param_2[3] = uVar3;
  func_0x0001402ed2f0(local_40 ^ (ulonglong)auStack_e8);
  return;
}

