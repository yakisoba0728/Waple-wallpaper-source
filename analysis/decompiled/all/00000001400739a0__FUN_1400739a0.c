// Function: FUN_1400739a0
// Addr: 1400739a0
// Size: 275 bytes


void FUN_1400739a0(void)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 local_28 [16];
  
  puVar6 = DAT_1404e5330;
  for (puVar3 = (undefined8 *)*DAT_1404e5330; puVar3 != puVar6; puVar3 = (undefined8 *)*puVar3) {
    plVar4 = (longlong *)puVar3[6];
    if (plVar4 != (longlong *)0x0) {
      puVar1 = puVar3 + 2;
      puVar10 = puVar1;
      if (0xf < (ulonglong)puVar3[5]) {
        puVar10 = (undefined8 *)*puVar1;
      }
      uVar7 = 0;
      uVar12 = 0xcbf29ce484222325;
      if (puVar3[4] != 0) {
        do {
          pbVar2 = (byte *)((longlong)puVar10 + uVar7);
          uVar7 = uVar7 + 1;
          uVar12 = (uVar12 ^ *pbVar2) * 0x100000001b3;
        } while (uVar7 < (ulonglong)puVar3[4]);
      }
      lVar8 = FUN_1400110a0(&DAT_1404e5368,local_28,puVar1,uVar12);
      uVar5 = DAT_1404e52e4;
      lVar9 = DAT_1404e5370;
      if (*(longlong *)(lVar8 + 8) != 0) {
        lVar9 = *(longlong *)(lVar8 + 8);
      }
      if (((DAT_1404e52e4 & 0x21) == 0) &&
         ((lVar9 == DAT_1404e5370 || ((DAT_1404e52e8 >> (*(byte *)(lVar9 + 0x51) & 0x1f) & 1) == 0))
         )) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      (**(code **)(*plVar4 + 0x28))(plVar4,uVar11);
      (**(code **)(*plVar4 + 0x30))(plVar4,(uVar5 & 0xc0) != 0);
    }
  }
  FUN_14006e0c0();
  return;
}

