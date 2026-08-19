// Function: FUN_1401ee2a0
// Addr: 1401ee2a0
// Size: 341 bytes


void FUN_1401ee2a0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  float fVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  float *pfVar8;
  float local_res8 [2];
  float local_res20 [2];
  float afStack_58 [2];
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  fVar4 = DAT_1404926f8;
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar7 = *(longlong *)(param_1 + 0xd0);
  uVar2 = *param_4;
  do {
    if (lVar7 == lVar1) {
      return;
    }
    plVar3 = *(longlong **)(lVar7 + 8);
    if ((plVar3 == (longlong *)0x0) ||
       (piVar6 = (int *)(**(code **)(*plVar3 + 0x20))(plVar3,uVar2), piVar6 == (int *)0x0))
    goto LAB_1401ee43d;
    uVar5 = *(uint *)(param_3 + 4) & 0x7fffffff;
    if (uVar5 == 4) {
      local_res20[0] = *(float *)param_4[1];
      if ((*(byte *)(piVar6 + 0xc) & 4) != 0) {
        local_res20[0] = local_res20[0] * fVar4;
      }
      if (*piVar6 == 0) {
        local_res8[0] = (float)(int)local_res20[0];
        pfVar8 = local_res8;
      }
      else {
        if (*piVar6 != 4) goto LAB_1401ee43d;
        pfVar8 = local_res20;
      }
LAB_1401ee432:
      (**(code **)(piVar6 + 6))(*(undefined8 *)(lVar7 + 8),piVar6,pfVar8);
    }
    else {
      if (uVar5 == 8) {
        afStack_58[0] = *(float *)param_4[1];
        if (*piVar6 == 0) {
          pfVar8 = afStack_58;
        }
        else {
          if (*piVar6 != 4) goto LAB_1401ee43d;
          local_res8[0] = (float)(int)afStack_58[0];
          if ((*(byte *)(piVar6 + 0xc) & 4) != 0) {
            local_res8[0] = local_res8[0] * fVar4;
          }
          pfVar8 = local_res8;
        }
        goto LAB_1401ee432;
      }
      if (uVar5 == 0x10) {
        uStack_50 = *(undefined8 *)param_4[1];
        if (*piVar6 == 1) {
          pfVar8 = (float *)&uStack_50;
          goto LAB_1401ee432;
        }
      }
      else if (uVar5 == 0x20) {
        local_48 = *(undefined8 *)param_4[1];
        local_40 = *(undefined4 *)((undefined8 *)param_4[1] + 1);
        if (*piVar6 == 2) {
          pfVar8 = (float *)&local_48;
          goto LAB_1401ee432;
        }
      }
      else if (uVar5 == 0x40) {
        local_38 = *(undefined8 *)param_4[1];
        uStack_30 = ((undefined8 *)param_4[1])[1];
        if (*piVar6 == 3) {
          pfVar8 = (float *)&local_38;
          goto LAB_1401ee432;
        }
      }
    }
LAB_1401ee43d:
    lVar7 = lVar7 + 0x30;
  } while( true );
}

