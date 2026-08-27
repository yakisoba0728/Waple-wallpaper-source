// Function: FUN_14001d160
// Addr: 14001d160
// Size: 434 bytes


void FUN_14001d160(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((DAT_1404df540 & 0x264) != 0) {
    DAT_1404df540 = DAT_1404df540 | 0x100;
    return;
  }
  FUN_14012e710();
  if (((byte)DAT_1404e8df8 & 0x10) != 0) {
    KillTimer(DAT_1404e5280,0x7b);
    SetTimer(DAT_1404e5280,0x7b,3000,(TIMERPROC)0x0);
  }
  FUN_140065580();
  FUN_14003cc00();
  if (DAT_1404e52b8 == 2) {
    FUN_140098b00("Detected monitors (%s):\n","Resolution changed");
    iVar2 = 0;
    if (0 < (int)(DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f) {
      do {
        lVar1 = (longlong)iVar2 * 0x88;
        puVar4 = (undefined8 *)(DAT_1404e8ec8 + 0x58 + lVar1);
        if (0xf < *(ulonglong *)(lVar1 + 0x70 + DAT_1404e8ec8)) {
          puVar4 = (undefined8 *)*puVar4;
        }
        puVar3 = (undefined8 *)(DAT_1404e8ec8 + 0x18 + lVar1);
        if (0xf < *(ulonglong *)(lVar1 + 0x30 + DAT_1404e8ec8)) {
          puVar3 = (undefined8 *)*puVar3;
        }
        FUN_140098b00("Monitor %i. Device name \'%s\'. Friendly name \'%s\'. Bounds %i %i %i %i (window %i %i)\n"
                      ,iVar2,puVar3,puVar4,*(undefined4 *)(lVar1 + DAT_1404e8ec8),
                      *(undefined4 *)(lVar1 + 4 + DAT_1404e8ec8),
                      *(undefined4 *)(lVar1 + 8 + DAT_1404e8ec8),
                      *(undefined4 *)(lVar1 + 0xc + DAT_1404e8ec8),
                      *(undefined4 *)(lVar1 + 0x10 + DAT_1404e8ec8),
                      *(undefined4 *)(lVar1 + 0x14 + DAT_1404e8ec8));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f);
    }
  }
  if (((byte)DAT_1404e52e4 & 0xc) == 0) {
    FUN_14001b080();
    if (DAT_1404e64d0 == -1) {
      return;
    }
    FUN_14001cc50(1);
    return;
  }
  DAT_1404df540 = DAT_1404df540 | 0x100;
  return;
}

