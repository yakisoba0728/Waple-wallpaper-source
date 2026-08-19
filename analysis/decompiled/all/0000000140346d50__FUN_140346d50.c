// Function: FUN_140346d50
// Addr: 140346d50
// Size: 67 bytes


undefined8 FUN_140346d50(longlong param_1,uint param_2,undefined8 *param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 < *(ushort *)(param_1 + 0x174)) {
    lVar2 = *(longlong *)(param_1 + 0x2d8);
    if (lVar2 != 0) {
      uVar4 = (**(code **)(lVar2 + 0x20))(0);
      *param_3 = uVar4;
      iVar3 = *(int *)(param_1 + 0x270);
      if ((iVar3 == 0x20000) || (iVar3 == 0x25000)) {
        if (((*(char *)(param_1 + 0x358) != '\0') ||
            (iVar3 = func_0x0001403497b0(param_1), iVar3 == 0)) &&
           (param_2 < *(ushort *)(param_1 + 0x35a))) {
          uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x360) + (ulonglong)param_2 * 2);
          if (uVar1 < 0x102) {
            uVar4 = (**(code **)(lVar2 + 0x20))((ulonglong)uVar1);
            *param_3 = uVar4;
          }
          else {
            *param_3 = *(undefined8 *)
                        (*(longlong *)(param_1 + 0x368) + -0x810 + (ulonglong)uVar1 * 8);
          }
        }
      }
      else if ((iVar3 == 0x10000) && (*(short *)(param_1 + 0x174) == 0x102)) {
        uVar4 = (**(code **)(lVar2 + 0x20))(param_2);
        *param_3 = uVar4;
      }
      return 0;
    }
    return 7;
  }
  return 0x10;
}

