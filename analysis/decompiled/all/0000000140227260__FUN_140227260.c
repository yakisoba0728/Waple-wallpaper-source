// Function: FUN_140227260
// Addr: 140227260
// Size: 38 bytes


void FUN_140227260(longlong param_1,undefined8 param_2,uint *param_3,longlong *param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x2d8);
  if (((lVar3 != 0) && (*(longlong **)(param_1 + 0x2e8) != (longlong *)0x0)) &&
     (**(longlong **)(param_1 + 0x2e8) != 0)) {
    uVar2 = *param_3;
    if ((uVar2 >> 9 & 1) == 0) {
      if ((uVar2 & 8) == 0) {
        if (((uVar2 >> 0xb & 1) != 0) && (*param_4 != 0)) {
          plVar8 = *(longlong **)(lVar3 + 0x78);
          do {
            plVar9 = plVar8;
            if (plVar9 == *(longlong **)(lVar3 + 0x80)) {
              return;
            }
            plVar8 = plVar9 + 1;
          } while (*plVar9 != *param_4);
          FUN_14019e140(*(longlong *)(param_1 + 200) + 0x1478,plVar9);
          lVar3 = *(longlong *)(param_1 + 0x2d8);
          FUN_1404210f0(plVar9,plVar8,*(longlong *)(lVar3 + 0x80) - (longlong)plVar8);
          plVar8 = (longlong *)(lVar3 + 0x80);
          *plVar8 = *plVar8 + -8;
          *param_5 = 1;
        }
      }
      else {
        uVar7 = (ulonglong)*(int *)*param_4;
        if ((-1 < *(int *)*param_4) &&
           (uVar7 < (ulonglong)(*(longlong *)(lVar3 + 0x80) - *(longlong *)(lVar3 + 0x78) >> 3))) {
          FUN_14019e140(*(longlong *)(param_1 + 200) + 0x1478,
                        *(longlong *)(lVar3 + 0x78) + uVar7 * 8);
          lVar5 = *(longlong *)(param_1 + 0x2d8);
          lVar1 = *(longlong *)(lVar5 + 0x78) + uVar7 * 8;
          lVar3 = lVar1 + 8;
          FUN_1404210f0(lVar1,lVar3,*(longlong *)(lVar5 + 0x80) - lVar3);
          *(longlong *)(lVar5 + 0x80) = *(longlong *)(lVar5 + 0x80) + -8;
          *param_5 = 1;
        }
      }
    }
    else {
      pcVar4 = (char *)*param_4;
      if ((*pcVar4 != '\0') &&
         (plVar8 = *(longlong **)(lVar3 + 0x78), plVar8 != *(longlong **)(lVar3 + 0x80))) {
        do {
          plVar9 = plVar8 + 1;
          cVar6 = FUN_14000d010(*plVar8 + 0xd8,pcVar4);
          if (cVar6 != '\0') {
            FUN_14019e140(*(longlong *)(param_1 + 200) + 0x1478,plVar8);
            lVar3 = *(longlong *)(param_1 + 0x2d8);
            FUN_1404210f0(plVar8,plVar9,*(longlong *)(lVar3 + 0x80) - (longlong)plVar9);
            plVar9 = (longlong *)(lVar3 + 0x80);
            *plVar9 = *plVar9 + -8;
            *param_5 = 1;
            plVar9 = plVar8;
          }
          plVar8 = plVar9;
        } while (plVar9 != *(longlong **)(*(longlong *)(param_1 + 0x2d8) + 0x80));
      }
    }
  }
  return;
}

