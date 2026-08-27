// Function: FUN_1401816d0
// Addr: 1401816d0
// Size: 652 bytes


void FUN_1401816d0(longlong *param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  
  if (*(float *)(param_1 + 0x5d) != param_2) {
    lVar1 = *param_1;
    *(float *)(param_1 + 0x5d) = param_2;
    if (lVar1 != 0) {
      plVar2 = *(longlong **)(lVar1 + 0x160);
      for (plVar12 = *(longlong **)(lVar1 + 0x158); plVar12 != plVar2; plVar12 = plVar12 + 1) {
        plVar3 = (longlong *)*plVar12;
        iVar9 = (**(code **)(*plVar3 + 0x60))(plVar3);
        if (iVar9 == 7) {
          if (*(char *)((longlong)plVar3 + 0x30c) != '\x02') {
            if ((*(char *)((longlong)plVar3 + 0x30c) != '\x01') ||
               (0.0 < *(float *)((longlong)plVar3 + 0x2fc))) {
              lVar4 = plVar3[0x59];
              for (lVar11 = plVar3[0x58]; lVar11 != lVar4; lVar11 = lVar11 + 0x38) {
                if ((*(longlong *)(lVar11 + 0x28) != 0) &&
                   (cVar8 = (**(code **)(**(longlong **)(plVar3[0x19] + 0x158) + 0xb0))(),
                   cVar8 == '\0')) {
                  if ((~(byte)((uint)(int)plVar3[0x62] >> 0x1e) & 1) != 0) goto LAB_1401817da;
                  break;
                }
              }
            }
            if (((*(uint *)(plVar3 + 0x62) & 0x40000002) == 0) &&
               (-1 < (int)*(uint *)(plVar3 + 0x62))) {
              FUN_1401f5980(plVar3);
            }
          }
LAB_1401817da:
          lVar4 = plVar3[0x59];
          for (lVar11 = plVar3[0x58]; lVar11 != lVar4; lVar11 = lVar11 + 0x38) {
            if (*(longlong *)(lVar11 + 0x28) != 0) {
              plVar5 = *(longlong **)(plVar3[0x19] + 0x158);
              (**(code **)(*plVar5 + 0xd0))
                        (plVar5,*(longlong *)(lVar11 + 0x28),
                         *(float *)(plVar3 + 0x5e) * *(float *)(plVar3 + 0x5e) *
                         *(float *)(plVar3[0x19] + 0x2d8));
              lVar6 = plVar3[0x19];
              if (0.0 < *(float *)(lVar6 + 0x2d8)) {
                if (((*(uint *)(plVar3 + 0x62) & 0x40000000) == 0) &&
                   (cVar8 = (**(code **)(**(longlong **)(lVar6 + 0x158) + 0xa8))
                                      (*(longlong **)(lVar6 + 0x158),*(undefined8 *)(lVar11 + 0x28))
                   , cVar8 != '\0')) {
                  (**(code **)(**(longlong **)(plVar3[0x19] + 0x158) + 0xb8))
                            (*(longlong **)(plVar3[0x19] + 0x158),*(undefined8 *)(lVar11 + 0x28),
                             *(char *)((longlong)plVar3 + 0x30c) == '\0');
                  break;
                }
              }
              else {
                cVar8 = (**(code **)(**(longlong **)(lVar6 + 0x158) + 0xa0))
                                  (*(longlong **)(lVar6 + 0x158),*(undefined8 *)(lVar11 + 0x28));
                if (((cVar8 != '\0') &&
                    ((**(code **)(**(longlong **)(plVar3[0x19] + 0x158) + 0xc0))
                               (*(longlong **)(plVar3[0x19] + 0x158),*(undefined8 *)(lVar11 + 0x28))
                    , (byte)(*(char *)((longlong)plVar3 + 0x30c) - 1U) < 2)) &&
                   (*(float *)(plVar3 + 0x60) <= 0.0)) {
                  (**(code **)(**(longlong **)(plVar3[0x19] + 0x158) + 200))
                            (*(longlong **)(plVar3[0x19] + 0x158),*(undefined8 *)(lVar11 + 0x28));
                }
              }
            }
          }
        }
      }
      puVar7 = *(undefined8 **)(*(longlong *)(lVar1 + 0xd8) + 0x1468);
      for (puVar10 = *(undefined8 **)(*(longlong *)(lVar1 + 0xd8) + 0x1460); puVar10 != puVar7;
          puVar10 = puVar10 + 1) {
        (**(code **)(*(longlong *)*puVar10 + 0x80))();
      }
    }
  }
  return;
}

