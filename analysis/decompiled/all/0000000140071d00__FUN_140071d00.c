// Function: FUN_140071d00
// Addr: 140071d00
// Size: 193 bytes


void FUN_140071d00(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *local_res8;
  
  local_res8 = param_1;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_140030eb0(&DAT_1404e6498,&local_res8,param_2);
    plVar2 = local_res8;
    if (local_res8 != DAT_1404e64a0) {
      if (local_res8[6] != 0) {
        FUN_140065610();
      }
      lVar4 = lRam00000001404e64b0;
      plVar3 = DAT_1404e64a0;
      if ((ulonglong)plVar2[5] < 0x10) {
        plVar7 = plVar2 + 2;
      }
      else {
        plVar7 = (longlong *)plVar2[2];
      }
      uVar6 = 0;
      uVar5 = 0xcbf29ce484222325;
      if (plVar2[4] != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar7 + uVar6);
          uVar6 = uVar6 + 1;
          uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
        } while (uVar6 < (ulonglong)plVar2[4]);
      }
      uVar5 = uVar5 & uRam00000001404e64c8;
      plVar7 = *(longlong **)(lRam00000001404e64b0 + uVar5 * 0x10);
      if (*(longlong **)(lRam00000001404e64b0 + 8 + uVar5 * 0x10) == plVar2) {
        if (plVar7 == plVar2) {
          *(longlong **)(lRam00000001404e64b0 + uVar5 * 0x10) = DAT_1404e64a0;
          *(longlong **)(lVar4 + 8 + uVar5 * 0x10) = plVar3;
        }
        else {
          *(longlong *)(lRam00000001404e64b0 + 8 + uVar5 * 0x10) = plVar2[1];
        }
      }
      else if (plVar7 == plVar2) {
        *(longlong *)(lRam00000001404e64b0 + uVar5 * 0x10) = *plVar2;
      }
      lVar4 = *plVar2;
      lRam00000001404e64a8 = lRam00000001404e64a8 + -1;
      *(longlong *)plVar2[1] = lVar4;
      *(longlong *)(lVar4 + 8) = plVar2[1];
                    /* WARNING: Subroutine does not return */
      FUN_140017310(plVar2 + 2);
    }
    return;
  }
  plVar2 = (longlong *)*DAT_1404e64a0;
  while( true ) {
    if (plVar2 == DAT_1404e64a0) {
      FUN_140078b10(&DAT_1404e6498);
      return;
    }
    plVar3 = (longlong *)plVar2[6];
    if (plVar3 != (longlong *)0x0) break;
    plVar2 = (longlong *)*plVar2;
  }
  if ((longlong *)*plVar3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar3 + 0x18))();
  }
  *plVar3 = 0;
  (*DAT_140426808)(plVar3[1]);
  func_0x00014028b040(plVar3,0x18);
  return;
}

