// Function: FUN_14006eea0
// Addr: 14006eea0
// Size: 1 bytes


ulonglong FUN_14006eea0(void)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_28 [16];
  
  puVar4 = DAT_1404e5440;
  puVar3 = DAT_1404e5400;
  uVar9 = 0;
  for (puVar2 = (undefined8 *)*DAT_1404e5400; puVar2 != puVar3; puVar2 = (undefined8 *)*puVar2) {
    if (puVar2[6] != 0) {
      puVar6 = puVar2 + 2;
      puVar8 = puVar6;
      if (0xf < (ulonglong)puVar2[5]) {
        puVar8 = (undefined8 *)*puVar6;
      }
      uVar7 = 0;
      uVar10 = 0xcbf29ce484222325;
      if (puVar2[4] != 0) {
        do {
          pbVar1 = (byte *)((longlong)puVar8 + uVar7);
          uVar7 = uVar7 + 1;
          uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
        } while (uVar7 < (ulonglong)puVar2[4]);
      }
      lVar5 = func_0x000140011170(&DAT_1404e5438,auStack_28,puVar6,uVar10);
      puVar6 = puVar4;
      if (*(undefined8 **)(lVar5 + 8) != (undefined8 *)0x0) {
        puVar6 = *(undefined8 **)(lVar5 + 8);
      }
      if (puVar6 != puVar4) {
        uVar9 = uVar9 | 1L << ((ulonglong)*(byte *)((longlong)puVar6 + 0x51) & 0x3f);
      }
    }
  }
  if ((DAT_1404e53b0 != 0) && (uVar9 != 0)) {
    for (puVar2 = (undefined8 *)*puVar4; puVar2 != puVar4; puVar2 = (undefined8 *)*puVar2) {
      uVar9 = uVar9 | 1L << ((ulonglong)*(byte *)((longlong)puVar2 + 0x51) & 0x3f);
    }
  }
  return uVar9;
}

