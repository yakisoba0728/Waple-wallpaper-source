// Function: FUN_14017bd10
// Addr: 14017bd10
// Size: 172 bytes


void FUN_14017bd10(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 uStackX_18;
  undefined8 *puStackX_20;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (*(ulonglong *)(lVar2 + 0x10) != 0)) {
    plVar3 = *(longlong **)(lVar2 + 8);
    if (*(ulonglong *)(lVar2 + 0x10) < *(ulonglong *)(lVar2 + 0x38) >> 3) {
      plVar4 = (longlong *)*plVar3;
      if (plVar4 != plVar3) {
        puVar8 = plVar4 + 2;
        local_res10 = *(longlong *)(lVar2 + 0x18);
        local_res8 = plVar4[1];
        if (0xf < (ulonglong)plVar4[5]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        uVar6 = 0;
        uVar7 = 0xcbf29ce484222325;
        if (plVar4[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar8 + uVar6);
            uVar6 = uVar6 + 1;
            uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
          } while (uVar6 < (ulonglong)plVar4[4]);
        }
        puStackX_20 = (undefined8 *)
                      ((*(ulonglong *)(lVar2 + 0x30) & uVar7) * 0x10 + 8 + local_res10);
        uStackX_18 = *puStackX_20;
        func_0x00014000dab0(plVar4 + 6);
                    /* WARNING: Subroutine does not return */
        FUN_140017310(plVar4 + 2);
      }
    }
    else {
      *(undefined8 *)plVar3[1] = 0;
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        func_0x00014000dab0(lVar5 + 0x30);
                    /* WARNING: Subroutine does not return */
        FUN_140017310(lVar5 + 0x10);
      }
      *(undefined8 *)*(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar2 + 8);
      *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = *(longlong *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      local_res8 = *(undefined8 *)(lVar2 + 8);
      func_0x00014000f8a0(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),&local_res8,
                          param_4,plVar3);
    }
  }
  return;
}

