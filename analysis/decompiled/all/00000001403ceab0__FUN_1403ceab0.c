// Function: FUN_1403ceab0
// Addr: 1403ceab0
// Size: 522 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1403ceab0(longlong *param_1)

{
  char *_Str;
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char *_Str_00;
  undefined8 *puVar7;
  char *pcVar8;
  size_t sVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  puVar7 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar7 != (undefined8 *)0x0) {
      s_fallback_140457a70[0] = (char)s_fallback_140457a70._0_8_;
      s_fallback_140457a70[1] = SUB81(s_fallback_140457a70._0_8_,1);
      s_fallback_140457a70[2] = SUB81(s_fallback_140457a70._0_8_,2);
      s_fallback_140457a70[3] = SUB81(s_fallback_140457a70._0_8_,3);
      s_fallback_140457a70[4] = SUB81(s_fallback_140457a70._0_8_,4);
      s_fallback_140457a70[5] = SUB81(s_fallback_140457a70._0_8_,5);
      s_fallback_140457a70[6] = SUB81(s_fallback_140457a70._0_8_,6);
      s_fallback_140457a70[7] = SUB81(s_fallback_140457a70._0_8_,7);
      s_directwrite_140457a58[0] = (char)s_directwrite_140457a58._0_8_;
      s_directwrite_140457a58[1] = SUB81(s_directwrite_140457a58._0_8_,1);
      s_directwrite_140457a58[2] = SUB81(s_directwrite_140457a58._0_8_,2);
      s_directwrite_140457a58[3] = SUB81(s_directwrite_140457a58._0_8_,3);
      s_directwrite_140457a58[4] = SUB81(s_directwrite_140457a58._0_8_,4);
      s_directwrite_140457a58[5] = SUB81(s_directwrite_140457a58._0_8_,5);
      s_directwrite_140457a58[6] = SUB81(s_directwrite_140457a58._0_8_,6);
      s_directwrite_140457a58[7] = SUB81(s_directwrite_140457a58._0_8_,7);
      return puVar7;
    }
    _Str_00 = (char *)common_getenv<>("HB_SHAPER_LIST");
    if (((_Str_00 == (char *)0x0) || (*_Str_00 == '\0')) ||
       (puVar7 = (undefined8 *)_calloc_base(1,0x48), uVar2 = _UNK_140457a48,
       puVar7 == (undefined8 *)0x0)) {
      puVar7 = (undefined8 *)&DAT_140457a40;
    }
    else {
      uVar12 = 0;
      *puVar7 = _DAT_140457a40;
      puVar7[1] = uVar2;
      uVar2 = s_directwrite_140457a58._0_8_;
      puVar7[2] = PTR_FUN_140457a50;
      puVar7[3] = uVar2;
      uVar2 = _UNK_140457a68;
      puVar7[4] = ram0x000140457a60;
      puVar7[5] = uVar2;
      uVar2 = ram0x000140457a78;
      puVar7[6] = s_fallback_140457a70._0_8_;
      puVar7[7] = uVar2;
      puVar7[8] = PTR_FUN_140457a80;
      while( true ) {
        pcVar8 = (char *)FUN_1402bbe10(_Str_00,0x2c);
        if (pcVar8 == (char *)0x0) {
          sVar9 = strlen(_Str_00);
          pcVar8 = _Str_00 + sVar9;
        }
        uVar11 = (uint)uVar12;
        uVar10 = uVar12;
        while (uVar11 < 3) {
          _Str = (char *)(puVar7 + uVar10 * 3);
          sVar9 = strlen(_Str);
          if (((longlong)pcVar8 - (longlong)_Str_00 == (longlong)(int)sVar9) &&
             (iVar6 = strncmp(_Str,_Str_00,(ulonglong)(uint)((int)pcVar8 - (int)_Str_00)),
             iVar6 == 0)) {
            uVar4 = *(undefined8 *)_Str;
            uVar5 = *(undefined8 *)(_Str + 8);
            uVar2 = *(undefined8 *)(_Str + 0x10);
            uVar11 = (int)uVar12 + 1;
            puVar1 = puVar7 + uVar12 * 3;
            FUN_1404210f0(puVar7 + (ulonglong)uVar11 * 3,puVar1,
                          (ulonglong)(uint)((int)uVar10 - (int)uVar12) * 0x18);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            uVar12 = (ulonglong)uVar11;
            puVar1[2] = uVar2;
          }
          uVar11 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar11;
        }
        if (*pcVar8 == '\0') break;
        _Str_00 = pcVar8 + 1;
      }
      FUN_14028b410(&LAB_1403c4da0);
    }
    LOCK();
    lVar3 = *param_1;
    if (lVar3 == 0) {
      *param_1 = (longlong)puVar7;
    }
    UNLOCK();
    if (lVar3 == 0) break;
    if ((puVar7 != (undefined8 *)0x0) && (puVar7 != (undefined8 *)&DAT_140457a40)) {
      thunk_FUN_1402d9040(puVar7);
    }
    puVar7 = (undefined8 *)*param_1;
  }
  return puVar7;
}

