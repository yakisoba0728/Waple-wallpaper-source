// Function: FUN_1400397c0
// Addr: 1400397c0
// Size: 300 bytes


undefined8 * FUN_1400397c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  longlong lVar5;
  undefined4 *puVar6;
  char *_Str;
  undefined1 local_68 [56];
  
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = std::numpunct<char>::vftable;
  puVar3 = (undefined8 *)FUN_1402ca9c0();
  FUN_140291ac0(local_68);
  _Str = "";
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_4 == '\0') {
    _Str = (char *)puVar3[2];
  }
  sVar4 = strlen(_Str);
  lVar1 = sVar4 + 1;
  lVar5 = _calloc_base(lVar1,1);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14028b8c0();
  }
  if (lVar1 != 0) {
    FUN_1404210f0(lVar5,_Str,lVar1);
  }
  param_1[2] = lVar5;
  puVar6 = (undefined4 *)_calloc_base(6,1);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = DAT_140474458;
    *(undefined2 *)(puVar6 + 1) = DAT_14047445c;
    param_1[4] = puVar6;
    puVar6 = (undefined4 *)_calloc_base(5,1);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = DAT_140474460;
      *(undefined1 *)(puVar6 + 1) = DAT_140474464;
      param_1[5] = puVar6;
      if (param_4 == '\0') {
        *(undefined1 *)(param_1 + 3) = *(undefined1 *)*puVar3;
        uVar2 = *(undefined1 *)puVar3[1];
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0x2e;
        uVar2 = 0x2c;
      }
      *(undefined1 *)((longlong)param_1 + 0x19) = uVar2;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14028b8c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028b8c0();
}

