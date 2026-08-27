// Function: FUN_1403c8450
// Addr: 1403c8450
// Size: 627 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1403c8450(longlong param_1,undefined8 param_2,uint param_3,int *param_4,
                       longlong param_5)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_12d8 [32];
  undefined8 local_12b8;
  undefined4 local_12b0;
  undefined1 *local_12a8;
  undefined1 local_12a0 [8];
  double local_1298;
  double dStack_1290;
  double local_1288;
  double dStack_1280;
  undefined1 local_1278 [4592];
  int *local_88;
  longlong *local_80;
  ulonglong local_68;
  
  local_68 = DAT_1404dc040 ^ (ulonglong)auStack_12d8;
  if ((*(longlong *)(param_1 + 0x40) == 0) || (*(uint *)(param_1 + 200) <= param_3)) {
    uVar7 = local_68 & 0xffffffffffffff00;
  }
  else {
    pcVar2 = *(char **)(param_1 + 0x90);
    uVar4 = 0;
    if (pcVar2 != "") {
      cVar3 = *pcVar2;
      if (cVar3 == '\0') {
        uVar4 = (uint)(byte)pcVar2[(ulonglong)param_3 + 1];
      }
      else if (cVar3 == '\x03') {
        uVar4 = FUN_1403c8ce0(pcVar2 + 1,param_3);
      }
      else if (cVar3 == '\x04') {
        uVar4 = FUN_1403c8d90(pcVar2 + 1,param_3);
      }
    }
    FUN_140397a40(*(undefined8 *)(param_1 + 0x80),local_12a0,param_3);
    local_12b0 = *(undefined4 *)(param_5 + 0x10);
    local_12b8 = *(undefined8 *)(param_5 + 8);
    FUN_140361a30(local_1278,local_12a0,param_1,uVar4);
    local_12a8 = local_1278;
    local_1298 = _DAT_140471af0;
    dStack_1290 = _UNK_140471af8;
    local_12a0[0] = 0;
    local_1288 = _DAT_140471b30;
    dStack_1280 = _UNK_140471b38;
    cVar3 = FUN_1403e5280(&local_12a8,local_12a0);
    dVar9 = DAT_140492758;
    if (cVar3 == '\0') {
      uVar7 = 0;
    }
    else {
      iVar6 = 0;
      if (local_1298 < local_1288) {
        dVar8 = (double)FUN_14041a500(local_1298 + DAT_140492758);
        *param_4 = (int)dVar8;
        dVar8 = (double)FUN_14041a500();
        iVar5 = (int)dVar8;
      }
      else {
        *param_4 = 0;
        iVar5 = iVar6;
      }
      param_4[2] = iVar5;
      if (dStack_1290 < dStack_1280) {
        dVar9 = (double)FUN_14041a500(dStack_1280 + dVar9);
        param_4[1] = (int)dVar9;
        dVar9 = (double)FUN_14041a500();
        iVar6 = (int)dVar9;
      }
      else {
        param_4[1] = 0;
      }
      param_4[3] = iVar6;
      FUN_14040a0f0(param_2,param_4);
      uVar7 = 1;
    }
    if (local_88 != (int *)0x0) {
      local_88[1] = 0;
      LOCK();
      lVar1 = *local_80;
      if (lVar1 == 0) {
        *local_80 = (longlong)local_88;
      }
      UNLOCK();
      if (lVar1 != 0) {
        if (1 < *local_88 + 1U) {
          local_88[1] = 0;
          thunk_FUN_1402d9040(*(undefined8 *)(local_88 + 2));
        }
        local_88[0] = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        local_88[3] = 0;
        thunk_FUN_1402d9040(local_88);
      }
    }
  }
  return uVar7;
}

