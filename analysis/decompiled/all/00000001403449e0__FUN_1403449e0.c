// Function: FUN_1403449e0
// Addr: 1403449e0
// Size: 629 bytes


ulonglong FUN_1403449e0(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                       undefined8 param_5,longlong param_6,undefined8 param_7)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  longlong local_30;
  longlong local_28;
  
  iVar2 = *(int *)(param_1 + 0x474);
  if ((iVar2 == 1) || (iVar2 == 2)) {
    uVar5 = 0x8e;
    if (*(int *)(param_1 + 0x4d4) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x480) + (param_2 & 0xffffffff) * 4);
      uVar5 = FUN_1402f5c50(uVar3,*(undefined4 *)(param_1 + 0x4d0));
      if ((int)uVar5 == 0) {
        local_30 = *(longlong *)(param_1 + 0x468);
        uVar4 = *(uint *)(param_1 + 0x470);
        local_58 = *(longlong *)(param_1 + 0x78) + 0x68;
        uVar6 = iVar2 * 0x30;
        local_50 = param_7;
        local_44 = *(undefined4 *)(param_1 + 0x4d0);
        local_40 = *(undefined4 *)(param_1 + 0x4d4);
        local_28 = local_30 + (ulonglong)uVar4;
        local_48 = 0;
        local_68 = param_1;
        local_60 = uVar3;
        if (uVar6 + 0x37 <= uVar4) {
          lVar7 = (ulonglong)uVar6 + local_30;
          local_3c = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar7 + 8),
                                                *(undefined1 *)(lVar7 + 9)),
                                       *(undefined1 *)(lVar7 + 10)),*(undefined1 *)(lVar7 + 0xb));
          local_38 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar7 + 0x10),
                                                *(undefined1 *)(lVar7 + 0x11)),
                                       *(undefined1 *)(lVar7 + 0x12)),*(undefined1 *)(lVar7 + 0x13))
          ;
          local_46 = *(undefined1 *)(lVar7 + 0x36);
          if ((local_3c <= uVar4) && (local_38 <= uVar4 - local_3c >> 3)) {
            uVar5 = FUN_14034e5f0(&local_68,param_3 & 0xffffffff,0,0,
                                  in_stack_ffffffffffffff78 & 0xffffffff00000000,
                                  CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff80 >> 8),
                                           (char)((param_4 & 0xffffffff) >> 0x16)) &
                                  0xffffffffffffff01);
            goto LAB_140344bb9;
          }
        }
        uVar5 = 3;
      }
    }
  }
  else {
    if (iVar2 != 3) {
      return 2;
    }
    uVar5 = FUN_14034d8a0(param_1,param_2,param_3,param_5,param_6,param_7,
                          (byte)((param_4 & 0xffffffff) >> 0x16) & 1);
  }
LAB_140344bb9:
  if ((((int)uVar5 == 0) && ((param_4 & 0x500000) == 0)) && (*(char *)(param_6 + 0x1a) == '\a')) {
    uVar3 = **(undefined8 **)(param_1 + 0x78);
    FUN_1402fb290(&local_68);
    uVar4 = FUN_1402fabd0(uVar3,param_6,&local_68,1);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      *(undefined1 *)(param_6 + 0x1a) = local_50._2_1_;
      *(undefined4 *)(param_6 + 8) = (undefined4)local_60;
      *(undefined2 *)(param_6 + 0x18) = (undefined2)local_50;
      FUN_1402f75d0(*(undefined8 *)(param_1 + 0x78),local_58);
      puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0xf0) + 8);
      *puVar1 = *puVar1 | 1;
    }
    else {
      FUN_1402fb230(uVar3,&local_68);
    }
  }
  return uVar5;
}

