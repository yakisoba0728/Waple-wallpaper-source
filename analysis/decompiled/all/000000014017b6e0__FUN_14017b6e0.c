// Function: FUN_14017b6e0
// Addr: 14017b6e0
// Size: 157 bytes


void FUN_14017b6e0(longlong *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  undefined8 uStackX_10;
  longlong local_res18;
  undefined8 uStackX_20;
  
  lVar5 = *param_1;
  if ((lVar5 != 0) && (*(ulonglong *)(lVar5 + 0x10) != 0)) {
    plVar2 = *(longlong **)(lVar5 + 8);
    if (*(ulonglong *)(lVar5 + 0x10) < *(ulonglong *)(lVar5 + 0x38) >> 3) {
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != plVar2) {
        puVar8 = plVar3 + 2;
        local_res18 = *(longlong *)(lVar5 + 0x18);
        local_res8 = plVar3[1];
        if (0xf < (ulonglong)plVar3[5]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        uVar6 = 0;
        uVar7 = 0xcbf29ce484222325;
        if (plVar3[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar8 + uVar6);
            uVar6 = uVar6 + 1;
            uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
          } while (uVar6 < (ulonglong)plVar3[4]);
        }
        lVar5 = (*(ulonglong *)(lVar5 + 0x30) & uVar7) * 0x10;
        uStackX_10 = *(undefined8 *)(lVar5 + local_res18);
        uStackX_20 = *(undefined8 *)(local_res18 + 8 + lVar5);
        func_0x000140031c50(plVar3 + 0xb);
                    /* WARNING: Subroutine does not return */
        FUN_140017310(plVar3 + 7);
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      lVar4 = *plVar2;
      if (lVar4 != 0) {
        func_0x000140031c50(lVar4 + 0x58);
                    /* WARNING: Subroutine does not return */
        FUN_140017310(lVar4 + 0x38);
      }
      *(undefined8 *)*(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar5 + 8);
      *(longlong *)(*(longlong *)(lVar5 + 8) + 8) = *(longlong *)(lVar5 + 8);
      *(undefined8 *)(lVar5 + 0x10) = 0;
      local_res8 = *(undefined8 *)(lVar5 + 8);
      func_0x00014000f8a0(*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 0x20),&local_res8);
    }
  }
  return;
}

