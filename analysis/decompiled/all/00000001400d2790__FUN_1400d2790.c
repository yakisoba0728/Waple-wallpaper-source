// Function: FUN_1400d2790
// Addr: 1400d2790
// Size: 198 bytes


void FUN_1400d2790(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  longlong *local_res8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong lStackX_20;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x10) != 0)) {
    plVar2 = *(longlong **)(lVar1 + 8);
    if (*(ulonglong *)(lVar1 + 0x10) < *(ulonglong *)(lVar1 + 0x38) >> 3) {
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != plVar2) {
        local_res8 = (longlong *)plVar3[1];
        lStackX_20 = *(longlong *)(lVar1 + 0x18);
        lVar7 = (*(ulonglong *)(lVar1 + 0x30) &
                (((((ulonglong)*(byte *)(plVar3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar3 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar3 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar3 + 0x13)) * 0x100000001b3) * 0x10;
        plVar9 = (longlong *)(lStackX_20 + 8 + lVar7);
        plStackX_18 = (longlong *)(lVar7 + lStackX_20);
        plStackX_10 = *(longlong **)(lVar7 + lStackX_20);
        plVar8 = (longlong *)*plVar9;
        plVar10 = plVar3;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          plVar4 = (longlong *)plVar10[10];
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar10 + 3);
            plVar10[10] = 0;
          }
          func_0x00014028b040(plVar10,0x58);
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
          if (plVar10 == plVar8) break;
          plVar10 = plVar11;
          if (plVar11 == plVar2) {
            bVar12 = plStackX_10 == plVar3;
            plStackX_10 = plStackX_18;
            if (bVar12) {
code_r0x0001400d28ec:
              *plStackX_10 = (longlong)plVar11;
            }
code_r0x0001400d28ef:
            *local_res8 = (longlong)plVar11;
            plVar11[1] = (longlong)local_res8;
            return;
          }
        }
        plVar8 = local_res8;
        if (plStackX_10 == plVar3) {
          *plStackX_18 = (longlong)plVar2;
          plVar8 = plVar2;
        }
        *plVar9 = (longlong)plVar8;
        while (plVar11 != plVar2) {
          plStackX_18 = (longlong *)
                        ((*(ulonglong *)(lVar1 + 0x30) &
                         (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                           ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3) * 0x10);
          plVar3 = *(longlong **)(lStackX_20 + 8 + (longlong)plStackX_18);
          plStackX_10 = (longlong *)((longlong)plStackX_18 + lStackX_20);
          plVar8 = plVar11;
          while( true ) {
            plVar11 = (longlong *)*plVar8;
            plVar10 = (longlong *)plVar8[10];
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x20))(plVar10,plVar10 != plVar8 + 3);
              plVar8[10] = 0;
            }
            func_0x00014028b040(plVar8,0x58);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
            if (plVar8 == plVar3) break;
            plVar8 = plVar11;
            if (plVar11 == plVar2) goto code_r0x0001400d28ec;
          }
          *plStackX_10 = (longlong)plVar2;
          *(longlong **)(lStackX_20 + 8 + (longlong)plStackX_18) = plVar2;
        }
        goto code_r0x0001400d28ef;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      puVar6 = (undefined8 *)*plVar2;
      while (puVar6 != (undefined8 *)0x0) {
        plVar2 = (longlong *)puVar6[10];
        puVar5 = (undefined8 *)*puVar6;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != puVar6 + 3);
          puVar6[10] = 0;
        }
        func_0x00014028b040(puVar6,0x58);
        puVar6 = puVar5;
      }
      *(undefined8 *)*(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 8);
      *(longlong *)(*(longlong *)(lVar1 + 8) + 8) = *(longlong *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      local_res8 = *(longlong **)(lVar1 + 8);
      func_0x00014000f8a0(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),&local_res8);
    }
  }
  return;
}

