// Function: FUN_140005ee0
// Addr: 140005ee0
// Size: 377 bytes


longlong * FUN_140005ee0(longlong *param_1)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined1 local_res10;
  int iStackX_14;
  int local_48 [2];
  undefined **local_40;
  undefined8 ***local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong uStack_20;
  
  local_28 = 0;
  lStack_30 = 0;
  local_38 = (undefined8 ****)0x0;
  uStack_20 = 7;
  FUN_140015670(&local_38,0x104,local_res10,0x104,0);
  do {
    uVar2 = (uint)local_28;
    ppppuVar5 = &local_38;
    if (7 < uStack_20) {
      ppppuVar5 = (undefined8 ****)local_38;
    }
    uVar3 = FUN_1402900f0(local_28 & 0xffffffff,ppppuVar5);
    uVar8 = uVar3 & 0xffffffff;
    if (local_28 < uVar8) {
      uVar6 = uVar8 - local_28;
      if (uStack_20 - local_28 < uVar6) {
        FUN_140015670(&local_38,uVar6,local_res10,uVar6,0);
      }
      else {
        ppppuVar5 = &local_38;
        if (7 < uStack_20) {
          ppppuVar5 = (undefined8 ****)local_38;
        }
        puVar7 = (undefined2 *)((longlong)ppppuVar5 + local_28 * 2);
        local_28 = uVar8;
        if (uVar6 != 0) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
        }
        *(undefined2 *)((longlong)ppppuVar5 + uVar8 * 2) = 0;
      }
    }
    else {
      ppppuVar5 = &local_38;
      if (7 < uStack_20) {
        ppppuVar5 = (undefined8 ****)local_38;
      }
      local_28 = uVar8;
      *(undefined2 *)((longlong)ppppuVar5 + uVar8 * 2) = 0;
    }
  } while (uVar2 <= (uint)uVar3);
  iStackX_14 = (int)(uVar3 >> 0x20);
  local_40 = &PTR_PTR_1404df530;
  local_48[0] = iStackX_14;
  if (iStackX_14 != 0) {
    FUN_140015340(iStackX_14,local_48);
    pcVar1 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar1)();
    return plVar4;
  }
  *param_1 = (longlong)local_38;
  param_1[1] = lStack_30;
  param_1[2] = local_28;
  param_1[3] = uStack_20;
  return param_1;
}

