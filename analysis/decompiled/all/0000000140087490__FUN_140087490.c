// Function: FUN_140087490
// Addr: 140087490
// Size: 429 bytes


longlong * FUN_140087490(undefined8 *param_1,void *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  if (*(char *)(param_1 + 1) == '\0') {
    return (longlong *)0x0;
  }
  uVar9 = param_3 - (int)param_2;
  plVar3 = (longlong *)*param_1;
  plVar6 = (longlong *)*plVar3;
  plVar4 = (longlong *)plVar6[1];
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    uVar10 = uVar9 & 0x3fffffff;
    do {
      if (plVar4[4] == 0) {
        bVar11 = *(uint *)(plVar4 + 5) < uVar9 * 4;
LAB_140087569:
        if (!bVar11) {
LAB_140087570:
          plVar6 = plVar4;
        }
      }
      else {
        uVar7 = *(uint *)(plVar4 + 5) >> 2;
        uVar8 = uVar7;
        if (uVar10 < uVar7) {
          uVar8 = uVar10;
        }
        if (param_2 == (void *)0x0) {
          FID_conflict__assert
                    (L"this->cstr_ && other.cstr_",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        }
        iVar1 = memcmp((void *)plVar4[4],param_2,(ulonglong)uVar8);
        if (-1 < iVar1) {
          if (iVar1 < 1) {
            bVar11 = uVar7 < uVar10;
            goto LAB_140087569;
          }
          bVar11 = false;
          goto LAB_140087570;
        }
        bVar11 = true;
      }
      plVar2 = plVar4 + 2;
      if (!bVar11) {
        plVar2 = plVar4;
      }
      plVar4 = (longlong *)*plVar2;
    } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
  }
  if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
    if (param_2 == (void *)0x0) {
      bVar11 = uVar9 * 4 < *(uint *)(plVar6 + 5);
    }
    else {
      uVar9 = uVar9 & 0x3fffffff;
      uVar8 = *(uint *)(plVar6 + 5) >> 2;
      uVar10 = uVar9;
      if (uVar8 < uVar9) {
        uVar10 = uVar8;
      }
      if (plVar6[4] == 0) {
        FID_conflict__assert
                  (L"this->cstr_ && other.cstr_",
                   L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
      }
      puVar5 = (undefined8 *)*param_1;
      iVar1 = memcmp(param_2,(void *)plVar6[4],(ulonglong)uVar10);
      if (iVar1 < 0) goto LAB_140087609;
      if (0 < iVar1) goto LAB_14008760c;
      bVar11 = uVar9 < uVar8;
    }
    puVar5 = (undefined8 *)*param_1;
    if (!bVar11) goto LAB_14008760c;
  }
  else {
    puVar5 = (undefined8 *)*param_1;
  }
LAB_140087609:
  plVar6 = (longlong *)*plVar3;
LAB_14008760c:
  plVar3 = (longlong *)0x0;
  if (plVar6 != (longlong *)*puVar5) {
    plVar3 = plVar6 + 6;
  }
  return plVar3;
}

