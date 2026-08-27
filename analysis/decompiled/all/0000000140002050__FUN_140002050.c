// Function: FUN_140002050
// Addr: 140002050
// Size: 273 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140002050(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  char **ppcVar5;
  undefined1 local_38 [16];
  char *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_28 = (char *)0x0;
  uStack_20 = 0;
  local_10 = 0;
  local_28 = (char *)FUN_14028af20(0x20);
  uVar4 = s__alias_lightCookie_14048b498._16_2_;
  uVar3 = s__alias_lightCookie_14048b498._12_4_;
  uVar2 = s__alias_lightCookie_14048b498._8_4_;
  uVar1 = s__alias_lightCookie_14048b498._4_4_;
  local_18 = 0x12;
  local_10 = 0x1f;
  *(undefined4 *)local_28 = s__alias_lightCookie_14048b498._0_4_;
  *(undefined4 *)(local_28 + 4) = uVar1;
  *(undefined4 *)(local_28 + 8) = uVar2;
  *(undefined4 *)(local_28 + 0xc) = uVar3;
  *(undefined2 *)(local_28 + 0x10) = uVar4;
  local_28[0x12] = '\0';
  _DAT_1404e7f50 = 0;
  DAT_1404e7f58 = 0;
  _DAT_1404e7f60 = 0;
  DAT_1404e7f58 = FUN_14028af20(0x30);
  *(longlong *)DAT_1404e7f58 = DAT_1404e7f58;
  *(longlong *)(DAT_1404e7f58 + 8) = DAT_1404e7f58;
  DAT_1404e7f68 = 0;
  _DAT_1404e7f70 = 0;
  uRam00000001404e7f78 = 0;
  _DAT_1404e7f80 = 7;
  _DAT_1404e7f88 = 8;
  _DAT_1404e7f50 = 0x3f800000;
  FUN_140037600(&DAT_1404e7f68,0x10,DAT_1404e7f58);
  ppcVar5 = &local_28;
  do {
    FUN_140032bc0(&DAT_1404e7f50,local_38,ppcVar5);
    ppcVar5 = ppcVar5 + 4;
  } while (ppcVar5 != (char **)&stack0xfffffffffffffff8);
  FUN_140017240(&local_28);
  FUN_14028b410(FUN_140424a80);
  return;
}

