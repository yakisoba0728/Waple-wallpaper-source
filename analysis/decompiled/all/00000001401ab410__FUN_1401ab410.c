// Function: FUN_1401ab410
// Addr: 1401ab410
// Size: 348 bytes


undefined8 FUN_1401ab410(longlong param_1,char *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 ******ppppppuVar4;
  ulonglong uVar5;
  int iVar6;
  size_t sVar7;
  ulonglong uVar8;
  undefined8 *******pppppppuVar9;
  ulonglong uVar10;
  undefined8 *_Buf2;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 ******local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_48 = 0;
  local_40 = 0;
  local_58 = (undefined8 *******)0x0;
  uStack_50 = 0;
  sVar7 = strlen(param_2);
  FUN_140017480(&local_58,param_2,sVar7);
  uVar5 = local_40;
  uVar11 = local_48;
  ppppppuVar4 = local_58;
  uVar8 = 0xcbf29ce484222325;
  pppppppuVar9 = &local_58;
  if (0xf < local_40) {
    pppppppuVar9 = (undefined8 *******)local_58;
  }
  uVar10 = 0;
  if (local_48 != 0) {
    do {
      pbVar1 = (byte *)((longlong)pppppppuVar9 + uVar10);
      uVar10 = uVar10 + 1;
      uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
    } while (uVar10 < local_48);
  }
  uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x30);
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar8 * 0x10);
  if (lVar12 != *(longlong *)(param_1 + 8)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x10);
    while( true ) {
      _Buf2 = (undefined8 *)(lVar12 + 0x10);
      if (0xf < *(ulonglong *)(lVar12 + 0x28)) {
        _Buf2 = (undefined8 *)*_Buf2;
      }
      pppppppuVar9 = &local_58;
      if (0xf < uVar5) {
        pppppppuVar9 = (undefined8 *******)ppppppuVar4;
      }
      if ((uVar11 == *(ulonglong *)(lVar12 + 0x20)) &&
         ((uVar11 == 0 || (iVar6 = memcmp(pppppppuVar9,_Buf2,uVar11), iVar6 == 0))))
      goto LAB_1401ab504;
      if (lVar12 == lVar2) break;
      lVar12 = *(longlong *)(lVar12 + 8);
    }
  }
  lVar12 = 0;
LAB_1401ab504:
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(param_1 + 8);
  }
  if (0xf < uVar5) {
    uVar11 = uVar5 + 1;
    pppppppuVar9 = (undefined8 *******)ppppppuVar4;
    if (0xfff < uVar11) {
      pppppppuVar9 = (undefined8 *******)ppppppuVar4[-1];
      if (0x1f < (ulonglong)((longlong)ppppppuVar4 + (-8 - (longlong)pppppppuVar9))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        return 0;
      }
      uVar11 = uVar5 + 0x28;
    }
    thunk_FUN_14028af80(pppppppuVar9,uVar11);
  }
  if (lVar12 == *(longlong *)(param_1 + 8)) {
    return 0;
  }
  return *(undefined8 *)(lVar12 + 0x30);
}

