// Function: FUN_140069bb0
// Addr: 140069bb0
// Size: 549 bytes


void FUN_140069bb0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined8 local_res8;
  uint local_58;
  undefined4 local_54;
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  if ((((param_3 != 0) &&
       (local_res8 = param_1, iVar2 = FUN_1402c10d0(param_3,&DAT_14047709c), iVar2 != 0)) &&
      (iVar2 = FUN_1402c10d0(param_3,"random"), iVar2 != 0)) &&
     (uVar3 = FUN_1402c82c0(param_3), plVar6 = DAT_1404e5318, uVar3 < 0x1b)) {
    bVar8 = DAT_1404e5310 == DAT_1404e5318;
    plVar4 = DAT_1404e5310;
    if (!bVar8) {
      do {
        lVar5 = *plVar4;
        if (lVar5 != 0) {
          FUN_140058130(lVar5);
          thunk_FUN_14028af80(lVar5,0xf0);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar6);
      bVar8 = DAT_1404e5310 == DAT_1404e5318;
    }
    if (!bVar8) {
      DAT_1404e5318 = DAT_1404e5310;
    }
    FUN_140016fc0(local_38,param_2);
    plVar6 = DAT_1404e5330;
    plVar4 = (longlong *)FUN_140030de0(&DAT_1404e5328,&local_res8,local_38);
    if (((longlong *)*plVar4 == plVar6) && (DAT_1404e5338 != 0)) {
      lVar5 = *plVar6;
      plVar6 = (longlong *)(lVar5 + 0x10);
      if (local_38 != plVar6) {
        if (0xf < *(ulonglong *)(lVar5 + 0x28)) {
          plVar6 = (longlong *)*plVar6;
        }
        FUN_14000f880(local_38,plVar6,*(undefined8 *)(lVar5 + 0x20));
      }
    }
    local_40 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = uVar3;
    local_54 = param_4;
    uVar9 = FUN_140068fc0(&DAT_1404e52e0,local_38,&local_58);
    FUN_14006a030(uVar9,0);
    if (local_50 != 0) {
      uVar7 = (local_40 - local_50 >> 2) * 4;
      lVar5 = local_50;
      if (0xfff < uVar7) {
        if (0x1f < (local_50 - *(longlong *)(local_50 + -8)) - 8U) goto LAB_140069dcd;
        uVar7 = uVar7 + 0x27;
        lVar5 = *(longlong *)(local_50 + -8);
      }
      thunk_FUN_14028af80(lVar5,uVar7);
      local_40 = 0;
      local_50 = 0;
      uStack_48 = 0;
    }
    if (0xf < local_20) {
      uVar7 = local_20 + 1;
      lVar5 = local_38[0];
      if (0xfff < uVar7) {
        lVar5 = *(longlong *)(local_38[0] + -8);
        if (0x1f < (local_38[0] - lVar5) - 8U) {
LAB_140069dcd:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar7 = local_20 + 0x28;
      }
      thunk_FUN_14028af80(lVar5,uVar7);
    }
  }
  return;
}

