// Function: FUN_14019e2a0
// Addr: 14019e2a0
// Size: 255 bytes


void FUN_14019e2a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *local_res8 [4];
  
  FUN_14019ec90(param_1,local_res8,param_2);
  plVar1 = *(longlong **)(param_1 + 8);
  if (local_res8[0] != plVar1) {
    uVar4 = *(ulonglong *)(param_1 + 0x30) &
            (((((((((ulonglong)*(byte *)(local_res8[0] + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)local_res8[0] + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)local_res8[0] + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)local_res8[0] + 0x13)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)local_res8[0] + 0x14)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)local_res8[0] + 0x15)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)local_res8[0] + 0x16)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)local_res8[0] + 0x17)) * 0x100000001b3;
    lVar2 = *(longlong *)(param_1 + 0x18);
    plVar3 = *(longlong **)(lVar2 + uVar4 * 0x10);
    if (*(longlong **)(lVar2 + 8 + uVar4 * 0x10) == local_res8[0]) {
      if (plVar3 == local_res8[0]) {
        *(longlong **)(lVar2 + uVar4 * 0x10) = plVar1;
        *(longlong **)(lVar2 + 8 + uVar4 * 0x10) = plVar1;
      }
      else {
        *(longlong *)(lVar2 + 8 + uVar4 * 0x10) = local_res8[0][1];
      }
    }
    else if (plVar3 == local_res8[0]) {
      *(longlong *)(lVar2 + uVar4 * 0x10) = *local_res8[0];
    }
    lVar2 = *local_res8[0];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    *(longlong *)local_res8[0][1] = lVar2;
    *(longlong *)(lVar2 + 8) = local_res8[0][1];
    thunk_FUN_14028af80(local_res8[0],0x18);
    return;
  }
  return;
}

