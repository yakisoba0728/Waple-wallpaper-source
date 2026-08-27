// Function: FUN_1403482b0
// Addr: 1403482b0
// Size: 446 bytes


short FUN_1403482b0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  ushort uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  bool bVar11;
  
  sVar10 = 0;
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar4 = *param_2 + 1;
  if (0xffff < uVar4) {
    *param_2 = 0;
    return 0;
  }
LAB_1403482e4:
  if (0xffff < uVar4) goto LAB_140348431;
  do {
    puVar6 = (undefined1 *)(lVar1 + 0x206);
    if (uVar4 >> 8 == 0) {
      uVar5 = (ulonglong)((uVar4 & 0xff) * 2);
      if (CONCAT11(*(undefined1 *)(uVar5 + 6 + lVar1),*(undefined1 *)(uVar5 + 7 + lVar1)) == 0) {
LAB_140348344:
        if (puVar6 != (undefined1 *)0x0) {
          uVar9 = (uint)CONCAT11(*puVar6,puVar6[1]);
          uVar2 = CONCAT11(puVar6[2],puVar6[3]);
          uVar7 = uVar4 & 0xff;
          if ((uVar9 + uVar2 <= uVar7) && (uVar4 < 0x100)) break;
          if (CONCAT11(puVar6[6],puVar6[7]) == 0) {
            if (uVar4 == 0x100) goto LAB_1403483a5;
          }
          else {
            if (uVar7 < uVar9) {
              uVar8 = 0;
              uVar7 = uVar9;
            }
            else {
              uVar8 = uVar7 - uVar9;
            }
            uVar4 = (uVar4 & 0xffffff00) + uVar7;
            puVar3 = puVar6 + (ulonglong)((uint)CONCAT11(puVar6[6],puVar6[7]) + uVar8 * 2) + 6;
            for (; uVar8 < uVar2; uVar8 = uVar8 + 1) {
              if ((CONCAT11(*puVar3,puVar3[1]) != 0) &&
                 (sVar10 = CONCAT11(*puVar3,puVar3[1]) + CONCAT11(puVar6[4],puVar6[5]), sVar10 != 0)
                 ) {
                *param_2 = uVar4;
                return sVar10;
              }
              uVar4 = uVar4 + 1;
              puVar3 = puVar3 + 2;
            }
            if (uVar2 != 0) {
              uVar4 = uVar4 - 1;
            }
          }
        }
      }
    }
    else {
      uVar5 = (ulonglong)((uVar4 >> 8) * 2);
      bVar11 = puVar6 + ((ulonglong)
                         CONCAT11(*(undefined1 *)(uVar5 + 6 + lVar1),
                                  *(undefined1 *)(uVar5 + 7 + lVar1)) & 0xfffffffffffffff8) !=
               puVar6;
      puVar6 = puVar6 + ((ulonglong)
                         CONCAT11(*(undefined1 *)(uVar5 + 6 + lVar1),
                                  *(undefined1 *)(uVar5 + 7 + lVar1)) & 0xfffffffffffffff8);
      if (bVar11) goto LAB_140348344;
    }
LAB_140348431:
    if (uVar4 < 0x100) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar4 = (uVar4 & 0xffffff00) + 0x100;
    }
    if (0xffff < uVar4) {
LAB_1403483a5:
      *param_2 = 0;
      return sVar10;
    }
  } while( true );
  uVar4 = 0x100;
  goto LAB_1403482e4;
}

