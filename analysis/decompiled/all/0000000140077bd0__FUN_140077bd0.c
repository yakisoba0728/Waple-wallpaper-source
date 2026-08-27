// Function: FUN_140077bd0
// Addr: 140077bd0
// Size: 565 bytes


/* WARNING: Removing unreachable block (ram,0x000140077d75) */
/* WARNING: Removing unreachable block (ram,0x000140077d82) */
/* WARNING: Removing unreachable block (ram,0x000140077d93) */
/* WARNING: Removing unreachable block (ram,0x000140077d9a) */

undefined8 * FUN_140077bd0(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  char *****pppppcVar4;
  char *****pppppcVar5;
  ulonglong uVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  char *****pppppcVar10;
  ulonglong uVar11;
  char *_Str;
  char *****pppppcVar12;
  undefined1 *puVar13;
  ulonglong _Size;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  char ****local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  
  puVar13 = auStack_a8;
  pcVar8 = (char *)FUN_14007bae0(param_2,param_3);
  pcVar3 = pcVar8;
  if (pcVar8 != param_3) {
    while (pcVar3 = pcVar3 + 0x48, pcVar3 != param_3) {
      uStack_60 = 0;
      local_68 = (ulonglong)DAT_1404781d8;
      local_58 = 4;
      local_50 = 0xf;
      _Str = pcVar3;
      if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
        _Str = *(char **)pcVar3;
      }
      local_78 = 0;
      local_70 = 0;
      local_88 = (char ****)0x0;
      uStack_80 = 0;
      sVar9 = strlen(_Str);
      FUN_140017480(&local_88,_Str,sVar9);
      pppppcVar10 = &local_88;
      if (0xf < local_70) {
        pppppcVar10 = (char *****)local_88;
      }
      pppppcVar12 = (char *****)((longlong)pppppcVar10 + local_78);
      pppppcVar4 = &local_88;
      pppppcVar5 = (char *****)local_88;
      uVar6 = local_70;
      if (0xf < local_70) {
        pppppcVar4 = (char *****)local_88;
      }
      for (; local_88 = (char ****)pppppcVar5, local_70 = uVar6, pppppcVar4 != pppppcVar12;
          pppppcVar4 = (char *****)((longlong)pppppcVar4 + 1)) {
        iVar7 = tolower((int)*(char *)pppppcVar4);
        *(char *)pppppcVar10 = (char)iVar7;
        pppppcVar10 = (char *****)((longlong)pppppcVar10 + 1);
        pppppcVar5 = (char *****)local_88;
        uVar6 = local_70;
      }
      if (local_78 < 4) {
LAB_140077d35:
        bVar2 = false;
      }
      else {
        uVar11 = local_78 - 4;
        if (local_78 < uVar11) goto LAB_140077e00;
        _Size = 4;
        if (local_78 - uVar11 < 4) {
          _Size = local_78 - uVar11;
        }
        pppppcVar10 = &local_88;
        if (0xf < uVar6) {
          pppppcVar10 = pppppcVar5;
        }
        iVar7 = memcmp((char *)((longlong)pppppcVar10 + uVar11),&local_68,_Size);
        if ((iVar7 != 0) || (_Size < 4)) goto LAB_140077d35;
        bVar2 = true;
      }
      if (0xf < uVar6) {
        uVar11 = uVar6 + 1;
        pppppcVar10 = pppppcVar5;
        if (0xfff < uVar11) {
          pppppcVar10 = (char *****)pppppcVar5[-1];
          if ((char *)0x1f < (char *)((longlong)pppppcVar5 + (-8 - (longlong)pppppcVar10))) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar13 = auStack_a0;
LAB_140077e00:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar13 + -8) = &UNK_140077e05;
            FUN_140012940();
          }
          uVar11 = uVar6 + 0x28;
        }
        thunk_FUN_14028af80(pppppcVar10,uVar11);
      }
      if (!bVar2) {
        FUN_14000de40(pcVar8,pcVar3);
        *(undefined4 *)(pcVar8 + 0x20) = *(undefined4 *)(pcVar3 + 0x20);
        FUN_14000de40(pcVar8 + 0x28,pcVar3 + 0x28);
        pcVar8 = pcVar8 + 0x48;
      }
    }
  }
  *param_1 = pcVar8;
  return param_1;
}

