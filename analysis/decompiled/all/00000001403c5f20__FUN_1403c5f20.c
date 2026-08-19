// Function: FUN_1403c5f20
// Addr: 1403c5f20
// Size: 89 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403c5f20(float param_1,uint param_2,longlong param_3,char param_4,undefined8 param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  longlong in_RCX;
  int iVar5;
  int iVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined1 auStack_108 [32];
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float fStack_c8;
  float afStack_c4 [3];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong alStack_98 [2];
  float *pfStack_88;
  undefined1 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float afStack_68 [3];
  float fStack_5c;
  float fStack_4c;
  float fStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1404dc110 ^ (ulonglong)auStack_108;
  if (param_2 < *(uint *)(in_RCX + 0x1c)) {
    uStack_a8 = 0;
    if (*(char *)(param_3 + 0x78) != '\0') {
      uStack_a8 = *(undefined4 *)(param_3 + 0x7c);
    }
    uStack_b0 = *(undefined8 *)(param_3 + 0x80);
    pfStack_88 = afStack_68;
    uStack_d8 = param_6;
    uStack_e0 = param_5;
    puStack_e8 = auStack_b8;
    uStack_a4 = 0;
    alStack_98[1] = 0;
    uStack_80 = 0;
    uStack_7c = 0x7f7fffff;
    uStack_78 = 0x7f7fffff;
    uStack_74 = 0xff7fffff;
    uStack_70 = 0xff7fffff;
    alStack_98[0] = param_3;
    cVar2 = FUN_140389cb0(in_RCX,param_3,param_2,alStack_98);
    if (cVar2 == '\0') {
      lVar1 = *(longlong *)(param_3 + 0x20);
      param_1 = extraout_XMM0_Da;
      if (*(int *)(lVar1 + 0x14) == 0) {
        lVar3 = FUN_1403c5410(lVar1 + 0x78);
        iVar5 = (uint)*(byte *)(lVar3 + 0x12) * 0x100 + (uint)*(byte *)(lVar3 + 0x13);
        iVar6 = 1000;
        if (iVar5 - 0x10U < 0x3ff1) {
          iVar6 = iVar5;
        }
        *(int *)(lVar1 + 0x14) = iVar6;
        param_1 = extraout_XMM0_Da_00;
      }
    }
    else {
      if (param_4 == '\0') {
        fStack_4c = fStack_5c - afStack_68[0];
      }
      else {
        fStack_4c = fStack_4c - fStack_40;
      }
      afStack_c4[0] = 0.0;
      fStack_c8 = (float)FUN_14041a690(fStack_4c + DAT_140492790);
      pfVar4 = &fStack_c8;
      if (fStack_c8 < 0.0) {
        pfVar4 = afStack_c4;
      }
      param_1 = *pfVar4;
      if (_UNK_140471b5c <= *pfVar4) {
        param_1 = _UNK_140471b5c;
      }
    }
  }
  func_0x0001402ed2f0(param_1);
  return;
}

