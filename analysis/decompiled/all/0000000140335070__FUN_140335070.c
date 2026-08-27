// Function: FUN_140335070
// Addr: 140335070
// Size: 253 bytes


undefined8 FUN_140335070(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  short sVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  longlong local_res20;
  
  uVar5 = (ulonglong)param_2;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) + 0x50) == 0) {
    lVar1 = *(longlong *)(param_1 + 800);
    if ((*(longlong *)(lVar1 + 0x4d8) != 0) && (param_2 < 0x100)) {
      sVar2 = (*(code *)**(undefined8 **)(lVar1 + 0x10e0))(param_2);
      if (*(uint *)(lVar1 + 0x20) != 0) {
        uVar5 = 0;
        do {
          if (*(short *)(*(longlong *)(lVar1 + 0x4d8) + uVar5 * 2) == sVar2) {
            if (-1 < (int)uVar5) goto LAB_140335109;
            break;
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar1 + 0x20));
      }
    }
    uVar3 = 0x12;
  }
  else {
LAB_140335109:
    uVar3 = (**(code **)(param_1 + 0x380))
                      (*(undefined8 *)(param_1 + 8),uVar5,&local_res20,local_res8);
    if ((int)uVar3 == 0) {
      param_3[1] = local_res20;
      if (local_res20 != 0) {
        param_3[3] = local_res20;
        param_3[2] = (ulonglong)local_res8[0] + local_res20;
        return 0;
      }
      param_3[2] = 0;
      param_3[3] = 0;
      return 0;
    }
  }
  return uVar3;
}

