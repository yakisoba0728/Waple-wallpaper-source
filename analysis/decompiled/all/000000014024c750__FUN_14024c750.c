// Function: FUN_14024c750
// Addr: 14024c750
// Size: 46 bytes


void FUN_14024c750(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lStackX_8;
  
  pcVar8 = *(char **)(param_1 + 0x330);
  *(undefined1 *)(param_1 + 0x6b4) = 0;
  cVar1 = *pcVar8;
  while (cVar1 != '\0') {
    cVar1 = *pcVar8;
    if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03')) goto code_r0x00014024c7c7;
    *(uint *)(pcVar8 + 0x4c) = *(uint *)(pcVar8 + 0x4c) | 0x80000000;
    pcVar8 = pcVar8 + *(ushort *)(pcVar8 + 2);
    cVar1 = *pcVar8;
  }
  lVar13 = *(longlong *)(param_1 + 0x748);
  lVar9 = *(longlong *)(param_1 + 0x740);
  if (lVar9 != lVar13) {
    do {
      FUN_14022f710(*(undefined8 *)(lVar9 + 8));
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar13);
  }
code_r0x00014024c7c7:
  *(undefined4 *)(param_1 + 0x770) = 0;
  func_0x00014022f790(param_1 + 0x2c0);
  if (*(int *)(param_1 + 0x600) != 0) {
    *(undefined8 *)(param_1 + 0x600) = 0;
    *(undefined4 *)(param_1 + 0x610) = 0;
    func_0x000140421870(*(undefined8 *)(param_1 + 0x520),0,
                        (ulonglong)*(uint *)(param_1 + 0x60c) << 2);
    if (*(longlong *)(param_1 + 0x4d8) != *(longlong *)(param_1 + 0x4e0)) {
      *(longlong *)(param_1 + 0x4e0) = *(longlong *)(param_1 + 0x4d8);
    }
  }
  lVar13 = *(longlong *)(param_1 + 0x748);
  for (lVar9 = *(longlong *)(param_1 + 0x740); lVar9 != lVar13; lVar9 = lVar9 + 0x10) {
    FUN_14022fe60(*(undefined8 *)(lVar9 + 8));
  }
  lVar13 = *(longlong *)(param_1 + 0x760);
  for (lVar9 = *(longlong *)(param_1 + 0x758); lVar9 != lVar13; lVar9 = lVar9 + 0x38) {
    plVar2 = *(longlong **)(lVar9 + 0x10);
    for (plVar10 = *(longlong **)(lVar9 + 8); plVar10 != plVar2; plVar10 = plVar10 + 1) {
      lVar3 = *plVar10;
      if (lVar3 != 0) {
        FUN_14022ad30(lVar3);
        func_0x00014028b040(lVar3,0x4b0);
      }
    }
    if (*(longlong *)(lVar9 + 8) != *(longlong *)(lVar9 + 0x10)) {
      *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 8);
    }
  }
  if (*(ulonglong *)(param_1 + 0x708) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x700);
    if (*(ulonglong *)(param_1 + 0x708) < *(ulonglong *)(param_1 + 0x730) >> 3) {
      plVar10 = (longlong *)*plVar2;
      if (plVar10 != plVar2) {
        lVar13 = *(longlong *)(param_1 + 0x710);
        plVar4 = (longlong *)plVar10[1];
        uVar14 = *(ulonglong *)(param_1 + 0x728) &
                 (((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3;
        lStackX_8 = *(longlong *)(lVar13 + uVar14 * 0x10);
        plVar7 = *(longlong **)(lVar13 + 8 + uVar14 * 0x10);
        plVar11 = plVar10;
        do {
          plVar12 = (longlong *)*plVar11;
          func_0x00014028b040(plVar11,0x18);
          *(longlong *)(param_1 + 0x708) = *(longlong *)(param_1 + 0x708) + -1;
          if (plVar11 == plVar7) {
            plVar7 = plVar4;
            if ((longlong *)lStackX_8 == plVar10) {
              *(longlong **)(lVar13 + uVar14 * 0x10) = plVar2;
              plVar7 = plVar2;
            }
            *(longlong **)(lVar13 + 8 + uVar14 * 0x10) = plVar7;
            while (plVar12 != plVar2) {
              uVar14 = *(ulonglong *)(param_1 + 0x728) &
                       (((((ulonglong)*(byte *)(plVar12 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar12 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar12 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar12 + 0x13)) * 0x100000001b3;
              plVar10 = *(longlong **)(lVar13 + 8 + uVar14 * 0x10);
              plVar7 = plVar12;
              while( true ) {
                plVar12 = (longlong *)*plVar7;
                func_0x00014028b040(plVar7,0x18);
                *(longlong *)(param_1 + 0x708) = *(longlong *)(param_1 + 0x708) + -1;
                if (plVar7 == plVar10) break;
                plVar7 = plVar12;
                if (plVar12 == plVar2) goto code_r0x00014024c98d;
              }
              *(longlong **)(lVar13 + uVar14 * 0x10) = plVar2;
              *(longlong **)(lVar13 + 8 + uVar14 * 0x10) = plVar2;
            }
            goto code_r0x00014024c991;
          }
          plVar11 = plVar12;
        } while (plVar12 != plVar2);
        if ((longlong *)lStackX_8 == plVar10) {
code_r0x00014024c98d:
          *(longlong **)(lVar13 + uVar14 * 0x10) = plVar12;
        }
code_r0x00014024c991:
        *plVar4 = (longlong)plVar12;
        plVar12[1] = (longlong)plVar4;
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
      *(undefined8 *)*(undefined8 *)(param_1 + 0x700) = *(undefined8 *)(param_1 + 0x700);
      *(longlong *)(*(longlong *)(param_1 + 0x700) + 8) = *(longlong *)(param_1 + 0x700);
      *(undefined8 *)(param_1 + 0x708) = 0;
      lStackX_8 = *(longlong *)(param_1 + 0x700);
      func_0x00014000f8a0(*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x718),
                          &lStackX_8);
    }
  }
  return;
}

