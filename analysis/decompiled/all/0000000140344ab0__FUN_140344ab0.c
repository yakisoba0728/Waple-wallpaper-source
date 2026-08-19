// Function: FUN_140344ab0
// Addr: 140344ab0
// Size: 278 bytes


ulonglong FUN_140344ab0(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
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
  longlong lStack_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined4 local_44;
  undefined4 local_40;
  uint uStack_3c;
  uint uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  
  iVar2 = *(int *)(param_1 + 0x474);
  if ((iVar2 == 1) || (iVar2 == 2)) {
    uVar5 = 0x8e;
    if (*(int *)(param_1 + 0x4d4) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x480) + (param_2 & 0xffffffff) * 4);
      uVar5 = func_0x0001402f5d20(uVar3,*(undefined4 *)(param_1 + 0x4d0));
      if ((int)uVar5 == 0) {
        lStack_30 = *(longlong *)(param_1 + 0x468);
        uVar4 = *(uint *)(param_1 + 0x470);
        local_58 = *(longlong *)(param_1 + 0x78) + 0x68;
        uVar6 = iVar2 * 0x30;
        local_50 = param_7;
        local_44 = *(undefined4 *)(param_1 + 0x4d0);
        local_40 = *(undefined4 *)(param_1 + 0x4d4);
        lStack_28 = lStack_30 + (ulonglong)uVar4;
        uStack_48 = 0;
        lStack_68 = param_1;
        uStack_60 = uVar3;
        if (uVar6 + 0x37 <= uVar4) {
          lVar7 = (ulonglong)uVar6 + lStack_30;
          uStack_3c = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar7 + 8),
                                                 *(undefined1 *)(lVar7 + 9)),
                                        *(undefined1 *)(lVar7 + 10)),*(undefined1 *)(lVar7 + 0xb));
          uStack_38 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar7 + 0x10),
                                                 *(undefined1 *)(lVar7 + 0x11)),
                                        *(undefined1 *)(lVar7 + 0x12)),*(undefined1 *)(lVar7 + 0x13)
                              );
          uStack_46 = *(undefined1 *)(lVar7 + 0x36);
          if ((uStack_3c <= uVar4) && (uStack_38 <= uVar4 - uStack_3c >> 3)) {
            uVar5 = FUN_14034e6c0(&lStack_68,param_3 & 0xffffffff,0,0,
                                  in_stack_ffffffffffffff78 & 0xffffffff00000000,
                                  CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff80 >> 8),
                                           (char)((param_4 & 0xffffffff) >> 0x16)) &
                                  0xffffffffffffff01);
            goto UNWIND_INFO_140344c55_UnwindCodes_24__OffsetInProlog;
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
    uVar5 = FUN_14034d970(param_1,param_2,param_3,param_5,param_6,param_7,
                          (byte)((param_4 & 0xffffffff) >> 0x16) & 1);
  }
UNWIND_INFO_140344c55_UnwindCodes_24__OffsetInProlog:
  if ((((int)uVar5 == 0) && ((param_4 & 0x500000) == 0)) && (*(char *)(param_6 + 0x1a) == '\a')) {
    uVar3 = **(undefined8 **)(param_1 + 0x78);
    FUN_1402fb360(&lStack_68);
    uVar4 = func_0x0001402faca0(uVar3,param_6,&lStack_68,1);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      *(undefined1 *)(param_6 + 0x1a) = local_50._2_1_;
      *(undefined4 *)(param_6 + 8) = (undefined4)uStack_60;
      *(undefined2 *)(param_6 + 0x18) = (undefined2)local_50;
      func_0x0001402f76a0(*(undefined8 *)(param_1 + 0x78),local_58);
      puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0xf0) + 8);
      *puVar1 = *puVar1 | 1;
    }
    else {
      func_0x0001402fb300(uVar3,&lStack_68);
    }
  }
  return uVar5;
}

