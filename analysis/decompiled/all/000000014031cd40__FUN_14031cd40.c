// Function: FUN_14031cd40
// Addr: 14031cd40
// Size: 264 bytes


ulonglong FUN_14031cd40(longlong param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *_Str2;
  uint uVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x3e0);
  if (*(char *)(lVar4 + 0x24) == '\x02') {
    uVar3 = FUN_1402f0420(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),&DAT_14043bd54);
    lVar4 = FUN_1402f81e0(uVar3,"glyph-dict",0);
    if ((lVar4 != 0) && (*(code **)(lVar4 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014031cdad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(lVar4 + 8))(param_1,param_2);
      return uVar5;
    }
  }
  else {
    lVar6 = FUN_1402f81e0(*(longlong *)(param_1 + 0x90),"postscript-cmaps",1);
    if ((lVar6 != 0) && (uVar5 = 0, *(int *)(lVar4 + 0x20) != 0)) {
      do {
        uVar1 = *(ushort *)(*(longlong *)(lVar4 + 0x4d8) + uVar5 * 2);
        if (uVar1 < 0x187) {
          _Str2 = (char *)(**(code **)(lVar6 + 0x28))();
        }
        else {
          uVar7 = uVar1 - 0x187;
          if (uVar7 < *(uint *)(lVar4 + 0x5c0)) {
            _Str2 = *(char **)(*(longlong *)(lVar4 + 0x5c8) + (ulonglong)uVar7 * 8);
          }
          else {
            _Str2 = (char *)0x0;
          }
        }
        if ((_Str2 != (char *)0x0) && (iVar2 = strcmp(param_2,_Str2), iVar2 == 0)) {
          return uVar5;
        }
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(lVar4 + 0x20));
    }
  }
  return 0;
}

