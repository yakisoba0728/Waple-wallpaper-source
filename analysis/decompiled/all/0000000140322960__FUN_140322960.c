// Function: FUN_140322960
// Addr: 140322960
// Size: 222 bytes


ulonglong FUN_140322960(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int local_res8 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  lVar4 = *(longlong *)(param_2 + 0x90);
  local_res8[0] = 0;
  uVar3 = (**(code **)(param_2 + 0x48))(param_2);
  uVar5 = (uint)uVar3;
  if (-1 < (int)uVar5) {
    uVar1 = *(uint *)(lVar4 + 8);
    uVar3 = (ulonglong)uVar1 * 0x51eb851f & 0xffffffff;
    uVar1 = uVar1 / 100;
    if ((int)uVar1 < (int)uVar5) {
      uVar5 = uVar1;
    }
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      uVar3 = FUN_1402f80b0(uVar2,0xfc,0,uVar5,0,local_res8);
      *(ulonglong *)(param_1 + 0x1b8) = uVar3;
      if (local_res8[0] == 0) {
        *(uint *)(param_1 + 0x1b0) = uVar5;
        uVar6 = 0;
        if (uVar5 != 0) {
          do {
            uVar5 = (int)uVar6 + 1;
            lVar4 = uVar6 * 0xfc;
            uVar3 = *(ulonglong *)(param_1 + 0x1b8);
            *(undefined4 *)(lVar4 + 0x70 + uVar3) = 7;
            *(undefined4 *)(lVar4 + 0x74 + uVar3) = 1;
            *(undefined4 *)(lVar4 + 4 + uVar3) = 4;
            *(undefined4 *)(lVar4 + 0xb4 + uVar3) = 0xf5c;
            *(undefined4 *)(lVar4 + 0x6c + uVar3) = 0x27a000;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(param_1 + 0x1b0));
        }
      }
    }
  }
  return uVar3;
}

