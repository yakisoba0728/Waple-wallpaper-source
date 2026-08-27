// Function: FUN_1402fc6b0
// Addr: 1402fc6b0
// Size: 557 bytes


ulonglong FUN_1402fc6b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  ulonglong uVar2;
  ushort *puVar3;
  ushort uVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ulonglong uVar12;
  
  uVar2 = FUN_1402ffeb0(param_2,param_3);
  if ((int)uVar2 == 0) {
    if ((*(byte *)(param_2 + 0x1178) & 1) == 0) {
      uVar2 = FUN_1402fdd30(param_2,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      FUN_1402fd550(param_2,param_4,0);
    }
    if ((*(byte *)(param_2 + 0x1178) & 2) == 0) {
      uVar2 = FUN_1402fdd30(param_2,1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      FUN_1402fd550(param_2,param_4,1);
    }
    uVar2 = uVar2 & 0xffffffff;
    iVar7 = 0;
LAB_1402fc735:
    do {
      if (iVar7 == 0) {
        if ((*(byte *)(param_2 + 0x1178) & 1) != 0) {
          iVar7 = 1;
          goto LAB_1402fc735;
        }
LAB_1402fc75c:
        FUN_1402fd060(param_2,iVar7);
        uVar10 = *(ulonglong *)((longlong)iVar7 * 0x898 + 0x60 + param_2);
        if (uVar10 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = uVar10 + (ulonglong)*(uint *)((longlong)iVar7 * 0x898 + 0x58 + param_2) * 0x48;
        }
        if (iVar7 == 0) {
          if ((*(byte *)(param_2 + 0x117c) & 1) == 0) goto LAB_1402fc798;
LAB_1402fc7d7:
          bVar1 = true;
        }
        else {
          if ((iVar7 == 1) && ((*(byte *)(param_2 + 0x117c) & 2) != 0)) goto LAB_1402fc7d7;
LAB_1402fc798:
          bVar1 = false;
        }
        for (; uVar10 < uVar12; uVar10 = uVar10 + 0x48) {
          lVar5 = *(longlong *)(uVar10 + 0x38);
          if (bVar1) {
            do {
              puVar3 = *(ushort **)(lVar5 + 0x38);
              while( true ) {
                if (iVar7 == 0) {
                  *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(uVar10 + 8);
                  uVar4 = *puVar3 | 4;
                }
                else {
                  *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(uVar10 + 8);
                  uVar4 = *puVar3 | 8;
                }
                *puVar3 = uVar4;
                if (puVar3 == *(ushort **)(lVar5 + 0x40)) break;
                puVar3 = *(ushort **)(puVar3 + 0x10);
              }
              lVar5 = *(longlong *)(lVar5 + 0x18);
            } while (lVar5 != *(longlong *)(uVar10 + 0x38));
          }
          else {
            iVar8 = *(int *)(uVar10 + 8) - *(int *)(uVar10 + 4);
            do {
              puVar3 = *(ushort **)(lVar5 + 0x38);
              while( true ) {
                if (iVar7 == 0) {
                  *(int *)(puVar3 + 8) = *(int *)(puVar3 + 8) + iVar8;
                  uVar4 = *puVar3 | 4;
                }
                else {
                  *(int *)(puVar3 + 10) = *(int *)(puVar3 + 10) + iVar8;
                  uVar4 = *puVar3 | 8;
                }
                *puVar3 = uVar4;
                if (puVar3 == *(ushort **)(lVar5 + 0x40)) break;
                puVar3 = *(ushort **)(puVar3 + 0x10);
              }
              lVar5 = *(longlong *)(lVar5 + 0x18);
            } while (lVar5 != *(longlong *)(uVar10 + 0x38));
          }
        }
        FUN_1402ff410(param_2,iVar7);
        FUN_1402ff660(param_2,iVar7);
      }
      else if ((iVar7 == 1) && ((*(byte *)(param_2 + 0x1178) & 2) == 0)) goto LAB_1402fc75c;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    puVar3 = *(ushort **)(param_2 + 0x20);
    puVar9 = *(undefined4 **)(param_3 + 8);
    pcVar6 = *(char **)(param_3 + 0x10);
    puVar11 = puVar3 + (longlong)*(int *)(param_2 + 0x1c) * 0x18;
    for (; puVar3 < puVar11; puVar3 = puVar3 + 0x18) {
      *puVar9 = *(undefined4 *)(puVar3 + 8);
      puVar9[1] = *(undefined4 *)(puVar3 + 10);
      if ((*puVar3 & 1) == 0) {
        *pcVar6 = ((*puVar3 & 2) != 0) + '\x01';
      }
      else {
        *pcVar6 = '\0';
      }
      puVar9 = puVar9 + 2;
      pcVar6 = pcVar6 + 1;
    }
  }
  return uVar2;
}

