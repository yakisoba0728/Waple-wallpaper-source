// Function: FUN_1402ccccc
// Addr: 1402ccccc
// Size: 275 bytes


undefined4 FUN_1402ccccc(FILE *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  
  local_18 = auStack_38;
  if (param_1 == (FILE *)0x0) {
    local_18 = auStack_38;
    puVar4 = (undefined4 *)FUN_1402caf34();
    *puVar4 = 0x16;
    FUN_1402cad8c();
    return 0xffffffff;
  }
  FUN_1402c9b24();
  bVar1 = true;
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVar2 = _fileno(param_1);
    if (uVar2 < 0xfffffffe) {
      puVar6 = (undefined *)
               ((&DAT_1404e4890)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    else {
      puVar6 = &DAT_1404dc700;
    }
    puVar5 = &DAT_1404dc700;
    if (puVar6[0x39] == '\0') {
      if (uVar2 < 0xfffffffe) {
        puVar5 = (undefined *)
                 ((&DAT_1404e4890)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_1402ccd98;
    }
    bVar1 = false;
  }
LAB_1402ccd98:
  if (bVar1) {
    uVar3 = _fgetc_nolock(param_1);
    FUN_1402c9b30(param_1);
  }
  else {
    puVar4 = (undefined4 *)FUN_1402caf34();
    *puVar4 = 0x16;
    FUN_1402cad8c();
    FUN_1402edcf0(local_18,0x1402ccdbe);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

