// Function: FUN_1403c5e50
// Addr: 1403c5e50
// Size: 413 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1403c5e50(longlong param_1,uint param_2,longlong param_3,char param_4,
                       undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  float local_c8;
  float local_c4 [3];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98 [2];
  float *local_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_68 [3];
  float local_5c;
  float local_4c;
  float local_40;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_108;
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    local_a8 = 0;
    if (*(char *)(param_3 + 0x78) != '\0') {
      local_a8 = *(undefined4 *)(param_3 + 0x7c);
    }
    local_b0 = *(undefined8 *)(param_3 + 0x80);
    local_88 = local_68;
    local_d8 = param_6;
    local_e0 = param_5;
    local_e8 = local_b8;
    local_a4 = 0;
    local_98[1] = 0;
    local_80 = 0;
    local_7c = 0x7f7fffff;
    local_78 = 0x7f7fffff;
    local_74 = 0xff7fffff;
    local_70 = 0xff7fffff;
    local_98[0] = param_3;
    cVar2 = FUN_140389be0(param_1,param_3,param_2,local_98);
    if (cVar2 == '\0') {
      lVar1 = *(longlong *)(param_3 + 0x20);
      uVar6 = (ulonglong)*(uint *)(lVar1 + 0x14);
      if (*(uint *)(lVar1 + 0x14) == 0) {
        lVar3 = FUN_1403c5340(lVar1 + 0x78);
        uVar5 = (uint)*(byte *)(lVar3 + 0x12) * 0x100 + (uint)*(byte *)(lVar3 + 0x13);
        uVar6 = 1000;
        if (uVar5 - 0x10 < 0x3ff1) {
          uVar6 = (ulonglong)uVar5;
        }
        *(int *)(lVar1 + 0x14) = (int)uVar6;
      }
      if (param_4 == '\0') {
        uVar6 = uVar6 >> 1;
      }
    }
    else {
      if (param_4 == '\0') {
        local_4c = local_5c - local_68[0];
      }
      else {
        local_4c = local_4c - local_40;
      }
      local_c4[0] = 0.0;
      local_c8 = (float)FUN_14041a5c0(local_4c + DAT_1404926c0);
      pfVar4 = &local_c8;
      if (local_c8 < 0.0) {
        pfVar4 = local_c4;
      }
      fVar7 = *pfVar4;
      if (DAT_140471a8c <= *pfVar4) {
        fVar7 = DAT_140471a8c;
      }
      uVar6 = (longlong)fVar7;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

