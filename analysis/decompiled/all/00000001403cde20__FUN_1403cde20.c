// Function: FUN_1403cde20
// Addr: 1403cde20
// Size: 382 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1403cde20(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                       longlong param_5)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auStack_1298 [32];
  undefined8 local_1278;
  undefined4 local_1270;
  undefined1 *local_1268;
  undefined8 local_1260;
  undefined8 local_1258;
  undefined1 local_1248 [4592];
  int *local_58;
  longlong *local_50;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1403cde36;
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_1298;
  if ((*(longlong *)(param_1 + 0x40) == 0) || (*(uint *)(param_1 + 200) <= param_3)) {
    local_38 = local_38 & 0xffffffffffffff00;
  }
  else {
    pcVar3 = *(char **)(param_1 + 0x90);
    uVar5 = 0;
    if (pcVar3 != "") {
      cVar2 = *pcVar3;
      if (cVar2 == '\0') {
        uVar5 = (uint)(byte)pcVar3[(ulonglong)param_3 + 1];
      }
      else if (cVar2 == '\x03') {
        uVar5 = FUN_1403c8ce0(pcVar3 + 1,param_3);
      }
      else if (cVar2 == '\x04') {
        uVar5 = FUN_1403c8d90(pcVar3 + 1,param_3);
      }
      else {
        uVar5 = 0;
      }
    }
    FUN_140397a40(*(undefined8 *)(param_1 + 0x80),&local_1260,param_3);
    local_1270 = *(undefined4 *)(param_5 + 0x10);
    local_1278 = *(undefined8 *)(param_5 + 8);
    FUN_140361a30(local_1248,&local_1260,param_1,uVar5);
    local_1268 = local_1248;
    local_1260 = param_4;
    local_1258 = param_2;
    bVar4 = FUN_1403e5510(&local_1268,&local_1260);
    if (local_58 != (int *)0x0) {
      local_58[1] = 0;
      LOCK();
      lVar1 = *local_50;
      if (lVar1 == 0) {
        *local_50 = (longlong)local_58;
      }
      UNLOCK();
      if (lVar1 != 0) {
        if (1 < *local_58 + 1U) {
          local_58[1] = 0;
          thunk_FUN_1402d9040(*(undefined8 *)(local_58 + 2));
        }
        local_58[0] = 0;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        thunk_FUN_1402d9040(local_58);
      }
    }
    local_38 = (ulonglong)bVar4;
  }
  return local_38;
}

