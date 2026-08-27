// Function: FUN_1403227f0
// Addr: 1403227f0
// Size: 368 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403227f0(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_1404dc040 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_2 + 0xb8);
  if (uVar1 < *(uint *)(param_1 + 0x1b0)) {
    lVar5 = *(longlong *)(param_1 + 0x1b8);
    iVar4 = (**(code **)(param_2 + 0x68))(param_2,6,&local_38,3);
    if (5 < iVar4) {
      iVar4 = local_2c;
      if (local_2c < 0) {
        iVar4 = -local_2c;
      }
      if (iVar4 != 0) {
        lVar5 = lVar5 + (ulonglong)uVar1 * 0xfc;
        if (iVar4 != 0x10000) {
          uVar3 = FUN_1402efa10(1000,iVar4);
          *(undefined2 *)(param_1 + 0x68) = uVar3;
          local_38 = FUN_1402efa10(local_38,iVar4);
          local_34 = FUN_1402efa10(local_34,iVar4);
          local_30 = FUN_1402efa10(local_30,iVar4);
          local_28 = FUN_1402efa10(local_28,iVar4);
          local_24 = FUN_1402efa10(local_24,iVar4);
          local_2c = (local_2c >> 0x1f & 0xfffe0000U) + 0x10000;
        }
        *(undefined4 *)(lVar5 + 0xd8) = local_38;
        *(undefined4 *)(lVar5 + 0xe0) = local_34;
        *(undefined4 *)(lVar5 + 0xdc) = local_30;
        *(int *)(lVar5 + 0xe4) = local_2c;
        cVar2 = FUN_1402f1cd0(lVar5 + 0xd8);
        if (cVar2 == '\0') {
          *(undefined4 *)(param_2 + 0x18) = 3;
        }
        else {
          *(int *)(lVar5 + 0xe8) = local_28 >> 0x10;
          *(int *)(lVar5 + 0xec) = local_24 >> 0x10;
        }
      }
    }
  }
  return;
}

