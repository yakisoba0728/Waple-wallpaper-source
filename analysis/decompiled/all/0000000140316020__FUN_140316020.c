// Function: FUN_140316020
// Addr: 140316020
// Size: 229 bytes


void FUN_140316020(longlong param_1,int param_2,uint param_3,ulonglong param_4,longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_7d8 [32];
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined1 local_7a8;
  undefined4 local_7a0;
  undefined8 local_798;
  undefined1 auStack_788 [8];
  undefined1 auStack_780 [24];
  undefined1 local_768 [8];
  longlong lStack_760;
  undefined4 uStack_728;
  undefined1 local_70c;
  undefined1 uStack_70a;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_48;
  undefined4 uStack_40;
  ulonglong local_28;
  
  local_28 = DAT_1404dc110 ^ (ulonglong)auStack_7d8;
  if ((param_4 & 0x10) == 0) {
    local_798 = 0x14031a350;
    local_7b0 = *(undefined8 *)(param_1 + 0x2e0);
    local_7a0 = 0;
    local_7a8 = 0;
    local_7b8 = *(undefined8 *)(param_1 + 0x248);
    iVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x2a0) + 0x18))
                      (local_768,param_1,0,0);
    if (iVar2 == 0) {
      local_70c = 0;
      local_f4 = *(undefined4 *)(param_1 + 0x220);
      local_f0 = *(undefined8 *)(param_1 + 0x228);
      local_e8 = *(undefined8 *)(param_1 + 0x230);
      uStack_e0 = *(undefined8 *)(param_1 + 0x238);
      uStack_48 = *(undefined8 *)(param_1 + 0x2f8);
      uStack_40 = *(undefined4 *)(param_1 + 0x2f0);
      uVar3 = 0;
      uStack_70a = 1;
      if (param_3 != 0) {
        do {
          auStack_788[0] = 0;
          iVar2 = func_0x00014031a3b0(local_768,param_2 + uVar3,auStack_780,auStack_788);
          if ((iVar2 == 0) &&
             (plVar1 = *(longlong **)(*(longlong *)(lStack_760 + 0xd0) + 0x50),
             plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 8))(plVar1[1],auStack_780);
            iVar2 = FUN_1402f4c30(uStack_728);
            iVar2 = iVar2 >> 0x10;
          }
          else if (iVar2 == 0) {
            iVar2 = FUN_1402f4c30(uStack_728);
            iVar2 = iVar2 >> 0x10;
          }
          else {
            iVar2 = 0;
          }
          uVar4 = (ulonglong)uVar3;
          uVar3 = uVar3 + 1;
          *(int *)(param_5 + uVar4 * 4) = iVar2;
        } while (uVar3 < param_3);
      }
    }
  }
  else if (param_3 != 0) {
    func_0x000140421870(param_5,0,(ulonglong)param_3 << 2);
  }
  func_0x0001402ed2f0(local_28 ^ (ulonglong)auStack_7d8);
  return;
}

