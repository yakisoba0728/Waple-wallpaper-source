// Function: FUN_14019e370
// Addr: 14019e370
// Size: 50 bytes


void FUN_14019e370(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong *local_res8 [4];
  
  FUN_14019ed60(param_1,local_res8,param_2);
  plVar1 = *(longlong **)(param_1 + 8);
  if (local_res8[0] == plVar1) {
    return;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(local_res8[0] + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)local_res8[0] + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)local_res8[0] + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)local_res8[0] + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)local_res8[0] + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)local_res8[0] + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)local_res8[0] + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)local_res8[0] + 0x17)) * 0x100000001b3;
  lVar2 = *(longlong *)(param_1 + 0x18);
  plVar3 = *(longlong **)(lVar2 + uVar6 * 0x10);
  if (*(longlong **)(lVar2 + 8 + uVar6 * 0x10) == local_res8[0]) {
    if (plVar3 == local_res8[0]) {
      *(longlong **)(lVar2 + uVar6 * 0x10) = plVar1;
      *(longlong **)(lVar2 + 8 + uVar6 * 0x10) = plVar1;
    }
    else {
      *(longlong *)(lVar2 + 8 + uVar6 * 0x10) = local_res8[0][1];
    }
  }
  else if (plVar3 == local_res8[0]) {
    *(longlong *)(lVar2 + uVar6 * 0x10) = *local_res8[0];
  }
  lVar2 = *local_res8[0];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)local_res8[0][1] = lVar2;
  *(longlong *)(lVar2 + 8) = local_res8[0][1];
  if ((local_res8[0] != (longlong *)0x0) &&
     (iVar4 = (*DAT_1404264b8)(DAT_1404e4fa0,0,local_res8[0],uVar6 * 2,unaff_RBX), iVar4 == 0)) {
    uVar5 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

