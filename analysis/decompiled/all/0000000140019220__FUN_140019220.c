// Function: FUN_140019220
// Addr: 140019220
// Size: 288 bytes


void FUN_140019220(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (DAT_1404e52b8 == 2) {
    FUN_140098b00("Detected monitors (%s):\n",param_1);
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
  return;
}

