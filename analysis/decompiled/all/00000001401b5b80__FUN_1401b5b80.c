// Function: FUN_1401b5b80
// Addr: 1401b5b80
// Size: 510 bytes


longlong * FUN_1401b5b80(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)param_2[1];
  lVar6 = FUN_1401b6e30(param_1,param_2 + 2);
  lVar6 = lVar6 * 0x10;
  plVar9 = (longlong *)(lVar1 + 8 + lVar6);
  plVar4 = *(longlong **)(lVar6 + lVar1);
  plVar5 = (longlong *)*plVar9;
  plVar10 = param_2;
  do {
    plVar11 = (longlong *)*plVar10;
    FUN_14000d9e0(plVar10 + 10);
    FUN_1401b8010(plVar10 + 8);
    FUN_1400efc60(plVar10 + 3);
    thunk_FUN_14028af80(plVar10,0x78);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar10 == plVar5) {
      puVar7 = puVar3;
      if (plVar4 == param_2) {
        *(longlong *)(lVar6 + lVar1) = (longlong)puVar2;
        puVar7 = puVar2;
      }
      *plVar9 = (longlong)puVar7;
      while (plVar11 != param_3) {
        uVar8 = FUN_1401b55d0();
        uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x30);
        plVar5 = *(longlong **)(lVar1 + 8 + uVar8 * 0x10);
        plVar4 = (longlong *)(lVar1 + uVar8 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          FUN_14000d9e0(plVar10 + 10);
          FUN_1401b8010(plVar10 + 8);
          FUN_1400efc60(plVar10 + 3);
          thunk_FUN_14028af80(plVar10,0x78);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar5) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) {
            *plVar4 = (longlong)plVar11;
            goto LAB_1401b5d1d;
          }
        }
        *plVar4 = (longlong)puVar2;
        *(undefined8 **)(lVar1 + 8 + uVar8 * 0x10) = puVar2;
      }
      goto LAB_1401b5d1d;
    }
    plVar10 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
    *(longlong *)(lVar6 + lVar1) = (longlong)plVar11;
  }
LAB_1401b5d1d:
  *puVar3 = plVar11;
  plVar11[1] = (longlong)puVar3;
  return param_3;
}

