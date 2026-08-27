// Function: FUN_14015ea10
// Addr: 14015ea10
// Size: 383 bytes


void FUN_14015ea10(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  size_t sVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 ****ppppuVar13;
  char *_Str;
  ulonglong uVar14;
  undefined1 local_58 [16];
  undefined8 ***local_48;
  undefined8 uStack_40;
  size_t local_38;
  ulonglong local_30;
  
  lVar2 = *(longlong *)(param_1 + 8);
  puVar11 = (undefined8 *)(param_2 + 0x38);
  puVar10 = puVar11;
  if (0xf < *(ulonglong *)(param_2 + 0x50)) {
    puVar10 = (undefined8 *)*puVar11;
  }
  uVar12 = 0;
  uVar14 = 0xcbf29ce484222325;
  if (*(ulonglong *)(param_2 + 0x48) != 0) {
    do {
      pbVar1 = (byte *)(uVar12 + (longlong)puVar10);
      uVar12 = uVar12 + 1;
      uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
    } while (uVar12 < *(ulonglong *)(param_2 + 0x48));
  }
  lVar7 = FUN_1400110a0(lVar2 + 0x108,local_58,puVar11,uVar14);
  lVar7 = *(longlong *)(lVar7 + 8);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(lVar2 + 0x110);
  }
  uVar9 = *(uint *)(param_3 + 8) & 0xff;
  if (uVar9 - 4 < 2) {
    if (uVar9 == 5) {
      cVar5 = FUN_140086300();
      local_38 = 0;
      local_30 = 0;
      _Str = "0";
      if (cVar5 != '\0') {
        _Str = "1";
      }
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      sVar8 = strlen(_Str);
      FUN_140017480(&local_48,_Str,sVar8);
    }
    else {
      FUN_140085cc0(param_3,&local_48);
    }
    uVar12 = local_30;
    pppuVar4 = local_48;
    if (lVar7 != *(longlong *)(lVar2 + 0x110)) {
      sVar8 = *(size_t *)(lVar7 + 0x40);
      puVar11 = (undefined8 *)(lVar7 + 0x30);
      ppppuVar13 = &local_48;
      if (0xf < local_30) {
        ppppuVar13 = (undefined8 ****)local_48;
      }
      if (0xf < *(ulonglong *)(lVar7 + 0x48)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      if ((sVar8 != local_38) ||
         ((sVar8 != 0 && (iVar6 = memcmp(puVar11,ppppuVar13,sVar8), iVar6 != 0)))) {
        *(undefined1 *)(lVar2 + 0x148) = 1;
      }
    }
    if (0xf < uVar12) {
      uVar14 = uVar12 + 1;
      ppppuVar13 = (undefined8 ****)pppuVar4;
      if (0xfff < uVar14) {
        ppppuVar13 = (undefined8 ****)pppuVar4[-1];
        if (0x1f < (ulonglong)((longlong)pppuVar4 + (-8 - (longlong)ppppuVar13))) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar14 = uVar12 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar13,uVar14);
    }
  }
  return;
}

