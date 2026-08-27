// Function: FUN_140275ef0
// Addr: 140275ef0
// Size: 488 bytes


/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_140275ef0(longlong param_1,char *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char *******pppppppcVar5;
  char *******pppppppcVar6;
  ulonglong _Size;
  ulonglong uVar7;
  int iVar8;
  size_t sVar9;
  ulonglong uVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar11;
  char *******pppppppcVar12;
  ulonglong uVar13;
  undefined8 *_Buf2;
  char *******pppppppcVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  char *******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  
  puVar16 = auStack_88;
  local_58 = 0;
  local_50 = 0;
  local_68 = (char *******)0x0;
  uStack_60 = 0;
  sVar9 = strlen(param_2);
  uVar10 = FUN_140017480(&local_68,param_2,sVar9);
  pppppppcVar12 = (char *******)&local_68;
  if (0xf < local_50) {
    pppppppcVar12 = local_68;
  }
  pppppppcVar14 = (char *******)((longlong)pppppppcVar12 + local_58);
  pppppppcVar5 = (char *******)&local_68;
  pppppppcVar6 = local_68;
  _Size = local_58;
  uVar7 = local_50;
  if (0xf < local_50) {
    pppppppcVar5 = local_68;
  }
  for (; local_68 = pppppppcVar6, local_58 = _Size, local_50 = uVar7, pppppppcVar5 != pppppppcVar14;
      pppppppcVar5 = (char *******)((longlong)pppppppcVar5 + 1)) {
    iVar8 = tolower((int)*(char *)pppppppcVar5);
    uVar10 = CONCAT44(extraout_var,iVar8);
    *(char *)pppppppcVar12 = (char)iVar8;
    pppppppcVar12 = (char *******)((longlong)pppppppcVar12 + 1);
    pppppppcVar6 = local_68;
    _Size = local_58;
    uVar7 = local_50;
  }
  uVar11 = 0xcbf29ce484222325;
  pppppppcVar12 = (char *******)&local_68;
  if (0xf < uVar7) {
    pppppppcVar12 = pppppppcVar6;
  }
  uVar13 = 0;
  if (_Size != 0) {
    do {
      uVar10 = (ulonglong)*(byte *)((longlong)pppppppcVar12 + uVar13);
      uVar13 = uVar13 + 1;
      uVar11 = (uVar11 ^ uVar10) * 0x100000001b3;
    } while (uVar13 < _Size);
  }
  uVar11 = uVar11 & *(ulonglong *)(param_1 + 0x68);
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8 + uVar11 * 0x10);
  if (lVar15 != lVar2) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + uVar11 * 0x10);
    while( true ) {
      _Buf2 = (undefined8 *)(lVar15 + 0x10);
      if (0xf < *(ulonglong *)(lVar15 + 0x28)) {
        _Buf2 = (undefined8 *)*_Buf2;
      }
      pppppppcVar12 = (char *******)&local_68;
      if (0xf < uVar7) {
        pppppppcVar12 = pppppppcVar6;
      }
      if (_Size == *(ulonglong *)(lVar15 + 0x20)) {
        if (_Size == 0) goto LAB_14027604f;
        iVar8 = memcmp(pppppppcVar12,_Buf2,_Size);
        uVar10 = CONCAT44(extraout_var_00,iVar8);
        if (iVar8 == 0) goto LAB_14027604f;
      }
      if (lVar15 == lVar3) break;
      lVar15 = *(longlong *)(lVar15 + 8);
    }
  }
  lVar15 = 0;
LAB_14027604f:
  if (lVar15 == 0) {
    lVar15 = lVar2;
  }
  if (0xf < uVar7) {
    uVar10 = uVar7 + 1;
    pppppppcVar12 = pppppppcVar6;
    if (0xfff < uVar10) {
      pppppppcVar12 = (char *******)pppppppcVar6[-1];
      if ((char *)0x1f < (char *)((longlong)pppppppcVar6 + (-8 - (longlong)pppppppcVar12))) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar16 = auStack_80;
        goto LAB_1402760b1;
      }
      uVar10 = uVar7 + 0x28;
    }
    uVar10 = thunk_FUN_14028af80(pppppppcVar12,uVar10);
  }
  local_58 = 0;
  local_50 = 0xf;
  local_68 = (char *******)((ulonglong)local_68 & 0xffffffffffffff00);
  if (lVar15 == *(longlong *)(param_1 + 0x40)) {
    return uVar10 & 0xffffffffffffff00;
  }
LAB_1402760b1:
  **(undefined4 **)(puVar16 + 0xa0) = *(undefined4 *)(lVar15 + 0x30);
  uVar1 = *(undefined4 *)(lVar15 + 0x34);
  *param_4 = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}

