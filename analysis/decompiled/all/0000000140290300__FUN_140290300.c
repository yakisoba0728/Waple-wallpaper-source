// Function: FUN_140290300
// Addr: 140290300
// Size: 735 bytes


void FUN_140290300(undefined8 param_1,ulonglong *param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  uint local_2a0 [2];
  ulonglong local_298;
  undefined4 local_290;
  uint local_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  uint local_280;
  uint local_278 [5];
  ulonglong local_264;
  undefined4 local_25c;
  uint local_258;
  ulonglong local_28;
  
  local_28 = DAT_1404dc110 ^ (ulonglong)auStack_2c8;
  uVar3 = param_3 & 0xfffffffe;
  if (((param_3 & 1) == 0) || ((param_3 & 4) == 0)) {
    if ((((param_3 & 2) != 0) && (param_4 != 0xffffffff)) &&
       (((param_4 >> 10 & 1) == 0 || ((param_3 & 1) == 0)))) {
      uVar3 = param_3 & 0xfffffffc;
      *(uint *)(param_2 + 2) = param_4;
    }
    if (uVar3 == 0) goto LAB_1402905d9;
    if (((uVar3 & 0x2a) != 0) &&
       (((param_4 == 0xffffffff || ((param_4 >> 10 & 1) == 0)) || ((param_3 & 1) == 0)))) {
      iVar1 = (*DAT_140426638)(param_1,0,local_2a0);
      if (iVar1 == 0) {
        iVar1 = (*DAT_1404266a8)();
        if (iVar1 != 0x20) goto LAB_1402905d9;
        lVar2 = (*DAT_1404266c8)(param_1,local_278);
        if (lVar2 == -1) {
          (*DAT_1404266a8)();
          goto LAB_1402905d9;
        }
        (*DAT_1404266d0)(lVar2);
        local_28c = (uint)local_264;
        uStack_288 = (undefined4)(local_264 >> 0x20);
      }
      else {
        local_264 = CONCAT44(uStack_288,local_28c);
        local_278[0] = local_2a0[0];
        local_258 = local_280;
        local_25c = local_284;
      }
      if (((param_3 & 1) == 0) || ((local_278[0] & 0x400) == 0)) {
        *(uint *)(param_2 + 2) = local_278[0];
        param_2[1] = CONCAT44(local_25c,local_258);
        *param_2 = local_264 & 0xffffffff00000000 | (ulonglong)local_28c;
        uVar4 = uVar3 & 0xffffffd5;
        if (((local_278[0] & 0x400) == 0) && ((uVar3 & 4) != 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          uVar4 = uVar3 & 0xffffffd1;
        }
        uVar3 = uVar4;
        if (uVar3 == 0) goto LAB_1402905d9;
      }
    }
    iVar1 = func_0x000140290650(&local_2a8,param_1,0x80,(((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000)
    ;
    if (iVar1 == 0) {
      lVar2 = CONCAT44(uStack_2a4,local_2a8);
      uVar4 = uVar3;
      if ((uVar3 & 0x26) != 0) {
        iVar1 = (*DAT_1404265d8)(lVar2,0,local_2a0,0x28);
        if (iVar1 == 0) {
          (*DAT_1404266a8)();
          if ((lVar2 != -1) && (iVar1 = (*DAT_140426368)(lVar2), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402c98b4();
          }
          goto LAB_1402905d9;
        }
        uVar4 = uVar3 & 0xffffffdd;
        *(uint *)(param_2 + 2) = local_280;
        *param_2 = CONCAT44(local_28c,local_290);
        if ((uVar3 & 4) != 0) {
          if ((local_280 >> 10 & 1) == 0) {
            *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          }
          else {
            iVar1 = (*DAT_1404265d8)(lVar2,9,&local_2a8,8);
            if (iVar1 == 0) {
              (*DAT_1404266a8)();
              if ((lVar2 != -1) && (iVar1 = (*DAT_140426368)(lVar2), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_1402c98b4();
              }
              goto LAB_1402905d9;
            }
            *(undefined4 *)((longlong)param_2 + 0x14) = uStack_2a4;
          }
          uVar4 = uVar3 & 0xffffffd9;
        }
      }
      if ((uVar4 & 0x18) != 0) {
        iVar1 = (*DAT_1404265d8)(lVar2,1,local_2a0,0x18);
        if (iVar1 == 0) {
          (*DAT_1404266a8)();
          if ((lVar2 != -1) && (iVar1 = (*DAT_140426368)(lVar2), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402c98b4();
          }
          goto LAB_1402905d9;
        }
        uVar4 = uVar4 & 0xffffffe7;
        param_2[1] = local_298;
        *(undefined4 *)(param_2 + 3) = local_290;
      }
      if (uVar4 != 0) {
        if ((lVar2 == -1) || (iVar1 = (*DAT_140426368)(lVar2), iVar1 != 0)) goto LAB_1402905d9;
        goto UNWIND_INFO_1402905fb_UnwindCodes_14__OffsetInProlog;
      }
      if (lVar2 == -1) goto LAB_1402905d9;
      iVar1 = (*DAT_140426368)(lVar2);
    }
    else {
      if (CONCAT44(uStack_2a4,local_2a8) == -1) goto LAB_1402905d9;
      iVar1 = (*DAT_140426368)();
    }
    if (iVar1 == 0) {
UNWIND_INFO_1402905fb_UnwindCodes_14__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
      FUN_1402c98b4();
    }
  }
LAB_1402905d9:
  func_0x0001402ed2f0(local_28 ^ (ulonglong)auStack_2c8);
  return;
}

