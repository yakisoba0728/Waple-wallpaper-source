// Function: FUN_1403b17c0
// Addr: 1403b17c0
// Size: 499 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1403b17c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar7;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1b8 [160];
  longlong local_118;
  undefined1 local_110 [48];
  longlong local_e0;
  uint local_9c;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong uVar6;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_1f8;
  lVar1 = *(longlong *)(param_1 + 0x98);
  if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar6 = 0;
    puVar4 = *(uint **)(lVar1 + 0x20);
    while (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)_calloc_base(1,0x98);
      if (puVar4 == (uint *)0x0) {
LAB_1403b186a:
        puVar4 = (uint *)&DAT_14045dd10;
      }
      else {
        *puVar4 = 0;
        *(undefined1 *)(puVar4 + 1) = 0;
        cVar2 = FUN_1403b1190(puVar4,param_1,param_2);
        if ((cVar2 == '\0') && (cVar2 = FUN_1403b14c0(puVar4,param_1,param_2), cVar2 == '\0')) {
          thunk_FUN_1402d9040(puVar4);
          goto LAB_1403b186a;
        }
      }
      LOCK();
      bVar7 = *(longlong *)(lVar1 + 0x20) == 0;
      if (bVar7) {
        *(longlong *)(lVar1 + 0x20) = (longlong)puVar4;
      }
      UNLOCK();
      if (bVar7) break;
      FUN_1403b10d0(puVar4);
      puVar4 = *(uint **)(lVar1 + 0x20);
    }
    local_1d0 = 0;
    local_1d8 = &DAT_14045dd10;
    FUN_140394db0(local_1b8,0,param_2,param_3);
    if (*puVar4 != 0) {
      do {
        if (*(longlong *)(puVar4 + uVar6 * 2 + 10) != 0) {
          local_9c = puVar4[uVar6 + 2];
          local_80 = 0xffffffff;
          local_7c = 0;
          FUN_1403e3b80(local_1b8);
          if (*(longlong *)(puVar4 + uVar6 * 2 + 0x18) != 0) {
            FUN_14036c980(local_1b8,*(undefined8 *)(puVar4 + uVar6 * 2 + 10));
          }
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *puVar4);
    }
    if (*(longlong *)(local_118 + 0xe8) != 0) {
      *(undefined8 *)(local_118 + 0x100) = local_48;
      *(undefined8 *)(local_118 + 0x108) = local_40;
    }
    if (1 < (uint)local_78 + 1) {
      local_78 = (ulonglong)(uint)local_78;
      thunk_FUN_1402d9040(local_70);
    }
    local_78 = 0;
    local_70 = 0;
    if (local_e0 != 0) {
      FUN_1403beff0(local_110);
    }
    uVar3 = 1;
  }
  return uVar3;
}

