// Function: FUN_1402760e0
// Addr: 1402760e0
// Size: 512 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1402760e0(longlong param_1,undefined8 *param_2,char *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char *******pppppppcVar5;
  char *******pppppppcVar6;
  ulonglong uVar7;
  int iVar8;
  size_t sVar9;
  ulonglong uVar10;
  char *******pppppppcVar11;
  ulonglong uVar12;
  undefined8 *_Buf2;
  ulonglong uVar13;
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
  sVar9 = strlen(param_3);
  FUN_140017480(&local_68,param_3,sVar9);
  pppppppcVar11 = (char *******)&local_68;
  if (0xf < local_50) {
    pppppppcVar11 = local_68;
  }
  pppppppcVar14 = (char *******)((longlong)pppppppcVar11 + local_58);
  pppppppcVar5 = (char *******)&local_68;
  pppppppcVar6 = local_68;
  uVar13 = local_58;
  uVar7 = local_50;
  if (0xf < local_50) {
    pppppppcVar5 = local_68;
  }
  for (; local_68 = pppppppcVar6, local_58 = uVar13, local_50 = uVar7, pppppppcVar5 != pppppppcVar14
      ; pppppppcVar5 = (char *******)((longlong)pppppppcVar5 + 1)) {
    iVar8 = tolower((int)*(char *)pppppppcVar5);
    *(char *)pppppppcVar11 = (char)iVar8;
    pppppppcVar11 = (char *******)((longlong)pppppppcVar11 + 1);
    pppppppcVar6 = local_68;
    uVar13 = local_58;
    uVar7 = local_50;
  }
  uVar10 = 0xcbf29ce484222325;
  pppppppcVar11 = (char *******)&local_68;
  if (0xf < uVar7) {
    pppppppcVar11 = pppppppcVar6;
  }
  uVar12 = 0;
  if (uVar13 != 0) {
    do {
      pbVar1 = (byte *)((longlong)pppppppcVar11 + uVar12);
      uVar12 = uVar12 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar12 < uVar13);
  }
  uVar10 = uVar10 & *(ulonglong *)(param_1 + 0x68);
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8 + uVar10 * 0x10);
  if (lVar15 != lVar2) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + uVar10 * 0x10);
    while( true ) {
      _Buf2 = (undefined8 *)(lVar15 + 0x10);
      if (0xf < *(ulonglong *)(lVar15 + 0x28)) {
        _Buf2 = (undefined8 *)*_Buf2;
      }
      pppppppcVar11 = (char *******)&local_68;
      if (0xf < uVar7) {
        pppppppcVar11 = pppppppcVar6;
      }
      if ((uVar13 == *(ulonglong *)(lVar15 + 0x20)) &&
         ((uVar13 == 0 || (iVar8 = memcmp(pppppppcVar11,_Buf2,uVar13), iVar8 == 0))))
      goto LAB_14027623f;
      if (lVar15 == lVar3) break;
      lVar15 = *(longlong *)(lVar15 + 8);
    }
  }
  lVar15 = 0;
LAB_14027623f:
  if (lVar15 == 0) {
    lVar15 = lVar2;
  }
  if (0xf < uVar7) {
    uVar13 = uVar7 + 1;
    pppppppcVar11 = pppppppcVar6;
    if (0xfff < uVar13) {
      pppppppcVar11 = (char *******)pppppppcVar6[-1];
      if ((char *)0x1f < (char *)((longlong)pppppppcVar6 + (-8 - (longlong)pppppppcVar11))) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar16 = auStack_80;
        goto LAB_1402762bf;
      }
      uVar13 = uVar7 + 0x28;
    }
    thunk_FUN_14028af80(pppppppcVar11,uVar13);
  }
  if (lVar15 == *(longlong *)(param_1 + 0x40)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    sVar9 = strlen(param_3);
    FUN_140017480(param_2,param_3,sVar9);
    return param_2;
  }
LAB_1402762bf:
  *(undefined8 *)(puVar16 + -8) = 0x1402762cc;
  FUN_140005790(param_2,param_1 + 0x18);
  return param_2;
}

