// Function: FUN_1401d60b0
// Addr: 1401d60b0
// Size: 846 bytes


void FUN_1401d60b0(longlong param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  byte bStackX_19;
  byte bStackX_1a;
  byte bStackX_1b;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar8 = ((((((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
                  0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff)
                * 0x100000001b3 ^ param_2 >> 0x20 & 0xff) * 0x100000001b3 ^ param_2 >> 0x28 & 0xff)
              * 0x100000001b3 ^ param_2 >> 0x30 & 0xff) * 0x100000001b3 ^ param_2 >> 0x38) *
            0x100000001b3 & *(ulonglong *)(param_1 + 0x210);
    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + 8 + uVar8 * 0x10);
    if (plVar9 == *(longlong **)(param_1 + 0x1e8)) {
LAB_1401d61c1:
      plVar9 = (longlong *)0x0;
    }
    else {
      uVar2 = plVar9[2];
      while (param_2 != uVar2) {
        if (plVar9 == *(longlong **)(*(longlong *)(param_1 + 0x1f8) + uVar8 * 0x10))
        goto LAB_1401d61c1;
        plVar9 = (longlong *)plVar9[1];
        uVar2 = plVar9[2];
      }
    }
    if ((plVar9 != (longlong *)0x0) && (plVar9 != *(longlong **)(param_1 + 0x1e8))) {
      bStackX_19 = (byte)((uint)param_3 >> 8);
      bStackX_1a = (byte)((uint)param_3 >> 0x10);
      bStackX_1b = (byte)((uint)param_3 >> 0x18);
      lVar3 = plVar9[6];
      uVar8 = plVar9[9] &
              (((((ulonglong)(byte)param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)bStackX_19) * 0x100000001b3 ^ (ulonglong)bStackX_1a) * 0x100000001b3 ^
              (ulonglong)bStackX_1b) * 0x100000001b3;
      plVar4 = (longlong *)plVar9[4];
      plVar10 = *(longlong **)(lVar3 + 8 + uVar8 * 0x10);
      if (plVar10 == plVar4) {
LAB_1401d6242:
        plVar10 = (longlong *)0x0;
      }
      else {
        iVar1 = (int)plVar10[2];
        while (param_3 != iVar1) {
          if (plVar10 == *(longlong **)(lVar3 + uVar8 * 0x10)) goto LAB_1401d6242;
          plVar10 = (longlong *)plVar10[1];
          iVar1 = (int)plVar10[2];
        }
      }
      if ((plVar10 != (longlong *)0x0) && (plVar10 != plVar4)) {
        uVar8 = plVar9[9] &
                (((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3;
        plVar5 = *(longlong **)(lVar3 + uVar8 * 0x10);
        if (*(longlong **)(lVar3 + 8 + uVar8 * 0x10) == plVar10) {
          if (plVar5 == plVar10) {
            *(longlong **)(lVar3 + uVar8 * 0x10) = plVar4;
            *(longlong **)(lVar3 + 8 + uVar8 * 0x10) = plVar4;
          }
          else {
            *(longlong *)(lVar3 + 8 + uVar8 * 0x10) = plVar10[1];
          }
        }
        else if (plVar5 == plVar10) {
          *(longlong *)(lVar3 + uVar8 * 0x10) = *plVar10;
        }
        lVar6 = *plVar10;
        plVar9[5] = plVar9[5] + -1;
        *(longlong *)plVar10[1] = lVar6;
        *(longlong *)(lVar6 + 8) = plVar10[1];
        plVar4 = (longlong *)plVar10[10];
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x20))
                    (plVar4,CONCAT71((int7)((ulonglong)lVar3 >> 8),plVar4 != plVar10 + 3));
          plVar10[10] = 0;
        }
        thunk_FUN_14028af80(plVar10,0x58);
        if (plVar9[5] == 0) {
          uVar8 = *(ulonglong *)(param_1 + 0x210) &
                  (((((((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar9 + 0x14)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar9 + 0x15)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x16)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x17)) * 0x100000001b3;
          lVar3 = *(longlong *)(param_1 + 0x1f8);
          plVar4 = *(longlong **)(lVar3 + uVar8 * 0x10);
          if (*(longlong **)(lVar3 + 8 + uVar8 * 0x10) == plVar9) {
            if (plVar4 == plVar9) {
              uVar7 = *(undefined8 *)(param_1 + 0x1e8);
              *(undefined8 *)(lVar3 + uVar8 * 0x10) = uVar7;
              *(undefined8 *)(lVar3 + 8 + uVar8 * 0x10) = uVar7;
            }
            else {
              *(longlong *)(lVar3 + 8 + uVar8 * 0x10) = plVar9[1];
            }
          }
          else if (plVar4 == plVar9) {
            *(longlong *)(lVar3 + uVar8 * 0x10) = *plVar9;
          }
          lVar3 = *plVar9;
          *(longlong *)(param_1 + 0x1f0) = *(longlong *)(param_1 + 0x1f0) + -1;
          *(longlong *)plVar9[1] = lVar3;
          *(longlong *)(lVar3 + 8) = plVar9[1];
          FUN_14000d9e0(plVar9 + 6);
          FUN_1400d2120(plVar9 + 4);
          thunk_FUN_14028af80(plVar9,0x58);
        }
      }
    }
  }
  return;
}

