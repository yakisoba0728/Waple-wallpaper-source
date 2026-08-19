// Function: FUN_140309090
// Addr: 140309090
// Size: 204 bytes


ulonglong FUN_140309090(longlong *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  
  uVar4 = 0;
  lVar6 = *param_1;
  if ((*(byte *)(lVar6 + 8) & 2) != 0) {
    uVar1 = (**(code **)(*(longlong *)(lVar6 + 0x2d0) + 0xe0))(lVar6,param_2,local_res8);
    uVar4 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      lVar6 = *param_1;
      *(undefined4 *)(param_1 + 0x10) = local_res8[0];
      if ((*(byte *)(lVar6 + 8) & 1) != 0) {
        FUN_1402f4cc0();
        FUN_140314e60(param_1);
        return 0;
      }
      uVar4 = (**(code **)(*(longlong *)(lVar6 + 0x2d0) + 0xe8))(lVar6,local_res8[0],param_1 + 3);
      if ((int)uVar4 == 0) {
        return uVar4 & 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return uVar4;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  uVar3 = FUN_1402f4650(*param_1,param_2);
  if ((int)uVar3 == 0) {
    if ((*(byte *)(*param_1 + 8) & 1) != 0) {
      uVar1 = FUN_140314e60(param_1);
      uVar4 = (ulonglong)uVar1;
      if (uVar1 == 0) {
        lVar6 = 0xc;
        if (*(ushort *)param_1[8] <= ((ushort *)param_1[8])[1]) {
          lVar6 = 0x10;
        }
        if ((*param_2 == 4) || (iVar5 = *(int *)(lVar6 + (longlong)param_2), iVar5 == 0)) {
          iVar5 = 0x48;
        }
        uVar2 = FUN_1402f2180(*(undefined2 *)((longlong)param_1 + 0x74),0x1200,iVar5);
        *(undefined4 *)((longlong)param_1 + 0x84) = uVar2;
      }
    }
    return uVar4;
  }
  return uVar3;
}

