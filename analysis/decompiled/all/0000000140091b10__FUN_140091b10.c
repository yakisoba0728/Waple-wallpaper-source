// Function: FUN_140091b10
// Addr: 140091b10
// Size: 981 bytes


undefined8 * FUN_140091b10(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  param_1 = param_1 + 8;
  lVar14 = FUN_140087490(param_1,"collectComments","");
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  uVar2 = FUN_140086300(lVar14);
  lVar14 = FUN_140087490(param_1,"allowComments","");
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  uVar3 = FUN_140086300(lVar14);
  lVar14 = FUN_140087490(param_1,"allowTrailingCommas","");
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  uVar4 = FUN_140086300(lVar14);
  lVar14 = FUN_140087490(param_1,"strictRoot","");
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  uVar5 = FUN_140086300(lVar14);
  lVar14 = FUN_140087490(param_1,"allowDroppedNullPlaceholders","");
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  uVar6 = FUN_140086300(lVar14);
  lVar14 = FUN_140087490(param_1,"allowNumericKeys","");
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  uVar7 = FUN_140086300(lVar14);
  lVar14 = FUN_140087490(param_1,"allowSingleQuotes","");
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  uVar8 = FUN_140086300(lVar14);
  lVar14 = FUN_140087490(param_1,"stackLimit","");
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  uVar13 = FUN_140085f70(lVar14);
  lVar14 = FUN_140087490(param_1,"failIfExtra","");
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  uVar9 = FUN_140086300(lVar14);
  lVar14 = FUN_140087490(param_1,"rejectDupKeys","");
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  uVar10 = FUN_140086300(lVar14);
  lVar14 = FUN_140087490(param_1,"allowSpecialFloats","");
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  uVar11 = FUN_140086300(lVar14);
  lVar14 = FUN_140087490(param_1,&DAT_140485588,&DAT_14048558f);
  if (lVar14 == 0) {
    lVar14 = FUN_140084ac0();
  }
  uVar12 = FUN_140086300(lVar14);
  puVar15 = (undefined8 *)FUN_14028af20(0x10);
  puVar16 = (undefined8 *)FUN_14028af20(0xf0);
  puVar1 = puVar16 + 2;
  *puVar16 = &PTR_FUN_1404855e0;
  *(undefined1 *)(puVar16 + 1) = uVar2;
  *puVar1 = 0;
  puVar16[3] = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar17 = (undefined8 *)FUN_14028af20();
  puVar17[1] = 0;
  *puVar1 = puVar17;
  *puVar17 = puVar1;
  puVar1 = puVar16 + 7;
  *puVar1 = 0;
  puVar16[8] = 0;
  puVar16[9] = 0;
  puVar16[10] = 0;
  puVar16[0xb] = 0;
  puVar17 = (undefined8 *)FUN_14028af20();
  puVar17[1] = 0;
  *puVar1 = puVar17;
  *puVar17 = puVar1;
  puVar16[0xc] = 0;
  puVar16[0xd] = 0;
  puVar16[0xe] = 0;
  puVar16[0xf] = 0xf;
  *(undefined1 *)(puVar16 + 0xc) = 0;
  puVar16[0x10] = 0;
  puVar16[0x11] = 0;
  puVar16[0x12] = 0;
  puVar16[0x13] = 0;
  puVar16[0x14] = 0;
  *(undefined1 *)(puVar16 + 0x15) = 0;
  puVar16[0x16] = 0;
  puVar16[0x17] = 0;
  puVar16[0x18] = 0;
  puVar16[0x19] = 0xf;
  *(undefined1 *)(puVar16 + 0x16) = 0;
  *(undefined1 *)(puVar16 + 0x1a) = uVar3;
  *(undefined1 *)((longlong)puVar16 + 0xd1) = uVar4;
  *(undefined1 *)((longlong)puVar16 + 0xd2) = uVar5;
  *(undefined1 *)((longlong)puVar16 + 0xd3) = uVar6;
  *(undefined1 *)((longlong)puVar16 + 0xd4) = uVar7;
  *(undefined1 *)((longlong)puVar16 + 0xd5) = uVar8;
  *(undefined4 *)((longlong)puVar16 + 0xda) = 0;
  *(undefined1 *)((longlong)puVar16 + 0xd6) = uVar9;
  *(undefined1 *)((longlong)puVar16 + 0xd7) = uVar10;
  *(undefined2 *)((longlong)puVar16 + 0xde) = 0;
  *(undefined1 *)(puVar16 + 0x1b) = uVar11;
  *(undefined1 *)((longlong)puVar16 + 0xd9) = uVar12;
  puVar16[0x1c] = (ulonglong)uVar13;
  *(undefined1 *)(puVar16 + 0x1d) = 0;
  puVar15[1] = puVar16;
  *puVar15 = &PTR_FUN_1404855b0;
  return puVar15;
}

