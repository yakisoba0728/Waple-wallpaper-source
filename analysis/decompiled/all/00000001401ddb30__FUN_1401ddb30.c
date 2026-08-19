// Function: FUN_1401ddb30
// Addr: 1401ddb30
// Size: 17 bytes


void FUN_1401ddb30(longlong param_1)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lStackX_8;
  
  plVar8 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1510);
  iVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,*(undefined8 *)(param_1 + 0x180),param_1);
  lVar3 = *(longlong *)(param_1 + 0x180);
  plVar8 = *(longlong **)(lVar3 + 0x1a0);
  lVar4 = *(longlong *)(lVar3 + 0x198);
  lStackX_8 = param_1;
  if ((ulonglong)(longlong)iVar6 < (ulonglong)((longlong)plVar8 - lVar4 >> 3)) {
    plVar7 = (longlong *)(lVar4 + (longlong)iVar6 * 8);
    if (plVar8 == *(longlong **)(lVar3 + 0x1a8)) goto code_r0x0001401ddbe2;
    if (plVar7 != plVar8) {
      *plVar8 = plVar8[-1];
      *(longlong *)(lVar3 + 0x1a0) = *(longlong *)(lVar3 + 0x1a0) + 8;
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(plVar7 + 1,plVar7);
    }
code_r0x0001401ddbd2:
    *plVar8 = param_1;
    *(longlong *)(lVar3 + 0x1a0) = *(longlong *)(lVar3 + 0x1a0) + 8;
  }
  else {
    plVar7 = plVar8;
    if (plVar8 != *(longlong **)(lVar3 + 0x1a8)) goto code_r0x0001401ddbd2;
code_r0x0001401ddbe2:
    func_0x0001401a2500((longlong *)(lVar3 + 0x198),plVar7,&lStackX_8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x98))();
  uVar9 = 0xfffd;
  if ((*(longlong *)(param_1 + 0x180) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x180) + 0x120) & 6) == 0)) {
    uVar2 = *(ushort *)(param_1 + 0x120);
    *(ushort *)(param_1 + 0x120) = uVar2 & 0xfffd;
    if ((uVar2 & 4) == 0) {
      bVar5 = false;
      goto LAB_1401dda9c;
    }
  }
  else {
    *(ushort *)(param_1 + 0x120) = *(ushort *)(param_1 + 0x120) | 2;
  }
  bVar5 = true;
LAB_1401dda9c:
  plVar8 = *(longlong **)(param_1 + 0x198);
  plVar7 = *(longlong **)(param_1 + 0x1a0);
  if (plVar8 != plVar7) {
    if (bVar5) {
      do {
        lVar3 = *plVar8;
        puVar1 = (ushort *)(lVar3 + 0x120);
        *puVar1 = *puVar1 | 2;
        FUN_1401dd9d0(lVar3,1);
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar7);
      return;
    }
    do {
      lVar3 = *plVar8;
      uVar2 = *(ushort *)(lVar3 + 0x120);
      *(ushort *)(lVar3 + 0x120) = uVar2 & (ushort)uVar9;
      FUN_1401dd9d0(lVar3,CONCAT11((char)(uVar2 >> 8),(uVar2 & 4) != 0));
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar7);
  }
  return;
}

