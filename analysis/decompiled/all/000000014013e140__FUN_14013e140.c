// Function: FUN_14013e140
// Addr: 14013e140
// Size: 685 bytes


void FUN_14013e140(longlong param_1,undefined8 *param_2)

{
  size_t sVar1;
  size_t _Size;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 ***local_48 [2];
  size_t local_38;
  ulonglong local_30;
  
  puVar14 = auStack_68;
  FUN_14013daf0();
  iVar5 = *(int *)(param_1 + 0x50);
  if ((-1 < iVar5) &&
     ((ulonglong)(longlong)iVar5 <
      (ulonglong)
      ((*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3) * -0x71c71c71c71c71c7)))
  {
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar5 * 0x48);
    puVar9 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar9 = (undefined8 *)*param_2;
    }
    sVar1 = puVar8[2];
    if (0xf < (ulonglong)puVar8[3]) {
      puVar8 = (undefined8 *)*puVar8;
    }
    if ((sVar1 == param_2[2]) && ((sVar1 == 0 || (iVar5 = memcmp(puVar8,puVar9,sVar1), iVar5 == 0)))
       ) {
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    }
  }
  if (1 < (ulonglong)
          ((*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3) *
          -0x71c71c71c71c71c7)) {
    FUN_140016fc0(local_48,*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(param_1 + 0x50) * 0x48
                 );
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    puVar9 = *(undefined8 **)(param_1 + 0x58);
    if (puVar9 != puVar8) {
      uVar12 = param_2[3];
      sVar1 = param_2[2];
      do {
        puVar10 = param_2;
        if (0xf < uVar12) {
          puVar10 = (undefined8 *)*param_2;
        }
        _Size = puVar9[2];
        puVar7 = puVar9;
        if (0xf < (ulonglong)puVar9[3]) {
          puVar7 = (undefined8 *)*puVar9;
        }
      } while (((_Size != sVar1) ||
               ((_Size != 0 && (iVar5 = memcmp(puVar7,puVar10,_Size), iVar5 != 0)))) &&
              (puVar9 = puVar9 + 9, puVar9 != puVar8));
      puVar10 = puVar9;
      if (puVar9 != puVar8) {
        while (puVar7 = puVar10 + 9, puVar7 != puVar8) {
          FUN_14000de40(puVar9,puVar7);
          FUN_14000de40(puVar9 + 4,puVar10 + 0xd);
          *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar10 + 0x11);
          puVar9 = puVar9 + 9;
          puVar10 = puVar7;
        }
        lVar13 = *(longlong *)(param_1 + 0x60);
        FUN_140017240(lVar13 + -0x28);
        FUN_140017240(lVar13 + -0x48);
        *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + -0x48;
      }
    }
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    lVar13 = *(longlong *)(param_1 + 0x58);
    if ((*(longlong *)(param_1 + 0x60) - lVar13 >> 3) * -0x71c71c71c71c71c7 != 0) {
      do {
        ppppuVar11 = local_48;
        if (0xf < local_30) {
          ppppuVar11 = (undefined8 ****)local_48[0];
        }
        puVar8 = (undefined8 *)(lVar13 + (longlong)iVar5 * 0x48);
        sVar1 = puVar8[2];
        if (0xf < *(ulonglong *)(lVar13 + 0x18 + (longlong)iVar5 * 0x48)) {
          puVar8 = (undefined8 *)*puVar8;
        }
        if ((sVar1 == local_38) &&
           ((sVar1 == 0 || (iVar6 = memcmp(puVar8,ppppuVar11,sVar1), iVar6 == 0)))) {
          *(int *)(param_1 + 0x50) = iVar5;
        }
        iVar5 = iVar5 + 1;
      } while ((ulonglong)(longlong)iVar5 <
               (ulonglong)((*(longlong *)(param_1 + 0x60) - lVar13 >> 3) * -0x71c71c71c71c71c7));
    }
    if (*(int *)(param_1 + 0x50) < 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    if (0xf < local_30) {
      uVar12 = local_30 + 1;
      ppppuVar11 = (undefined8 ****)local_48[0];
      if (0xfff < uVar12) {
        ppppuVar11 = (undefined8 ****)local_48[0][-1];
        if (0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)ppppuVar11))) {
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar14 = auStack_60;
          goto LAB_14013e3e8;
        }
        uVar12 = local_30 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar11,uVar12);
    }
  }
  lVar13 = *(longlong *)(param_1 + 0xa0);
  lVar2 = *(longlong *)(param_1 + 0xa8);
  while( true ) {
    if (lVar13 == lVar2) {
      FUN_14013d5a0(param_1);
      return;
    }
    plVar3 = *(longlong **)(lVar13 + 0x38);
    if (plVar3 == (longlong *)0x0) break;
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
    lVar13 = lVar13 + 0x40;
  }
LAB_14013e3e8:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + -8) = &UNK_14013e3ed;
  FUN_14028c2c0();
}

