// Function: FUN_14007bae0
// Addr: 14007bae0
// Size: 409 bytes


/* WARNING: Type propagation algorithm not settling */

char * FUN_14007bae0(char *param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  char *******pppppppcVar3;
  char *******pppppppcVar4;
  ulonglong uVar5;
  int iVar6;
  size_t sVar7;
  char *******pppppppcVar8;
  ulonglong uVar9;
  char *_Str;
  char *******pppppppcVar10;
  undefined1 *puVar11;
  ulonglong _Size;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  char *******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  
  puVar11 = auStack_a8;
  do {
    if (param_1 == param_2) {
      return param_1;
    }
    local_58 = 4;
    uStack_60 = 0;
    local_68 = (ulonglong)DAT_1404781d8;
    local_50 = 0xf;
    _Str = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      _Str = *(char **)param_1;
    }
    local_78 = 0;
    local_70 = 0;
    local_88 = (char *******)0x0;
    uStack_80 = 0;
    sVar7 = strlen(_Str);
    FUN_140017480(&local_88,_Str,sVar7);
    pppppppcVar8 = (char *******)&local_88;
    if (0xf < local_70) {
      pppppppcVar8 = local_88;
    }
    pppppppcVar10 = (char *******)((longlong)pppppppcVar8 + local_78);
    pppppppcVar3 = (char *******)&local_88;
    pppppppcVar4 = local_88;
    uVar5 = local_70;
    if (0xf < local_70) {
      pppppppcVar3 = local_88;
    }
    for (; local_88 = pppppppcVar4, local_70 = uVar5, pppppppcVar3 != pppppppcVar10;
        pppppppcVar3 = (char *******)((longlong)pppppppcVar3 + 1)) {
      iVar6 = tolower((int)*(char *)pppppppcVar3);
      *(char *)pppppppcVar8 = (char)iVar6;
      pppppppcVar8 = (char *******)((longlong)pppppppcVar8 + 1);
      pppppppcVar4 = local_88;
      uVar5 = local_70;
    }
    if (local_78 < 4) {
LAB_14007bc12:
      bVar2 = false;
    }
    else {
      uVar9 = local_78 - 4;
      if (local_78 < uVar9) goto LAB_14007bc74;
      _Size = 4;
      if (local_78 - uVar9 < 4) {
        _Size = local_78 - uVar9;
      }
      pppppppcVar8 = (char *******)&local_88;
      if (0xf < uVar5) {
        pppppppcVar8 = pppppppcVar4;
      }
      iVar6 = memcmp((char *)((longlong)pppppppcVar8 + uVar9),&local_68,_Size);
      if ((iVar6 != 0) || (_Size < 4)) goto LAB_14007bc12;
      bVar2 = true;
    }
    if (0xf < uVar5) {
      uVar9 = uVar5 + 1;
      pppppppcVar8 = pppppppcVar4;
      if (0xfff < uVar9) {
        pppppppcVar8 = (char *******)pppppppcVar4[-1];
        if ((char *)0x1f < (char *)((longlong)pppppppcVar4 + (-8 - (longlong)pppppppcVar8))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar11 = auStack_a0;
LAB_14007bc74:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar11 + -8) = &UNK_14007bc79;
          FUN_140012940();
        }
        uVar9 = uVar5 + 0x28;
      }
      thunk_FUN_14028af80(pppppppcVar8,uVar9);
    }
    if (bVar2) {
      return param_1;
    }
    param_1 = param_1 + 0x48;
  } while( true );
}

