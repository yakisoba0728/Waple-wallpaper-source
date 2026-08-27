// Function: FUN_14020ef80
// Addr: 14020ef80
// Size: 526 bytes


void FUN_14020ef80(longlong param_1,undefined8 param_2,uint *param_3,longlong *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  char cVar9;
  ulonglong uVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
    uVar3 = *param_3;
    if ((uVar3 >> 9 & 1) == 0) {
      if ((uVar3 & 8) == 0) {
        if (((uVar3 >> 0xb & 1) != 0) && (*param_4 != 0)) {
          plVar1 = *(longlong **)(lVar4 + 0x3d0);
          do {
            plVar6 = plVar1;
            if (plVar6 == *(longlong **)(lVar4 + 0x3d8)) {
              return;
            }
            plVar1 = plVar6 + 1;
          } while (*plVar6 != *param_4);
          FUN_14019e140(*(longlong *)(param_1 + 200) + 0x1478,plVar6);
          lVar4 = *(longlong *)(param_1 + 0x4b8);
          FUN_1404210f0(plVar6,plVar1,*(longlong *)(lVar4 + 0x3d8) - (longlong)plVar1);
          plVar1 = (longlong *)(lVar4 + 0x3d8);
          *plVar1 = *plVar1 + -8;
          *param_5 = 1;
        }
      }
      else {
        uVar10 = (ulonglong)*(int *)*param_4;
        if ((-1 < *(int *)*param_4) &&
           (uVar10 < (ulonglong)(*(longlong *)(lVar4 + 0x3d8) - *(longlong *)(lVar4 + 0x3d0) >> 3)))
        {
          FUN_14019e140(*(longlong *)(param_1 + 200) + 0x1478,
                        *(longlong *)(lVar4 + 0x3d0) + uVar10 * 8);
          lVar7 = *(longlong *)(param_1 + 0x4b8);
          lVar2 = *(longlong *)(lVar7 + 0x3d0) + uVar10 * 8;
          lVar4 = lVar2 + 8;
          FUN_1404210f0(lVar2,lVar4,*(longlong *)(lVar7 + 0x3d8) - lVar4);
          *(longlong *)(lVar7 + 0x3d8) = *(longlong *)(lVar7 + 0x3d8) + -8;
          *param_5 = 1;
        }
      }
    }
    else {
      pcVar5 = (char *)*param_4;
      if (*pcVar5 != '\0') {
        plVar6 = *(longlong **)(lVar4 + 0x3d8);
        plVar1 = *(longlong **)(lVar4 + 0x3d0);
        while (plVar8 = plVar1, plVar8 != plVar6) {
          plVar1 = plVar8 + 1;
          cVar9 = FUN_14000d010(*plVar8 + 0xd8,pcVar5);
          if (cVar9 != '\0') {
            FUN_14019e140(*(longlong *)(param_1 + 200) + 0x1478,plVar8);
            lVar4 = *(longlong *)(param_1 + 0x4b8);
            FUN_1404210f0(plVar8,plVar1,*(longlong *)(lVar4 + 0x3d8) - (longlong)plVar1);
            plVar1 = (longlong *)(lVar4 + 0x3d8);
            *plVar1 = *plVar1 + -8;
            *param_5 = 1;
            plVar1 = plVar8;
          }
        }
      }
    }
  }
  return;
}

