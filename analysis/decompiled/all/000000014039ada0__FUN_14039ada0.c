// Function: FUN_14039ada0
// Addr: 14039ada0
// Size: 705 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14039ada0(longlong param_1,uint param_2,undefined8 *param_3,undefined1 param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined1 auStack_1288 [32];
  undefined1 local_1268 [8];
  undefined8 local_1260;
  undefined8 uStack_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  longlong local_1240;
  undefined1 local_1238 [8];
  longlong local_1230;
  uint local_1228;
  uint local_1224;
  char local_1220;
  uint local_121c;
  undefined8 local_1218;
  char local_1f0;
  char local_1e0;
  undefined2 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_1288;
  *param_3 = 0x41dfffffffc00000;
  param_3[1] = 0x41dfffffffc00000;
  param_3[2] = 0xc1e0000000000000;
  param_3[3] = 0xc1e0000000000000;
  if ((*(longlong *)(param_1 + 0x40) == 0) || (*(uint *)(param_1 + 0x128) <= param_2)) {
    uVar2 = 0xc1e0000000000000;
  }
  else {
    pcVar1 = *(char **)(param_1 + 0x88);
    puVar7 = &DAT_14045dd10;
    uVar5 = 0;
    if (pcVar1 != "") {
      if (*pcVar1 == '\0') {
        uVar5 = (uint)(byte)pcVar1[(ulonglong)param_2 + 1];
      }
      else if (*pcVar1 == '\x03') {
        uVar5 = FUN_1403c8ce0(pcVar1 + 1,param_2);
      }
    }
    FUN_140397910(*(undefined8 *)(param_1 + 0x78),local_1268,param_2);
    if (uVar5 < *(uint *)(param_1 + 0x11c)) {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x120) + (ulonglong)uVar5 * 0x28);
    }
    uVar2 = FUN_140390910(local_1238,local_1268,*(undefined8 *)(param_1 + 0x70),puVar7[4]);
    cVar6 = '\0';
    iVar4 = 200000;
    local_60 = 0;
    local_1260 = _DAT_140471af0;
    uStack_1258 = _UNK_140471af8;
    local_68 = 0;
    local_64 = 0;
    local_1268[0] = 0;
    local_1250 = _DAT_140471b30;
    uStack_1248 = _UNK_140471b38;
    local_1f0 = '\0';
    local_1240 = param_1;
    local_58 = param_4;
    do {
      uVar5 = local_1224 + 1;
      if (local_1228 < uVar5) {
        uVar3 = 0xffff;
LAB_14039af6b:
        uVar2 = FUN_1403f2510(uVar3,local_1238,local_1268);
        cVar6 = local_1f0;
      }
      else {
        uVar3 = (uint)*(byte *)((ulonglong)local_1224 + local_1230);
        if (*(byte *)((ulonglong)local_1224 + local_1230) == 0xc) {
          if (local_1228 < local_1224 + 2) {
            uVar3 = 0xffff;
            local_1224 = uVar5;
            goto LAB_14039af6b;
          }
          uVar3 = *(byte *)((ulonglong)uVar5 + local_1230) + 0x100;
          uVar5 = local_1224 + 2;
        }
        local_1224 = uVar5;
        if (uVar3 == 0xe) {
          if ((char)local_68 == '\0') {
            if ((local_121c != 0) && ((local_121c & 1) != 0)) {
              local_60 = local_1218;
              local_68 = 0x100;
              local_64 = 1;
            }
            local_68 = CONCAT11(local_68._1_1_,1);
          }
          if (3 < local_121c) {
            uVar2 = FUN_1403f4b90(local_1238,local_1268);
          }
          cVar6 = '\x01';
          local_1f0 = '\x01';
        }
        else if (uVar3 != 0x100) goto LAB_14039af6b;
        local_64 = 0;
        local_121c = 0;
      }
      if ((((local_1e0 != '\0') || (uVar2 = (ulonglong)local_1228, local_1228 < local_1224)) ||
          (local_1220 != '\0')) || (iVar4 = iVar4 + -1, iVar4 == 0)) {
        return uVar2 & 0xffffffffffffff00;
      }
    } while (cVar6 == '\0');
    uVar2 = CONCAT71((uint7)(uint3)(local_1228 >> 8),1);
    *param_3 = local_1260;
    param_3[1] = uStack_1258;
    param_3[2] = local_1250;
    param_3[3] = uStack_1248;
  }
  return uVar2;
}

