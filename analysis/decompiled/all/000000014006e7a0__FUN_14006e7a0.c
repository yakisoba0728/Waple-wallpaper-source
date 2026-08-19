// Function: FUN_14006e7a0
// Addr: 14006e7a0
// Size: 218 bytes


/* WARNING: Removing unreachable block (ram,0x00014006e919) */
/* WARNING: Removing unreachable block (ram,0x00014006e924) */

void FUN_14006e7a0(void)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [16];
  undefined1 local_88 [8];
  uint local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 auStack_60 [72];
  
  lVar6 = DAT_1404e5440;
  puVar5 = DAT_1404e5400;
  if ((DAT_1404e54a8 != 0) && ((DAT_1404e53b4 >> 0xe & 1) == 0)) {
    local_80 = (local_80 >> 8 & 0xfffffe) << 8;
    local_78 = 0;
    uStack_70 = 0;
    puVar3 = (undefined8 *)*DAT_1404e5400;
    local_68 = 0;
    for (; puVar3 != puVar5; puVar3 = (undefined8 *)*puVar3) {
      puVar1 = puVar3 + 2;
      puVar11 = puVar1;
      if (0xf < (ulonglong)puVar3[5]) {
        puVar11 = (undefined8 *)*puVar1;
      }
      uVar10 = 0;
      uVar12 = 0xcbf29ce484222325;
      if (puVar3[4] != 0) {
        do {
          pbVar2 = (byte *)((longlong)puVar11 + uVar10);
          uVar10 = uVar10 + 1;
          uVar12 = (uVar12 ^ *pbVar2) * 0x100000001b3;
        } while (uVar10 < (ulonglong)puVar3[4]);
      }
      lVar7 = func_0x000140011170(&DAT_1404e5438,auStack_98,puVar1,uVar12);
      lVar8 = lVar6;
      if (*(longlong *)(lVar7 + 8) != 0) {
        lVar8 = *(longlong *)(lVar7 + 8);
      }
      if (((lVar8 != lVar6) && (plVar4 = (longlong *)puVar3[6], plVar4 != (longlong *)0x0)) &&
         (*(byte *)(lVar8 + 0x51) != 0xffffffff)) {
        uVar9 = (**(code **)(*plVar4 + 0x98))(plVar4,auStack_60);
                    /* WARNING: Subroutine does not return */
        FUN_140086eb0(uVar9,"wproperties","");
      }
    }
    func_0x000140085510(local_88);
  }
  return;
}

