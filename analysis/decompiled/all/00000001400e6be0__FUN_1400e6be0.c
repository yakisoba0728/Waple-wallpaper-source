// Function: FUN_1400e6be0
// Addr: 1400e6be0
// Size: 553 bytes


/* WARNING: Removing unreachable block (ram,0x0001400e6c46) */

ulonglong FUN_1400e6be0(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 local_res10;
  ulonglong in_stack_ffffffffffffffa8;
  undefined8 ***local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_38 = 0;
  local_30 = 0xf;
  uStack_40 = 0;
  local_48 = (undefined8 ****)0x0;
  uVar3 = param_3 - param_2;
  if (uVar3 != 0) {
    if (uVar3 != 0) goto LAB_1400e6c51;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_48._0_1_ = 0;
    local_38 = uVar3;
    while( true ) {
      ppppuVar5 = &local_48;
      if (0xf < local_30) {
        ppppuVar5 = (undefined8 ****)local_48;
      }
      ppppuVar4 = &local_48;
      if (0xf < local_30) {
        ppppuVar4 = (undefined8 ****)local_48;
      }
      in_stack_ffffffffffffffa8 = param_1 + 0x10U;
      uVar3 = FUN_140293870(ppppuVar4,local_38 + (longlong)ppppuVar5,param_2,param_3,param_1 + 0x10U
                           );
      if (uVar3 == 0xffffffffffffffff) break;
      if (uVar3 <= local_38) goto LAB_1400e6d00;
LAB_1400e6c51:
      uVar6 = uVar3 - local_38;
      if (local_30 - local_38 < uVar6) {
        FUN_140016cc0(&local_48,uVar6,local_res10,uVar6,
                      in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
      }
      else {
        ppppuVar5 = &local_48;
        if (0xf < local_30) {
          ppppuVar5 = (undefined8 ****)local_48;
        }
        lVar7 = (longlong)ppppuVar5 + local_38;
        local_38 = uVar3;
        FUN_1404217a0(lVar7,0,uVar6);
        *(undefined1 *)(uVar6 + lVar7) = 0;
      }
    }
    uVar3 = 0;
  }
LAB_1400e6d00:
  if (local_38 < uVar3) {
    uVar6 = uVar3 - local_38;
    if (local_30 - local_38 < uVar6) {
      FUN_140016cc0(&local_48,uVar6,local_res10,uVar6,in_stack_ffffffffffffffa8 & 0xffffffffffffff00
                   );
    }
    else {
      ppppuVar5 = &local_48;
      if (0xf < local_30) {
        ppppuVar5 = (undefined8 ****)local_48;
      }
      lVar7 = (longlong)ppppuVar5 + local_38;
      local_38 = uVar3;
      FUN_1404217a0(lVar7,0,uVar6);
      *(undefined1 *)(lVar7 + uVar6) = 0;
    }
  }
  else {
    local_38 = uVar3;
    ppppuVar5 = &local_48;
    if (0xf < local_30) {
      ppppuVar5 = (undefined8 ****)local_48;
    }
    *(undefined1 *)((longlong)ppppuVar5 + uVar3) = 0;
  }
  uVar3 = 0xcbf29ce484222325;
  ppppuVar5 = &local_48;
  if (0xf < local_30) {
    ppppuVar5 = (undefined8 ****)local_48;
  }
  uVar6 = 0;
  if (local_38 != 0) {
    do {
      pbVar1 = (byte *)(uVar6 + (longlong)ppppuVar5);
      uVar6 = uVar6 + 1;
      uVar3 = (uVar3 ^ *pbVar1) * 0x100000001b3;
    } while (uVar6 < local_38);
  }
  if (0xf < local_30) {
    uVar6 = local_30 + 1;
    ppppuVar5 = (undefined8 ****)local_48;
    if (0xfff < uVar6) {
      ppppuVar5 = (undefined8 ****)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)ppppuVar5))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return uVar3;
      }
      uVar6 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar5,uVar6);
  }
  return uVar3 & 0xffffffff;
}

