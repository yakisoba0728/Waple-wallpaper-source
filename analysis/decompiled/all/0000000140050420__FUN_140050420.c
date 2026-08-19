// Function: FUN_140050420
// Addr: 140050420
// Size: 97 bytes


void FUN_140050420(longlong *param_1)

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
  ulonglong uVar12;
  longlong lStackX_8;
  longlong lStackX_10;
  longlong *plStackX_18;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x10) != 0)) {
    plVar2 = *(longlong **)(lVar1 + 8);
    if (*(ulonglong *)(lVar1 + 0x10) < *(ulonglong *)(lVar1 + 0x38) >> 3) {
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != plVar2) {
        lStackX_10 = *(longlong *)(lVar1 + 0x18);
        plVar4 = (longlong *)plVar3[1];
        lVar7 = (*(ulonglong *)(lVar1 + 0x30) &
                (((((ulonglong)*(byte *)(plVar3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar3 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar3 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar3 + 0x13)) * 0x100000001b3) * 0x10;
        plStackX_18 = (longlong *)(lStackX_10 + 8 + lVar7);
        plVar11 = (longlong *)(lVar7 + lStackX_10);
        lStackX_8 = *(longlong *)(lVar7 + lStackX_10);
        plVar8 = (longlong *)*plStackX_18;
        plVar9 = plVar3;
        do {
          plVar10 = (longlong *)*plVar9;
          func_0x00014028b040(plVar9,0x18);
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
          if (plVar9 == plVar8) {
            plVar8 = plVar4;
            if ((longlong *)lStackX_8 == plVar3) {
              *plVar11 = (longlong)plVar2;
              plVar8 = plVar2;
            }
            *plStackX_18 = (longlong)plVar8;
            while (plVar10 != plVar2) {
              uVar12 = *(ulonglong *)(lVar1 + 0x30) &
                       (((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3;
              plVar3 = *(longlong **)(lStackX_10 + 8 + uVar12 * 0x10);
              plVar11 = (longlong *)(lStackX_10 + uVar12 * 0x10);
              plVar8 = plVar10;
              while( true ) {
                plVar10 = (longlong *)*plVar8;
                func_0x00014028b040(plVar8,0x18);
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
                if (plVar8 == plVar3) break;
                plVar8 = plVar10;
                if (plVar10 == plVar2) goto code_r0x000140050528;
              }
              *plVar11 = (longlong)plVar2;
              *(longlong **)(lStackX_10 + 8 + uVar12 * 0x10) = plVar2;
            }
            goto code_r0x00014005052c;
          }
          plVar9 = plVar10;
        } while (plVar10 != plVar2);
        if ((longlong *)lStackX_8 == plVar3) {
code_r0x000140050528:
          *plVar11 = (longlong)plVar10;
        }
code_r0x00014005052c:
        *plVar4 = (longlong)plVar10;
        plVar10[1] = (longlong)plVar4;
        return;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      puVar6 = (undefined8 *)*plVar2;
      while (puVar6 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar6;
        func_0x00014028b040(puVar6,0x18);
        puVar6 = puVar5;
      }
      *(undefined8 *)*(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 8);
      *(longlong *)(*(longlong *)(lVar1 + 8) + 8) = *(longlong *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      lStackX_8 = *(longlong *)(lVar1 + 8);
      func_0x00014000f8a0(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),&lStackX_8);
    }
  }
  return;
}

