// Function: FUN_140315f50
// Addr: 140315f50
// Size: 474 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_140315f50(longlong param_1,int param_2,uint param_3,ulonglong param_4,longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_7d8 [32];
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined1 local_7a8;
  undefined4 local_7a0;
  code *local_798;
  undefined1 local_788 [8];
  undefined1 local_780 [24];
  undefined1 local_768 [8];
  longlong local_760;
  undefined4 local_728;
  undefined1 local_70c;
  undefined1 local_70a;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_7d8;
  if ((param_4 & 0x10) == 0) {
    local_798 = FUN_14031a280;
    local_7b0 = *(undefined8 *)(param_1 + 0x2e0);
    local_7a0 = 0;
    local_7a8 = 0;
    local_7b8 = *(undefined8 *)(param_1 + 0x248);
    uVar3 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x2a0) + 0x18))
                      (local_768,param_1,0,0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    local_70c = (undefined1)uVar3;
    local_f4 = *(undefined4 *)(param_1 + 0x220);
    local_f0 = *(undefined8 *)(param_1 + 0x228);
    local_e8 = *(undefined8 *)(param_1 + 0x230);
    local_e0 = *(undefined8 *)(param_1 + 0x238);
    local_48 = *(undefined8 *)(param_1 + 0x2f8);
    local_40 = *(undefined4 *)(param_1 + 0x2f0);
    uVar4 = 0;
    local_70a = 1;
    if (param_3 != 0) {
      do {
        local_788[0] = 0;
        iVar2 = FUN_14031a2e0(local_768,param_2 + uVar4,local_780,local_788);
        if ((iVar2 == 0) &&
           (plVar1 = *(longlong **)(*(longlong *)(local_760 + 0xd0) + 0x50),
           plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 8))(plVar1[1],local_780);
          iVar2 = FUN_1402f4b60(local_728);
          iVar2 = iVar2 >> 0x10;
        }
        else if (iVar2 == 0) {
          iVar2 = FUN_1402f4b60(local_728);
          iVar2 = iVar2 >> 0x10;
        }
        else {
          iVar2 = 0;
        }
        uVar5 = (ulonglong)uVar4;
        uVar4 = uVar4 + 1;
        *(int *)(param_5 + uVar5 * 4) = iVar2;
      } while (uVar4 < param_3);
    }
  }
  else if (param_3 != 0) {
    FUN_1404217a0(param_5,0,(ulonglong)param_3 << 2);
  }
  return 0;
}

