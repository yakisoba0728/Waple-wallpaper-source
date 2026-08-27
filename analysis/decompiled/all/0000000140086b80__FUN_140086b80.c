// Function: FUN_140086b80
// Addr: 140086b80
// Size: 277 bytes


longlong * FUN_140086b80(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  
  if (*(char *)(param_1 + 1) == '\0') {
    plVar4 = (longlong *)FUN_140084ac0();
    return plVar4;
  }
  plVar4 = (longlong *)*param_1;
  plVar7 = (longlong *)*plVar4;
  plVar6 = (longlong *)plVar7[1];
  plVar5 = plVar4;
  if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
    uVar1 = param_2 >> 2;
    do {
      if (plVar6[4] == 0) {
        bVar9 = *(uint *)(plVar6 + 5) < param_2;
LAB_140086c23:
        if (!bVar9) {
LAB_140086c2a:
          plVar7 = plVar6;
        }
      }
      else {
        uVar8 = *(uint *)(plVar6 + 5) >> 2;
        FID_conflict__assert
                  (L"this->cstr_ && other.cstr_",
                   L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x146);
        uVar2 = uVar8;
        if (uVar1 < uVar8) {
          uVar2 = uVar1;
        }
        iVar3 = memcmp((void *)plVar6[4],(void *)0x0,(ulonglong)uVar2);
        if (-1 < iVar3) {
          if (iVar3 < 1) {
            bVar9 = uVar8 < uVar1;
            goto LAB_140086c23;
          }
          bVar9 = false;
          goto LAB_140086c2a;
        }
        bVar9 = true;
      }
      plVar5 = plVar6 + 2;
      if (!bVar9) {
        plVar5 = plVar6;
      }
      plVar6 = (longlong *)*plVar5;
    } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
    plVar5 = (longlong *)*param_1;
  }
  if ((*(char *)((longlong)plVar7 + 0x19) != '\0') || (param_2 < *(uint *)(plVar7 + 5))) {
    plVar7 = (longlong *)*plVar4;
  }
  if (plVar7 != (longlong *)*plVar5) {
    return plVar7 + 6;
  }
  plVar4 = (longlong *)FUN_140084ac0();
  return plVar4;
}

