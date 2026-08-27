// Function: FUN_1402ff090
// Addr: 1402ff090
// Size: 380 bytes


int FUN_1402ff090(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res8 [2];
  
  plVar2 = (longlong *)
           FUN_1402f7fa0(*(undefined8 *)(param_1 + 0x98),*(int *)(param_1 + 0x10) * 2 + 800,
                         local_res8);
  if (local_res8[0] == 0) {
    FUN_1404217a0(plVar2 + 9,0,0x2b8);
    *plVar2 = param_1;
    *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(param_1 + 0x10);
    plVar2[2] = (longlong)(plVar2 + 100);
    plVar2[99] = param_3;
    *(undefined2 *)(plVar2 + 0x60) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x30c) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x304) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x314) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0xa0);
    if (puVar1[4] == 0) {
      uVar3 = FUN_140413e60(*puVar1,*(undefined4 *)(puVar1 + 1),1,param_1,0);
      uVar4 = FUN_1404152b0(uVar3,*(undefined4 *)(param_1 + 4));
      FUN_140414150(uVar3);
    }
    else {
      uVar4 = FUN_140415600(FUN_140306730,plVar2,0);
    }
    FUN_140415c00(uVar4,*(undefined4 *)(param_1 + 4));
    FUN_140415c10(uVar4,*(undefined2 *)(param_1 + 0x68));
    lVar5 = FUN_140415c20(uVar4);
    FUN_140415810(uVar4);
    plVar2[3] = lVar5;
    lVar5 = FUN_1404144f0();
    plVar2[4] = lVar5;
    FUN_140305340(plVar2);
    local_res8[0] = FUN_1402febf0(plVar2);
    if (local_res8[0] == 0) {
      *(undefined4 *)(plVar2 + 8) = 0;
      *param_2 = (longlong)plVar2;
    }
    else {
      FUN_1402fefb0(plVar2);
      *param_2 = 0;
    }
    return local_res8[0];
  }
  *param_2 = (longlong)plVar2;
  return local_res8[0];
}

