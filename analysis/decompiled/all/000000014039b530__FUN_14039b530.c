// Function: FUN_14039b530
// Addr: 14039b530
// Size: 662 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14039b530(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined1 param_5
             ,undefined8 param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined1 auStack_1278 [32];
  undefined8 local_1258;
  undefined8 local_1250;
  undefined8 local_1248;
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
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_1278;
  if ((*(longlong *)(param_1 + 0x40) == 0) || (*(uint *)(param_1 + 0x128) <= param_3)) {
    uVar2 = 0;
  }
  else {
    pcVar1 = *(char **)(param_1 + 0x88);
    if (((pcVar1 != "") && (*pcVar1 != '\0')) && (*pcVar1 == '\x03')) {
      FUN_1403c8ce0(pcVar1 + 1,param_3);
    }
    FUN_140397910(*(undefined8 *)(param_1 + 0x78),&local_1258,param_3);
    FUN_140390910(local_1238,&local_1258,*(undefined8 *)(param_1 + 0x70));
    cVar5 = '\0';
    iVar4 = 200000;
    local_58 = param_5;
    local_1248 = param_6;
    local_60 = 0;
    local_68 = 0;
    local_64 = 0;
    local_1f0 = '\0';
    local_1258 = param_2;
    local_1250 = param_4;
    local_1240 = param_1;
    do {
      uVar6 = local_1224 + 1;
      if (local_1228 < uVar6) {
        uVar3 = 0xffff;
LAB_14039b6db:
        FUN_1403f2d10(uVar3,local_1238,&local_1258);
        cVar5 = local_1f0;
      }
      else {
        uVar3 = (uint)*(byte *)((ulonglong)local_1224 + local_1230);
        if (*(byte *)((ulonglong)local_1224 + local_1230) == 0xc) {
          if (local_1228 < local_1224 + 2) {
            uVar3 = 0xffff;
            local_1224 = uVar6;
            goto LAB_14039b6db;
          }
          uVar3 = *(byte *)((ulonglong)uVar6 + local_1230) + 0x100;
          uVar6 = local_1224 + 2;
        }
        local_1224 = uVar6;
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
            FUN_1403f4e60(local_1238,&local_1258);
          }
          cVar5 = '\x01';
          local_1f0 = '\x01';
        }
        else if (uVar3 != 0x100) goto LAB_14039b6db;
        local_64 = 0;
        local_121c = 0;
      }
      if (((local_1e0 != '\0') || (local_1228 < local_1224)) ||
         ((local_1220 != '\0' || (iVar4 = iVar4 + -1, iVar4 == 0)))) {
        return 0;
      }
    } while (cVar5 == '\0');
    FUN_1403bef40(&local_1258);
    uVar2 = 1;
  }
  return uVar2;
}

